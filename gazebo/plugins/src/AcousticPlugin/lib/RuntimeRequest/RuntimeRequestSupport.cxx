
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RuntimeRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "RuntimeRequestSupport.h"
#include "RuntimeRequestPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'gazebo_RuntimeRequest' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   gazebo_RuntimeRequestTYPENAME

/* Defines */
#define TDataWriter gazebo_RuntimeRequestDataWriter
#define TData       gazebo_RuntimeRequest

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   gazebo_RuntimeRequestTYPENAME

/* Defines */
#define TDataReader gazebo_RuntimeRequestDataReader
#define TDataSeq    gazebo_RuntimeRequestSeq
#define TData       gazebo_RuntimeRequest

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    gazebo_RuntimeRequestTYPENAME
#define TPlugin_new  gazebo_RuntimeRequestPlugin_new
#define TPlugin_delete  gazebo_RuntimeRequestPlugin_delete

/* Defines */
#define TTypeSupport gazebo_RuntimeRequestTypeSupport
#define TData        gazebo_RuntimeRequest
#define TDataReader  gazebo_RuntimeRequestDataReader
#define TDataWriter  gazebo_RuntimeRequestDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete
