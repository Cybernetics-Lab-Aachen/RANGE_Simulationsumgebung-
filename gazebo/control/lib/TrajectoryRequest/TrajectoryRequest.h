

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrajectoryRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrajectoryRequest_797839881_h
#define TrajectoryRequest_797839881_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *range_TrajectoryRequestTYPENAME;

}

struct range_TrajectoryRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class range_TrajectoryRequestTypeSupport;
class range_TrajectoryRequestDataWriter;
class range_TrajectoryRequestDataReader;
#endif

class range_TrajectoryRequest 
{
  public:
    typedef struct range_TrajectoryRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef range_TrajectoryRequestTypeSupport TypeSupport;
    typedef range_TrajectoryRequestDataWriter DataWriter;
    typedef range_TrajectoryRequestDataReader DataReader;
    #endif

    DDS_Char *   id ;
    DDS_Char *   expressionX ;
    DDS_Char *   expressionY ;
    DDS_Char *   expressionZ ;
    DDS_Double   radius ;
    DDS_Double   e ;
    DDS_Double   voxelWidth ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* range_TrajectoryRequest_get_typecode(void); /* Type code */

DDS_SEQUENCE(range_TrajectoryRequestSeq, range_TrajectoryRequest);                                        

NDDSUSERDllExport
RTIBool range_TrajectoryRequest_initialize(
    range_TrajectoryRequest* self);

NDDSUSERDllExport
RTIBool range_TrajectoryRequest_initialize_ex(
    range_TrajectoryRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool range_TrajectoryRequest_initialize_w_params(
    range_TrajectoryRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void range_TrajectoryRequest_finalize(
    range_TrajectoryRequest* self);

NDDSUSERDllExport
void range_TrajectoryRequest_finalize_ex(
    range_TrajectoryRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void range_TrajectoryRequest_finalize_w_params(
    range_TrajectoryRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void range_TrajectoryRequest_finalize_optional_members(
    range_TrajectoryRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool range_TrajectoryRequest_copy(
    range_TrajectoryRequest* dst,
    const range_TrajectoryRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrajectoryRequest */

