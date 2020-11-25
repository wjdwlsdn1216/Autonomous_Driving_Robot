from __future__ import print_function
import click
import os
import re
import face_recognition
import multiprocessing
import itertools
import sys
import PIL.Image
import numpy as np

def scan_known_people(known_people_folder):
    known_names , known_face_encodings = [], []
    for file in image_files_in_folder(known_people_folder):
        basename = os.path.splitext(os.path.basename(file))[0]
        img = face_recognition.load_image_file(file)
        encodings = face_recognition.face_encodings(img)
        if len(encodings) > 1:
            click.echo("WARNING: More than one face found in {}. Only considering the first face.".format(file))
        if len(encodings) == 0:
            click.echo("WARNING: No faces found in {}. Ignoring file.".format(file))
        else:
            known_names.append(basename)
            known_face_encodings.append(encodings[0])
    return known_names, known_face_encodings

def print_result(filename, name, distance):
    return ("{},{},{}".format(filename, name, distance))

def test_image(image_to_check, known_names, known_face_encodings, tolerance):
    unknown_image = face_recognition.load_image_file(image_to_check)
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)
    unknown_encodings = face_recognition.face_encodings(unknown_image)
    for unknown_encoding in unknown_encodings:
        distances = face_recognition.face_distance(known_face_encodings, unknown_encoding)
        result = list(distances <= tolerance)
        if True in result:
            return [print_result(image_to_check, name, distance) for is_match, name, distance in zip(result, known_names, distances) if is_match]
        else:
            return print_result(image_to_check, "Warning : unknown_person", None)
    if not unknown_encodings:
        return print_result(image_to_check, "no_persons_found", None)

def image_files_in_folder(folder):
    return [os.path.join(folder, f) for f in os.listdir(folder) if re.match(r'.*\.(jpg|jpeg|png)', f, flags=re.I)]