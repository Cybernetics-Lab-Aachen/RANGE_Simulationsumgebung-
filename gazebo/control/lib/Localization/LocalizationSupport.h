
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Localization.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LocalizationSupport_395155913_h
#define LocalizationSupport_395155913_h

/* Uses */
#include "Localization.h"

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

DDS_TYPESUPPORT_CPP(de_dlr_enex_datamodel_range_PointTypeSupport, de_dlr_enex_datamodel_range_Point);

DDS_DATAWRITER_CPP(de_dlr_enex_datamodel_range_PointDataWriter, de_dlr_enex_datamodel_range_Point);
DDS_DATAREADER_CPP(de_dlr_enex_datamodel_range_PointDataReader, de_dlr_enex_datamodel_range_PointSeq, de_dlr_enex_datamodel_range_Point);

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

DDS_TYPESUPPORT_CPP(de_dlr_enex_datamodel_range_QuaternionTypeSupport, de_dlr_enex_datamodel_range_Quaternion);

DDS_DATAWRITER_CPP(de_dlr_enex_datamodel_range_QuaternionDataWriter, de_dlr_enex_datamodel_range_Quaternion);
DDS_DATAREADER_CPP(de_dlr_enex_datamodel_range_QuaternionDataReader, de_dlr_enex_datamodel_range_QuaternionSeq, de_dlr_enex_datamodel_range_Quaternion);

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

DDS_TYPESUPPORT_CPP(de_dlr_enex_datamodel_range_PoseTypeSupport, de_dlr_enex_datamodel_range_Pose);

DDS_DATAWRITER_CPP(de_dlr_enex_datamodel_range_PoseDataWriter, de_dlr_enex_datamodel_range_Pose);
DDS_DATAREADER_CPP(de_dlr_enex_datamodel_range_PoseDataReader, de_dlr_enex_datamodel_range_PoseSeq, de_dlr_enex_datamodel_range_Pose);

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

DDS_TYPESUPPORT_CPP(de_dlr_enex_datamodel_range_LocalizationTypeSupport, de_dlr_enex_datamodel_range_Localization);

DDS_DATAWRITER_CPP(de_dlr_enex_datamodel_range_LocalizationDataWriter, de_dlr_enex_datamodel_range_Localization);
DDS_DATAREADER_CPP(de_dlr_enex_datamodel_range_LocalizationDataReader, de_dlr_enex_datamodel_range_LocalizationSeq, de_dlr_enex_datamodel_range_Localization);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* LocalizationSupport_395155913_h */

