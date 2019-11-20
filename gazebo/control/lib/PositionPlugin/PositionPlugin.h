

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionPlugin.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PositionPlugin_1929032075_h
#define PositionPlugin_1929032075_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

typedef enum gazebo_Action
{
    SET_POSITION ,      
    GET_POSITION ,      
    MELT      
} gazebo_Action;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_Action_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_ActionSeq, gazebo_Action);                                        

NDDSUSERDllExport
RTIBool gazebo_Action_initialize(
    gazebo_Action* self);

NDDSUSERDllExport
RTIBool gazebo_Action_initialize_ex(
    gazebo_Action* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_Action_initialize_w_params(
    gazebo_Action* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_Action_finalize(
    gazebo_Action* self);

NDDSUSERDllExport
void gazebo_Action_finalize_ex(
    gazebo_Action* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_Action_finalize_w_params(
    gazebo_Action* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_Action_finalize_optional_members(
    gazebo_Action* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_Action_copy(
    gazebo_Action* dst,
    const gazebo_Action* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_PosiTYPENAME;

}

struct gazebo_PosiSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_PosiTypeSupport;
class gazebo_PosiDataWriter;
class gazebo_PosiDataReader;
#endif

class gazebo_Posi 
{
  public:
    typedef struct gazebo_PosiSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_PosiTypeSupport TypeSupport;
    typedef gazebo_PosiDataWriter DataWriter;
    typedef gazebo_PosiDataReader DataReader;
    #endif

    DDS_Double   posX ;
    DDS_Double   posY ;
    DDS_Double   posZ ;
    DDS_Double   orX ;
    DDS_Double   orY ;
    DDS_Double   orZ ;
    DDS_Double   orW ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_Posi_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_PosiSeq, gazebo_Posi);                                        

NDDSUSERDllExport
RTIBool gazebo_Posi_initialize(
    gazebo_Posi* self);

NDDSUSERDllExport
RTIBool gazebo_Posi_initialize_ex(
    gazebo_Posi* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_Posi_initialize_w_params(
    gazebo_Posi* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_Posi_finalize(
    gazebo_Posi* self);

NDDSUSERDllExport
void gazebo_Posi_finalize_ex(
    gazebo_Posi* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_Posi_finalize_w_params(
    gazebo_Posi* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_Posi_finalize_optional_members(
    gazebo_Posi* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_Posi_copy(
    gazebo_Posi* dst,
    const gazebo_Posi* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_MeltInTYPENAME;

}

struct gazebo_MeltInSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_MeltInTypeSupport;
class gazebo_MeltInDataWriter;
class gazebo_MeltInDataReader;
#endif

class gazebo_MeltIn 
{
  public:
    typedef struct gazebo_MeltInSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_MeltInTypeSupport TypeSupport;
    typedef gazebo_MeltInDataWriter DataWriter;
    typedef gazebo_MeltInDataReader DataReader;
    #endif

    DDS_Double   depth ;
    DDS_Double   speed ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_MeltIn_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_MeltInSeq, gazebo_MeltIn);                                        

NDDSUSERDllExport
RTIBool gazebo_MeltIn_initialize(
    gazebo_MeltIn* self);

NDDSUSERDllExport
RTIBool gazebo_MeltIn_initialize_ex(
    gazebo_MeltIn* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_MeltIn_initialize_w_params(
    gazebo_MeltIn* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_MeltIn_finalize(
    gazebo_MeltIn* self);

NDDSUSERDllExport
void gazebo_MeltIn_finalize_ex(
    gazebo_MeltIn* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_MeltIn_finalize_w_params(
    gazebo_MeltIn* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_MeltIn_finalize_optional_members(
    gazebo_MeltIn* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_MeltIn_copy(
    gazebo_MeltIn* dst,
    const gazebo_MeltIn* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_PositionPluginRequestTYPENAME;

}

struct gazebo_PositionPluginRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_PositionPluginRequestTypeSupport;
class gazebo_PositionPluginRequestDataWriter;
class gazebo_PositionPluginRequestDataReader;
#endif

class gazebo_PositionPluginRequest 
{
  public:
    typedef struct gazebo_PositionPluginRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_PositionPluginRequestTypeSupport TypeSupport;
    typedef gazebo_PositionPluginRequestDataWriter DataWriter;
    typedef gazebo_PositionPluginRequestDataReader DataReader;
    #endif

    DDS_Char *   apu ;
    gazebo_Action   act ;
    gazebo_MeltIn   melt ;
    gazebo_Posi   pos ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_PositionPluginRequest_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_PositionPluginRequestSeq, gazebo_PositionPluginRequest);                                        

NDDSUSERDllExport
RTIBool gazebo_PositionPluginRequest_initialize(
    gazebo_PositionPluginRequest* self);

NDDSUSERDllExport
RTIBool gazebo_PositionPluginRequest_initialize_ex(
    gazebo_PositionPluginRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_PositionPluginRequest_initialize_w_params(
    gazebo_PositionPluginRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_PositionPluginRequest_finalize(
    gazebo_PositionPluginRequest* self);

NDDSUSERDllExport
void gazebo_PositionPluginRequest_finalize_ex(
    gazebo_PositionPluginRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_PositionPluginRequest_finalize_w_params(
    gazebo_PositionPluginRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_PositionPluginRequest_finalize_optional_members(
    gazebo_PositionPluginRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_PositionPluginRequest_copy(
    gazebo_PositionPluginRequest* dst,
    const gazebo_PositionPluginRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PositionPlugin */

