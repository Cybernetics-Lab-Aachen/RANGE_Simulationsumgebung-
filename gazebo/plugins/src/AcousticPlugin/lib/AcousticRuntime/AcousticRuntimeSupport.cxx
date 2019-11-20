
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AcousticRuntime.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "AcousticRuntimeSupport.h"
#include "AcousticRuntimePlugin.h"

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

Configure and implement 'gazebo_Position' support classes.

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
#define TTYPENAME   gazebo_PositionTYPENAME

/* Defines */
#define TDataWriter gazebo_PositionDataWriter
#define TData       gazebo_Position

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
#define TTYPENAME   gazebo_PositionTYPENAME

/* Defines */
#define TDataReader gazebo_PositionDataReader
#define TDataSeq    gazebo_PositionSeq
#define TData       gazebo_Position

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
#define TTYPENAME    gazebo_PositionTYPENAME
#define TPlugin_new  gazebo_PositionPlugin_new
#define TPlugin_delete  gazebo_PositionPlugin_delete

/* Defines */
#define TTypeSupport gazebo_PositionTypeSupport
#define TData        gazebo_Position
#define TDataReader  gazebo_PositionDataReader
#define TDataWriter  gazebo_PositionDataWriter
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

Configure and implement 'gazebo_Orientation' support classes.

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
#define TTYPENAME   gazebo_OrientationTYPENAME

/* Defines */
#define TDataWriter gazebo_OrientationDataWriter
#define TData       gazebo_Orientation

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
#define TTYPENAME   gazebo_OrientationTYPENAME

/* Defines */
#define TDataReader gazebo_OrientationDataReader
#define TDataSeq    gazebo_OrientationSeq
#define TData       gazebo_Orientation

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
#define TTYPENAME    gazebo_OrientationTYPENAME
#define TPlugin_new  gazebo_OrientationPlugin_new
#define TPlugin_delete  gazebo_OrientationPlugin_delete

/* Defines */
#define TTypeSupport gazebo_OrientationTypeSupport
#define TData        gazebo_Orientation
#define TDataReader  gazebo_OrientationDataReader
#define TDataWriter  gazebo_OrientationDataWriter
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

Configure and implement 'gazebo_APUState' support classes.

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
#define TTYPENAME   gazebo_APUStateTYPENAME

/* Defines */
#define TDataWriter gazebo_APUStateDataWriter
#define TData       gazebo_APUState

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
#define TTYPENAME   gazebo_APUStateTYPENAME

/* Defines */
#define TDataReader gazebo_APUStateDataReader
#define TDataSeq    gazebo_APUStateSeq
#define TData       gazebo_APUState

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
#define TTYPENAME    gazebo_APUStateTYPENAME
#define TPlugin_new  gazebo_APUStatePlugin_new
#define TPlugin_delete  gazebo_APUStatePlugin_delete

/* Defines */
#define TTypeSupport gazebo_APUStateTypeSupport
#define TData        gazebo_APUState
#define TDataReader  gazebo_APUStateDataReader
#define TDataWriter  gazebo_APUStateDataWriter
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

Configure and implement 'gazebo_AcousticRuntime' support classes.

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
#define TTYPENAME   gazebo_AcousticRuntimeTYPENAME

/* Defines */
#define TDataWriter gazebo_AcousticRuntimeDataWriter
#define TData       gazebo_AcousticRuntime

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
#define TTYPENAME   gazebo_AcousticRuntimeTYPENAME

/* Defines */
#define TDataReader gazebo_AcousticRuntimeDataReader
#define TDataSeq    gazebo_AcousticRuntimeSeq
#define TData       gazebo_AcousticRuntime

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
#define TTYPENAME    gazebo_AcousticRuntimeTYPENAME
#define TPlugin_new  gazebo_AcousticRuntimePlugin_new
#define TPlugin_delete  gazebo_AcousticRuntimePlugin_delete

/* Defines */
#define TTypeSupport gazebo_AcousticRuntimeTypeSupport
#define TData        gazebo_AcousticRuntime
#define TDataReader  gazebo_AcousticRuntimeDataReader
#define TDataWriter  gazebo_AcousticRuntimeDataWriter
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

