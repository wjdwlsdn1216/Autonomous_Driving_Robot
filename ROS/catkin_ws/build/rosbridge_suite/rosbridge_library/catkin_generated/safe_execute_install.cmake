execute_process(COMMAND "/home/fetch/catkin_ws/build/rosbridge_suite/rosbridge_library/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/fetch/catkin_ws/build/rosbridge_suite/rosbridge_library/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
