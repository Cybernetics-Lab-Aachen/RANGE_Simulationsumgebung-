

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PositionRequest_32488113_h
#define PositionRequest_32488113_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

typedef    DDS_Char *   range_UID ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* range_UID_get_typecode(void); /* Type code */

DDS_SEQUENCE(range_UIDSeq, range_UID);                                        

NDDSUSERDllExport
RTIBool range_UID_initialize(
    range_UID* self);

NDDSUSERDllExport
RTIBool range_UID_initialize_ex(
    range_UID* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool range_UID_initialize_w_params(
    range_UID* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void range_UID_finalize(
    range_UID* self);

NDDSUSERDllExport
void range_UID_finalize_ex(
    range_UID* self,RTIBool deletePointers);

NDDSUSERDllExport
void range_UID_finalize_w_params(
    range_UID* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void range_UID_finalize_optional_members(
    range_UID* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool range_UID_copy(
    range_UID* dst,
    const range_UID* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum range_Content
{
    POSE      
} range_Content;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* range_Content_get_typecode(void); /* Type code */

DDS_SEQUENCE(range_ContentSeq, range_Content);                                        

NDDSUSERDllExport
RTIBool range_Content_initialize(
    range_Content* self);

NDDSUSERDllExport
RTIBool range_Content_initialize_ex(
    range_Content* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool range_Content_initialize_w_params(
    range_Content* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void range_Content_finalize(
    range_Content* self);

NDDSUSERDllExport
void range_Content_finalize_ex(
    range_Content* self,RTIBool deletePointers);

NDDSUSERDllExport
void range_Content_finalize_w_params(
    range_Content* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void range_Content_finalize_optional_members(
    range_Content* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool range_Content_copy(
    range_Content* dst,
    const range_Content* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *range_PositionRequestTYPENAME;

}

struct range_PositionRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class range_PositionRequestTypeSupport;
class range_PositionRequestDataWriter;
class range_PositionRequestDataReader;
#endif

class range_PositionRequest 
{
  public:
    typedef struct range_PositionRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef range_PositionRequestTypeSupport TypeSupport;
    typedef range_PositionRequestDataWriter DataWriter;
    typedef range_PositionRequestDataReader DataReader;
    #endif

    range_UID   uid ;
    range_Content   content ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* range_PositionRequest_get_typecode(void); /* Type code */

DDS_SEQUENCE(range_PositionRequestSeq, range_PositionRequest);                                        

NDDSUSERDllExport
RTIBool range_PositionRequest_initialize(
    range_PositionRequest* self);

NDDSUSERDllExport
RTIBool range_PositionRequest_initialize_ex(
    range_PositionRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool range_PositionRequest_initialize_w_params(
    range_PositionRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void range_PositionRequest_finalize(
    range_PositionRequest* self);

NDDSUSERDllExport
void range_PositionRequest_finalize_ex(
    range_PositionRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void range_PositionRequest_finalize_w_params(
    range_PositionRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void range_PositionRequest_finalize_optional_members(
    range_PositionRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool range_PositionRequest_copy(
    range_PositionRequest* dst,
    const range_PositionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PositionRequest */

