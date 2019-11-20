

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Localization.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Localization_395155913_h
#define Localization_395155913_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

typedef    DDS_Char *   de_dlr_enex_datamodel_range_UID ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* de_dlr_enex_datamodel_range_UID_get_typecode(void); /* Type code */

DDS_SEQUENCE(de_dlr_enex_datamodel_range_UIDSeq, de_dlr_enex_datamodel_range_UID);                                        

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_UID_initialize(
    de_dlr_enex_datamodel_range_UID* self);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_UID_initialize_ex(
    de_dlr_enex_datamodel_range_UID* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_UID_initialize_w_params(
    de_dlr_enex_datamodel_range_UID* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_UID_finalize(
    de_dlr_enex_datamodel_range_UID* self);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_UID_finalize_ex(
    de_dlr_enex_datamodel_range_UID* self,RTIBool deletePointers);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_UID_finalize_w_params(
    de_dlr_enex_datamodel_range_UID* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_UID_finalize_optional_members(
    de_dlr_enex_datamodel_range_UID* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_UID_copy(
    de_dlr_enex_datamodel_range_UID* dst,
    const de_dlr_enex_datamodel_range_UID* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Char *   de_dlr_enex_datamodel_range_Frame ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* de_dlr_enex_datamodel_range_Frame_get_typecode(void); /* Type code */

DDS_SEQUENCE(de_dlr_enex_datamodel_range_FrameSeq, de_dlr_enex_datamodel_range_Frame);                                        

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Frame_initialize(
    de_dlr_enex_datamodel_range_Frame* self);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Frame_initialize_ex(
    de_dlr_enex_datamodel_range_Frame* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Frame_initialize_w_params(
    de_dlr_enex_datamodel_range_Frame* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Frame_finalize(
    de_dlr_enex_datamodel_range_Frame* self);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Frame_finalize_ex(
    de_dlr_enex_datamodel_range_Frame* self,RTIBool deletePointers);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Frame_finalize_w_params(
    de_dlr_enex_datamodel_range_Frame* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Frame_finalize_optional_members(
    de_dlr_enex_datamodel_range_Frame* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Frame_copy(
    de_dlr_enex_datamodel_range_Frame* dst,
    const de_dlr_enex_datamodel_range_Frame* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *de_dlr_enex_datamodel_range_PointTYPENAME;

}

struct de_dlr_enex_datamodel_range_PointSeq;
#ifndef NDDS_STANDALONE_TYPE
class de_dlr_enex_datamodel_range_PointTypeSupport;
class de_dlr_enex_datamodel_range_PointDataWriter;
class de_dlr_enex_datamodel_range_PointDataReader;
#endif

class de_dlr_enex_datamodel_range_Point 
{
  public:
    typedef struct de_dlr_enex_datamodel_range_PointSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef de_dlr_enex_datamodel_range_PointTypeSupport TypeSupport;
    typedef de_dlr_enex_datamodel_range_PointDataWriter DataWriter;
    typedef de_dlr_enex_datamodel_range_PointDataReader DataReader;
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

NDDSUSERDllExport DDS_TypeCode* de_dlr_enex_datamodel_range_Point_get_typecode(void); /* Type code */

DDS_SEQUENCE(de_dlr_enex_datamodel_range_PointSeq, de_dlr_enex_datamodel_range_Point);                                        

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Point_initialize(
    de_dlr_enex_datamodel_range_Point* self);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Point_initialize_ex(
    de_dlr_enex_datamodel_range_Point* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Point_initialize_w_params(
    de_dlr_enex_datamodel_range_Point* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Point_finalize(
    de_dlr_enex_datamodel_range_Point* self);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Point_finalize_ex(
    de_dlr_enex_datamodel_range_Point* self,RTIBool deletePointers);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Point_finalize_w_params(
    de_dlr_enex_datamodel_range_Point* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Point_finalize_optional_members(
    de_dlr_enex_datamodel_range_Point* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Point_copy(
    de_dlr_enex_datamodel_range_Point* dst,
    const de_dlr_enex_datamodel_range_Point* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *de_dlr_enex_datamodel_range_QuaternionTYPENAME;

}

struct de_dlr_enex_datamodel_range_QuaternionSeq;
#ifndef NDDS_STANDALONE_TYPE
class de_dlr_enex_datamodel_range_QuaternionTypeSupport;
class de_dlr_enex_datamodel_range_QuaternionDataWriter;
class de_dlr_enex_datamodel_range_QuaternionDataReader;
#endif

class de_dlr_enex_datamodel_range_Quaternion 
{
  public:
    typedef struct de_dlr_enex_datamodel_range_QuaternionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef de_dlr_enex_datamodel_range_QuaternionTypeSupport TypeSupport;
    typedef de_dlr_enex_datamodel_range_QuaternionDataWriter DataWriter;
    typedef de_dlr_enex_datamodel_range_QuaternionDataReader DataReader;
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

NDDSUSERDllExport DDS_TypeCode* de_dlr_enex_datamodel_range_Quaternion_get_typecode(void); /* Type code */

DDS_SEQUENCE(de_dlr_enex_datamodel_range_QuaternionSeq, de_dlr_enex_datamodel_range_Quaternion);                                        

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Quaternion_initialize(
    de_dlr_enex_datamodel_range_Quaternion* self);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Quaternion_initialize_ex(
    de_dlr_enex_datamodel_range_Quaternion* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Quaternion_initialize_w_params(
    de_dlr_enex_datamodel_range_Quaternion* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Quaternion_finalize(
    de_dlr_enex_datamodel_range_Quaternion* self);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Quaternion_finalize_ex(
    de_dlr_enex_datamodel_range_Quaternion* self,RTIBool deletePointers);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Quaternion_finalize_w_params(
    de_dlr_enex_datamodel_range_Quaternion* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Quaternion_finalize_optional_members(
    de_dlr_enex_datamodel_range_Quaternion* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Quaternion_copy(
    de_dlr_enex_datamodel_range_Quaternion* dst,
    const de_dlr_enex_datamodel_range_Quaternion* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum de_dlr_enex_datamodel_range_ProcessState
{
    WORKING ,      
    IDLE ,      
    NOT_RESPONDING ,      
    STOPPED      
} de_dlr_enex_datamodel_range_ProcessState;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* de_dlr_enex_datamodel_range_ProcessState_get_typecode(void); /* Type code */

DDS_SEQUENCE(de_dlr_enex_datamodel_range_ProcessStateSeq, de_dlr_enex_datamodel_range_ProcessState);                                        

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_ProcessState_initialize(
    de_dlr_enex_datamodel_range_ProcessState* self);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_ProcessState_initialize_ex(
    de_dlr_enex_datamodel_range_ProcessState* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_ProcessState_initialize_w_params(
    de_dlr_enex_datamodel_range_ProcessState* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_ProcessState_finalize(
    de_dlr_enex_datamodel_range_ProcessState* self);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_ProcessState_finalize_ex(
    de_dlr_enex_datamodel_range_ProcessState* self,RTIBool deletePointers);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_ProcessState_finalize_w_params(
    de_dlr_enex_datamodel_range_ProcessState* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_ProcessState_finalize_optional_members(
    de_dlr_enex_datamodel_range_ProcessState* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_ProcessState_copy(
    de_dlr_enex_datamodel_range_ProcessState* dst,
    const de_dlr_enex_datamodel_range_ProcessState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *de_dlr_enex_datamodel_range_PoseTYPENAME;

}

struct de_dlr_enex_datamodel_range_PoseSeq;
#ifndef NDDS_STANDALONE_TYPE
class de_dlr_enex_datamodel_range_PoseTypeSupport;
class de_dlr_enex_datamodel_range_PoseDataWriter;
class de_dlr_enex_datamodel_range_PoseDataReader;
#endif

class de_dlr_enex_datamodel_range_Pose 
{
  public:
    typedef struct de_dlr_enex_datamodel_range_PoseSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef de_dlr_enex_datamodel_range_PoseTypeSupport TypeSupport;
    typedef de_dlr_enex_datamodel_range_PoseDataWriter DataWriter;
    typedef de_dlr_enex_datamodel_range_PoseDataReader DataReader;
    #endif

    de_dlr_enex_datamodel_range_Point   position ;
    de_dlr_enex_datamodel_range_Quaternion   orientation ;
    de_dlr_enex_datamodel_range_Frame   frame ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* de_dlr_enex_datamodel_range_Pose_get_typecode(void); /* Type code */

DDS_SEQUENCE(de_dlr_enex_datamodel_range_PoseSeq, de_dlr_enex_datamodel_range_Pose);                                        

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Pose_initialize(
    de_dlr_enex_datamodel_range_Pose* self);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Pose_initialize_ex(
    de_dlr_enex_datamodel_range_Pose* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Pose_initialize_w_params(
    de_dlr_enex_datamodel_range_Pose* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Pose_finalize(
    de_dlr_enex_datamodel_range_Pose* self);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Pose_finalize_ex(
    de_dlr_enex_datamodel_range_Pose* self,RTIBool deletePointers);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Pose_finalize_w_params(
    de_dlr_enex_datamodel_range_Pose* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Pose_finalize_optional_members(
    de_dlr_enex_datamodel_range_Pose* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Pose_copy(
    de_dlr_enex_datamodel_range_Pose* dst,
    const de_dlr_enex_datamodel_range_Pose* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *de_dlr_enex_datamodel_range_LocalizationTYPENAME;

}

struct de_dlr_enex_datamodel_range_LocalizationSeq;
#ifndef NDDS_STANDALONE_TYPE
class de_dlr_enex_datamodel_range_LocalizationTypeSupport;
class de_dlr_enex_datamodel_range_LocalizationDataWriter;
class de_dlr_enex_datamodel_range_LocalizationDataReader;
#endif

class de_dlr_enex_datamodel_range_Localization 
{
  public:
    typedef struct de_dlr_enex_datamodel_range_LocalizationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef de_dlr_enex_datamodel_range_LocalizationTypeSupport TypeSupport;
    typedef de_dlr_enex_datamodel_range_LocalizationDataWriter DataWriter;
    typedef de_dlr_enex_datamodel_range_LocalizationDataReader DataReader;
    #endif

    de_dlr_enex_datamodel_range_UID   apu ;
    de_dlr_enex_datamodel_range_Pose   relative_position ;
    de_dlr_enex_datamodel_range_ProcessState   state ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* de_dlr_enex_datamodel_range_Localization_get_typecode(void); /* Type code */

DDS_SEQUENCE(de_dlr_enex_datamodel_range_LocalizationSeq, de_dlr_enex_datamodel_range_Localization);                                        

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Localization_initialize(
    de_dlr_enex_datamodel_range_Localization* self);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Localization_initialize_ex(
    de_dlr_enex_datamodel_range_Localization* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Localization_initialize_w_params(
    de_dlr_enex_datamodel_range_Localization* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Localization_finalize(
    de_dlr_enex_datamodel_range_Localization* self);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Localization_finalize_ex(
    de_dlr_enex_datamodel_range_Localization* self,RTIBool deletePointers);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Localization_finalize_w_params(
    de_dlr_enex_datamodel_range_Localization* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void de_dlr_enex_datamodel_range_Localization_finalize_optional_members(
    de_dlr_enex_datamodel_range_Localization* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool de_dlr_enex_datamodel_range_Localization_copy(
    de_dlr_enex_datamodel_range_Localization* dst,
    const de_dlr_enex_datamodel_range_Localization* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Localization */

