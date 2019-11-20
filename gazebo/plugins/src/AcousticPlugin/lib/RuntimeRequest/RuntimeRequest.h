

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RuntimeRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RuntimeRequest_1530089555_h
#define RuntimeRequest_1530089555_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *gazebo_RuntimeRequestTYPENAME;

}

struct gazebo_RuntimeRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_RuntimeRequestTypeSupport;
class gazebo_RuntimeRequestDataWriter;
class gazebo_RuntimeRequestDataReader;
#endif

class gazebo_RuntimeRequest 
{
  public:
    typedef struct gazebo_RuntimeRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_RuntimeRequestTypeSupport TypeSupport;
    typedef gazebo_RuntimeRequestDataWriter DataWriter;
    typedef gazebo_RuntimeRequestDataReader DataReader;
    #endif

    DDS_Char *   apu_a ;
    DDS_Char *   apu_b ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_RuntimeRequest_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_RuntimeRequestSeq, gazebo_RuntimeRequest);                                        

NDDSUSERDllExport
RTIBool gazebo_RuntimeRequest_initialize(
    gazebo_RuntimeRequest* self);

NDDSUSERDllExport
RTIBool gazebo_RuntimeRequest_initialize_ex(
    gazebo_RuntimeRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_RuntimeRequest_initialize_w_params(
    gazebo_RuntimeRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_RuntimeRequest_finalize(
    gazebo_RuntimeRequest* self);

NDDSUSERDllExport
void gazebo_RuntimeRequest_finalize_ex(
    gazebo_RuntimeRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_RuntimeRequest_finalize_w_params(
    gazebo_RuntimeRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_RuntimeRequest_finalize_optional_members(
    gazebo_RuntimeRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_RuntimeRequest_copy(
    gazebo_RuntimeRequest* dst,
    const gazebo_RuntimeRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RuntimeRequest */

