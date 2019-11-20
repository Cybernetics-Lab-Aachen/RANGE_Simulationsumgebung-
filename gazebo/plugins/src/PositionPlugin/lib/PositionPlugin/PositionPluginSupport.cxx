
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionPlugin.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "PositionPluginSupport.h"
#include "PositionPluginPlugin.h"

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

Configure and implement 'gazebo_Posi' support classes.

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
#define TTYPENAME   gazebo_PosiTYPENAME

/* Defines */
#define TDataWriter gazebo_PosiDataWriter
#define TData       gazebo_Posi

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
#define TTYPENAME   gazebo_PosiTYPENAME

/* Defines */
#define TDataReader gazebo_PosiDataReader
#define TDataSeq    gazebo_PosiSeq
#define TData       gazebo_Posi

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
#define TTYPENAME    gazebo_PosiTYPENAME
#define TPlugin_new  gazebo_PosiPlugin_new
#define TPlugin_delete  gazebo_PosiPlugin_delete

/* Defines */
#define TTypeSupport gazebo_PosiTypeSupport
#define TData        gazebo_Posi
#define TDataReader  gazebo_PosiDataReader
#define TDataWriter  gazebo_PosiDataWriter
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

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'gazebo_MeltIn' support classes.

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
#define TTYPENAME   gazebo_MeltInTYPENAME

/* Defines */
#define TDataWriter gazebo_MeltInDataWriter
#define TData       gazebo_MeltIn

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
#define TTYPENAME   gazebo_MeltInTYPENAME

/* Defines */
#define TDataReader gazebo_MeltInDataReader
#define TDataSeq    gazebo_MeltInSeq
#define TData       gazebo_MeltIn

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
#define TTYPENAME    gazebo_MeltInTYPENAME
#define TPlugin_new  gazebo_MeltInPlugin_new
#define TPlugin_delete  gazebo_MeltInPlugin_delete

/* Defines */
#define TTypeSupport gazebo_MeltInTypeSupport
#define TData        gazebo_MeltIn
#define TDataReader  gazebo_MeltInDataReader
#define TDataWriter  gazebo_MeltInDataWriter
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

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'gazebo_PositionPluginRequest' support classes.

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
#define TTYPENAME   gazebo_PositionPluginRequestTYPENAME

/* Defines */
#define TDataWriter gazebo_PositionPluginRequestDataWriter
#define TData       gazebo_PositionPluginRequest

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
#define TTYPENAME   gazebo_PositionPluginRequestTYPENAME

/* Defines */
#define TDataReader gazebo_PositionPluginRequestDataReader
#define TDataSeq    gazebo_PositionPluginRequestSeq
#define TData       gazebo_PositionPluginRequest

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
#define TTYPENAME    gazebo_PositionPluginRequestTYPENAME
#define TPlugin_new  gazebo_PositionPluginRequestPlugin_new
#define TPlugin_delete  gazebo_PositionPluginRequestPlugin_delete

/* Defines */
#define TTypeSupport gazebo_PositionPluginRequestTypeSupport
#define TData        gazebo_PositionPluginRequest
#define TDataReader  gazebo_PositionPluginRequestDataReader
#define TDataWriter  gazebo_PositionPluginRequestDataWriter
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

