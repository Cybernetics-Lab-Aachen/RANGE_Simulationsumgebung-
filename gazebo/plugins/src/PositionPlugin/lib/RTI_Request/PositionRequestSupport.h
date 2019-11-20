
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PositionRequestSupport_32488113_h
#define PositionRequestSupport_32488113_h

/* Uses */
#include "PositionRequest.h"

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

DDS_TYPESUPPORT_CPP(range_PositionRequestTypeSupport, range_PositionRequest);

DDS_DATAWRITER_CPP(range_PositionRequestDataWriter, range_PositionRequest);
DDS_DATAREADER_CPP(range_PositionRequestDataReader, range_PositionRequestSeq, range_PositionRequest);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* PositionRequestSupport_32488113_h */

