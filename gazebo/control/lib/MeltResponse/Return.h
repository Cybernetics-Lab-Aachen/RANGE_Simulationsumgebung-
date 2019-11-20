

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Return.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Return_965443383_h
#define Return_965443383_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *range_ReturnTYPENAME;

}

struct range_ReturnSeq;
#ifndef NDDS_STANDALONE_TYPE
class range_ReturnTypeSupport;
class range_ReturnDataWriter;
class range_ReturnDataReader;
#endif

class range_Return 
{
  public:
    typedef struct range_ReturnSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef range_ReturnTypeSupport TypeSupport;
    typedef range_ReturnDataWriter DataWriter;
    typedef range_ReturnDataReader DataReader;
    #endif

    DDS_Char *   id ;
    DDS_Double   depth ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* range_Return_get_typecode(void); /* Type code */

DDS_SEQUENCE(range_ReturnSeq, range_Return);                                        

NDDSUSERDllExport
RTIBool range_Return_initialize(
    range_Return* self);

NDDSUSERDllExport
RTIBool range_Return_initialize_ex(
    range_Return* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool range_Return_initialize_w_params(
    range_Return* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void range_Return_finalize(
    range_Return* self);

NDDSUSERDllExport
void range_Return_finalize_ex(
    range_Return* self,RTIBool deletePointers);

NDDSUSERDllExport
void range_Return_finalize_w_params(
    range_Return* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void range_Return_finalize_optional_members(
    range_Return* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool range_Return_copy(
    range_Return* dst,
    const range_Return* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Return */

