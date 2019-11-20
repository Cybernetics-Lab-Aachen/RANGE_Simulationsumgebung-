

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AcousticRuntime.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AcousticRuntime_1641410540_h
#define AcousticRuntime_1641410540_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *gazebo_PositionTYPENAME;

}

struct gazebo_PositionSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_PositionTypeSupport;
class gazebo_PositionDataWriter;
class gazebo_PositionDataReader;
#endif

class gazebo_Position 
{
  public:
    typedef struct gazebo_PositionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_PositionTypeSupport TypeSupport;
    typedef gazebo_PositionDataWriter DataWriter;
    typedef gazebo_PositionDataReader DataReader;
    #endif

    DDS_Double   x ;
    DDS_Double   y ;
    DDS_Double   z ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_Position_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_PositionSeq, gazebo_Position);                                        

NDDSUSERDllExport
RTIBool gazebo_Position_initialize(
    gazebo_Position* self);

NDDSUSERDllExport
RTIBool gazebo_Position_initialize_ex(
    gazebo_Position* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_Position_initialize_w_params(
    gazebo_Position* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_Position_finalize(
    gazebo_Position* self);

NDDSUSERDllExport
void gazebo_Position_finalize_ex(
    gazebo_Position* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_Position_finalize_w_params(
    gazebo_Position* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_Position_finalize_optional_members(
    gazebo_Position* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_Position_copy(
    gazebo_Position* dst,
    const gazebo_Position* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_OrientationTYPENAME;

}

struct gazebo_OrientationSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_OrientationTypeSupport;
class gazebo_OrientationDataWriter;
class gazebo_OrientationDataReader;
#endif

class gazebo_Orientation 
{
  public:
    typedef struct gazebo_OrientationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_OrientationTypeSupport TypeSupport;
    typedef gazebo_OrientationDataWriter DataWriter;
    typedef gazebo_OrientationDataReader DataReader;
    #endif

    DDS_Double   x ;
    DDS_Double   y ;
    DDS_Double   z ;
    DDS_Double   w ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_Orientation_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_OrientationSeq, gazebo_Orientation);                                        

NDDSUSERDllExport
RTIBool gazebo_Orientation_initialize(
    gazebo_Orientation* self);

NDDSUSERDllExport
RTIBool gazebo_Orientation_initialize_ex(
    gazebo_Orientation* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_Orientation_initialize_w_params(
    gazebo_Orientation* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_Orientation_finalize(
    gazebo_Orientation* self);

NDDSUSERDllExport
void gazebo_Orientation_finalize_ex(
    gazebo_Orientation* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_Orientation_finalize_w_params(
    gazebo_Orientation* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_Orientation_finalize_optional_members(
    gazebo_Orientation* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_Orientation_copy(
    gazebo_Orientation* dst,
    const gazebo_Orientation* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_APUStateTYPENAME;

}

struct gazebo_APUStateSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_APUStateTypeSupport;
class gazebo_APUStateDataWriter;
class gazebo_APUStateDataReader;
#endif

class gazebo_APUState 
{
  public:
    typedef struct gazebo_APUStateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_APUStateTypeSupport TypeSupport;
    typedef gazebo_APUStateDataWriter DataWriter;
    typedef gazebo_APUStateDataReader DataReader;
    #endif

    DDS_Char *   id ;
    gazebo_Position   pos ;
    gazebo_Orientation   orie ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_APUState_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_APUStateSeq, gazebo_APUState);                                        

NDDSUSERDllExport
RTIBool gazebo_APUState_initialize(
    gazebo_APUState* self);

NDDSUSERDllExport
RTIBool gazebo_APUState_initialize_ex(
    gazebo_APUState* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_APUState_initialize_w_params(
    gazebo_APUState* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_APUState_finalize(
    gazebo_APUState* self);

NDDSUSERDllExport
void gazebo_APUState_finalize_ex(
    gazebo_APUState* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_APUState_finalize_w_params(
    gazebo_APUState* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_APUState_finalize_optional_members(
    gazebo_APUState* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_APUState_copy(
    gazebo_APUState* dst,
    const gazebo_APUState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_AcousticRuntimeTYPENAME;

}

struct gazebo_AcousticRuntimeSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_AcousticRuntimeTypeSupport;
class gazebo_AcousticRuntimeDataWriter;
class gazebo_AcousticRuntimeDataReader;
#endif

class gazebo_AcousticRuntime 
{
  public:
    typedef struct gazebo_AcousticRuntimeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_AcousticRuntimeTypeSupport TypeSupport;
    typedef gazebo_AcousticRuntimeDataWriter DataWriter;
    typedef gazebo_AcousticRuntimeDataReader DataReader;
    #endif

    gazebo_APUState   apu_a ;
    gazebo_APUState   apu_b ;
    DDS_Double   delay ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_AcousticRuntime_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_AcousticRuntimeSeq, gazebo_AcousticRuntime);                                        

NDDSUSERDllExport
RTIBool gazebo_AcousticRuntime_initialize(
    gazebo_AcousticRuntime* self);

NDDSUSERDllExport
RTIBool gazebo_AcousticRuntime_initialize_ex(
    gazebo_AcousticRuntime* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_AcousticRuntime_initialize_w_params(
    gazebo_AcousticRuntime* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_AcousticRuntime_finalize(
    gazebo_AcousticRuntime* self);

NDDSUSERDllExport
void gazebo_AcousticRuntime_finalize_ex(
    gazebo_AcousticRuntime* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_AcousticRuntime_finalize_w_params(
    gazebo_AcousticRuntime* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_AcousticRuntime_finalize_optional_members(
    gazebo_AcousticRuntime* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_AcousticRuntime_copy(
    gazebo_AcousticRuntime* dst,
    const gazebo_AcousticRuntime* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AcousticRuntime */

