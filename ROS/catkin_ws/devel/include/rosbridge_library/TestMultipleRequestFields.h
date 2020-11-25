// Generated by gencpp from file rosbridge_library/TestMultipleRequestFields.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTMULTIPLEREQUESTFIELDS_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTMULTIPLEREQUESTFIELDS_H

#include <ros/service_traits.h>


#include <rosbridge_library/TestMultipleRequestFieldsRequest.h>
#include <rosbridge_library/TestMultipleRequestFieldsResponse.h>


namespace rosbridge_library
{

struct TestMultipleRequestFields
{

typedef TestMultipleRequestFieldsRequest Request;
typedef TestMultipleRequestFieldsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TestMultipleRequestFields
} // namespace rosbridge_library


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosbridge_library::TestMultipleRequestFields > {
  static const char* value()
  {
    return "6cce9fb727dd0f31d504d7d198a1f4ef";
  }

  static const char* value(const ::rosbridge_library::TestMultipleRequestFields&) { return value(); }
};

template<>
struct DataType< ::rosbridge_library::TestMultipleRequestFields > {
  static const char* value()
  {
    return "rosbridge_library/TestMultipleRequestFields";
  }

  static const char* value(const ::rosbridge_library::TestMultipleRequestFields&) { return value(); }
};


// service_traits::MD5Sum< ::rosbridge_library::TestMultipleRequestFieldsRequest> should match 
// service_traits::MD5Sum< ::rosbridge_library::TestMultipleRequestFields > 
template<>
struct MD5Sum< ::rosbridge_library::TestMultipleRequestFieldsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::TestMultipleRequestFields >::value();
  }
  static const char* value(const ::rosbridge_library::TestMultipleRequestFieldsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::TestMultipleRequestFieldsRequest> should match 
// service_traits::DataType< ::rosbridge_library::TestMultipleRequestFields > 
template<>
struct DataType< ::rosbridge_library::TestMultipleRequestFieldsRequest>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::TestMultipleRequestFields >::value();
  }
  static const char* value(const ::rosbridge_library::TestMultipleRequestFieldsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosbridge_library::TestMultipleRequestFieldsResponse> should match 
// service_traits::MD5Sum< ::rosbridge_library::TestMultipleRequestFields > 
template<>
struct MD5Sum< ::rosbridge_library::TestMultipleRequestFieldsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::TestMultipleRequestFields >::value();
  }
  static const char* value(const ::rosbridge_library::TestMultipleRequestFieldsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::TestMultipleRequestFieldsResponse> should match 
// service_traits::DataType< ::rosbridge_library::TestMultipleRequestFields > 
template<>
struct DataType< ::rosbridge_library::TestMultipleRequestFieldsResponse>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::TestMultipleRequestFields >::value();
  }
  static const char* value(const ::rosbridge_library::TestMultipleRequestFieldsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTMULTIPLEREQUESTFIELDS_H
