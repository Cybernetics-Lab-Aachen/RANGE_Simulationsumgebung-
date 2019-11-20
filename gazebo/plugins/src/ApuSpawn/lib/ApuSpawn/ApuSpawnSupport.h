
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApuSpawn.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ApuSpawnSupport_517948193_h
#define ApuSpawnSupport_517948193_h

/* Uses */
#include "ApuSpawn.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_CPP(gazebo_PointTypeSupport, gazebo_Point);

DDS_DATAWRITER_CPP(gazebo_PointDataWriter, gazebo_Point);
DDS_DATAREADER_CPP(gazebo_PointDataReader, gazebo_PointSeq, gazebo_Point);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_CPP(gazebo_QuaternionTypeSupport, gazebo_Quaternion);

DDS_DATAWRITER_CPP(gazebo_QuaternionDataWriter, gazebo_Quaternion);
DDS_DATAREADER_CPP(gazebo_QuaternionDataReader, gazebo_QuaternionSeq, gazebo_Quaternion);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_CPP(gazebo_ApuSpawnTypeSupport, gazebo_ApuSpawn);

DDS_DATAWRITER_CPP(gazebo_ApuSpawnDataWriter, gazebo_ApuSpawn);
DDS_DATAREADER_CPP(gazebo_ApuSpawnDataReader, gazebo_ApuSpawnSeq, gazebo_ApuSpawn);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* ApuSpawnSupport_517948193_h */

