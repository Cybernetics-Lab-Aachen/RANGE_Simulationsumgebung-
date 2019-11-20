

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApuSpawn.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ApuSpawn_517948193_h
#define ApuSpawn_517948193_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *gazebo_PointTYPENAME;

}

struct gazebo_PointSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_PointTypeSupport;
class gazebo_PointDataWriter;
class gazebo_PointDataReader;
#endif

class gazebo_Point 
{
  public:
    typedef struct gazebo_PointSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_PointTypeSupport TypeSupport;
    typedef gazebo_PointDataWriter DataWriter;
    typedef gazebo_PointDataReader DataReader;
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

NDDSUSERDllExport DDS_TypeCode* gazebo_Point_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_PointSeq, gazebo_Point);                                        

NDDSUSERDllExport
RTIBool gazebo_Point_initialize(
    gazebo_Point* self);

NDDSUSERDllExport
RTIBool gazebo_Point_initialize_ex(
    gazebo_Point* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_Point_initialize_w_params(
    gazebo_Point* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_Point_finalize(
    gazebo_Point* self);

NDDSUSERDllExport
void gazebo_Point_finalize_ex(
    gazebo_Point* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_Point_finalize_w_params(
    gazebo_Point* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_Point_finalize_optional_members(
    gazebo_Point* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_Point_copy(
    gazebo_Point* dst,
    const gazebo_Point* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_QuaternionTYPENAME;

}

struct gazebo_QuaternionSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_QuaternionTypeSupport;
class gazebo_QuaternionDataWriter;
class gazebo_QuaternionDataReader;
#endif

class gazebo_Quaternion 
{
  public:
    typedef struct gazebo_QuaternionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_QuaternionTypeSupport TypeSupport;
    typedef gazebo_QuaternionDataWriter DataWriter;
    typedef gazebo_QuaternionDataReader DataReader;
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

NDDSUSERDllExport DDS_TypeCode* gazebo_Quaternion_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_QuaternionSeq, gazebo_Quaternion);                                        

NDDSUSERDllExport
RTIBool gazebo_Quaternion_initialize(
    gazebo_Quaternion* self);

NDDSUSERDllExport
RTIBool gazebo_Quaternion_initialize_ex(
    gazebo_Quaternion* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_Quaternion_initialize_w_params(
    gazebo_Quaternion* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_Quaternion_finalize(
    gazebo_Quaternion* self);

NDDSUSERDllExport
void gazebo_Quaternion_finalize_ex(
    gazebo_Quaternion* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_Quaternion_finalize_w_params(
    gazebo_Quaternion* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_Quaternion_finalize_optional_members(
    gazebo_Quaternion* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_Quaternion_copy(
    gazebo_Quaternion* dst,
    const gazebo_Quaternion* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *gazebo_ApuSpawnTYPENAME;

}

struct gazebo_ApuSpawnSeq;
#ifndef NDDS_STANDALONE_TYPE
class gazebo_ApuSpawnTypeSupport;
class gazebo_ApuSpawnDataWriter;
class gazebo_ApuSpawnDataReader;
#endif

class gazebo_ApuSpawn 
{
  public:
    typedef struct gazebo_ApuSpawnSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef gazebo_ApuSpawnTypeSupport TypeSupport;
    typedef gazebo_ApuSpawnDataWriter DataWriter;
    typedef gazebo_ApuSpawnDataReader DataReader;
    #endif

    gazebo_Point   position ;
    gazebo_Quaternion   orientation ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* gazebo_ApuSpawn_get_typecode(void); /* Type code */

DDS_SEQUENCE(gazebo_ApuSpawnSeq, gazebo_ApuSpawn);                                        

NDDSUSERDllExport
RTIBool gazebo_ApuSpawn_initialize(
    gazebo_ApuSpawn* self);

NDDSUSERDllExport
RTIBool gazebo_ApuSpawn_initialize_ex(
    gazebo_ApuSpawn* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool gazebo_ApuSpawn_initialize_w_params(
    gazebo_ApuSpawn* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void gazebo_ApuSpawn_finalize(
    gazebo_ApuSpawn* self);

NDDSUSERDllExport
void gazebo_ApuSpawn_finalize_ex(
    gazebo_ApuSpawn* self,RTIBool deletePointers);

NDDSUSERDllExport
void gazebo_ApuSpawn_finalize_w_params(
    gazebo_ApuSpawn* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void gazebo_ApuSpawn_finalize_optional_members(
    gazebo_ApuSpawn* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool gazebo_ApuSpawn_copy(
    gazebo_ApuSpawn* dst,
    const gazebo_ApuSpawn* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ApuSpawn */

