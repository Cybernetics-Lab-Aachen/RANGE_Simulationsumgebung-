

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AcousticRuntime.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "AcousticRuntime.h"

/* ========================================================================= */
const char *gazebo_PositionTYPENAME = "gazebo::Position";

DDS_TypeCode* gazebo_Position_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_Position_g_tc_members[3]=
    {

        {
            (char *)"x",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"y",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"z",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode gazebo_Position_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::Position", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            gazebo_Position_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_Position*/

    if (is_initialized) {
        return &gazebo_Position_g_tc;
    }

    gazebo_Position_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Position_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Position_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &gazebo_Position_g_tc;
}

RTIBool gazebo_Position_initialize(
    gazebo_Position* sample) {
    return gazebo_Position_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_Position_initialize_ex(
    gazebo_Position* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_Position_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_Position_initialize_w_params(
    gazebo_Position* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initDouble(&sample->x)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->y)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->z)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void gazebo_Position_finalize(
    gazebo_Position* sample)
{

    gazebo_Position_finalize_ex(sample,RTI_TRUE);
}

void gazebo_Position_finalize_ex(
    gazebo_Position* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_Position_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_Position_finalize_w_params(
    gazebo_Position* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void gazebo_Position_finalize_optional_members(
    gazebo_Position* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool gazebo_Position_copy(
    gazebo_Position* dst,
    const gazebo_Position* src)
{

    if (!RTICdrType_copyDouble (
        &dst->x, &src->x)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->y, &src->y)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->z, &src->z)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_Position' sequence class.
*/
#define T gazebo_Position
#define TSeq gazebo_PositionSeq
#define T_initialize_w_params gazebo_Position_initialize_w_params
#define T_finalize_w_params   gazebo_Position_finalize_w_params
#define T_copy       gazebo_Position_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *gazebo_OrientationTYPENAME = "gazebo::Orientation";

DDS_TypeCode* gazebo_Orientation_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_Orientation_g_tc_members[4]=
    {

        {
            (char *)"x",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"y",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"z",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"w",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode gazebo_Orientation_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::Orientation", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            gazebo_Orientation_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_Orientation*/

    if (is_initialized) {
        return &gazebo_Orientation_g_tc;
    }

    gazebo_Orientation_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Orientation_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Orientation_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Orientation_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &gazebo_Orientation_g_tc;
}

RTIBool gazebo_Orientation_initialize(
    gazebo_Orientation* sample) {
    return gazebo_Orientation_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_Orientation_initialize_ex(
    gazebo_Orientation* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_Orientation_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_Orientation_initialize_w_params(
    gazebo_Orientation* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initDouble(&sample->x)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->y)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->z)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->w)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void gazebo_Orientation_finalize(
    gazebo_Orientation* sample)
{

    gazebo_Orientation_finalize_ex(sample,RTI_TRUE);
}

void gazebo_Orientation_finalize_ex(
    gazebo_Orientation* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_Orientation_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_Orientation_finalize_w_params(
    gazebo_Orientation* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void gazebo_Orientation_finalize_optional_members(
    gazebo_Orientation* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool gazebo_Orientation_copy(
    gazebo_Orientation* dst,
    const gazebo_Orientation* src)
{

    if (!RTICdrType_copyDouble (
        &dst->x, &src->x)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->y, &src->y)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->z, &src->z)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->w, &src->w)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_Orientation' sequence class.
*/
#define T gazebo_Orientation
#define TSeq gazebo_OrientationSeq
#define T_initialize_w_params gazebo_Orientation_initialize_w_params
#define T_finalize_w_params   gazebo_Orientation_finalize_w_params
#define T_copy       gazebo_Orientation_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *gazebo_APUStateTYPENAME = "gazebo::APUState";

DDS_TypeCode* gazebo_APUState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode gazebo_APUState_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((64));
    static DDS_TypeCode_Member gazebo_APUState_g_tc_members[3]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"pos",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"orie",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode gazebo_APUState_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::APUState", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            gazebo_APUState_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_APUState*/

    if (is_initialized) {
        return &gazebo_APUState_g_tc;
    }

    gazebo_APUState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&gazebo_APUState_g_tc_id_string;

    gazebo_APUState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)gazebo_Position_get_typecode();

    gazebo_APUState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)gazebo_Orientation_get_typecode();

    is_initialized = RTI_TRUE;

    return &gazebo_APUState_g_tc;
}

RTIBool gazebo_APUState_initialize(
    gazebo_APUState* sample) {
    return gazebo_APUState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_APUState_initialize_ex(
    gazebo_APUState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_APUState_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_APUState_initialize_w_params(
    gazebo_APUState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->id= DDS_String_alloc ((64));
        if (sample->id == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->id!= NULL) { 
            sample->id[0] = '\0';
        }
    }

    if (!gazebo_Position_initialize_w_params(&sample->pos,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!gazebo_Orientation_initialize_w_params(&sample->orie,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void gazebo_APUState_finalize(
    gazebo_APUState* sample)
{

    gazebo_APUState_finalize_ex(sample,RTI_TRUE);
}

void gazebo_APUState_finalize_ex(
    gazebo_APUState* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_APUState_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_APUState_finalize_w_params(
    gazebo_APUState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->id != NULL) {
        DDS_String_free(sample->id);
        sample->id=NULL;

    }
    gazebo_Position_finalize_w_params(&sample->pos,deallocParams);

    gazebo_Orientation_finalize_w_params(&sample->orie,deallocParams);

}

void gazebo_APUState_finalize_optional_members(
    gazebo_APUState* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    gazebo_Position_finalize_optional_members(&sample->pos, deallocParams->delete_pointers);
    gazebo_Orientation_finalize_optional_members(&sample->orie, deallocParams->delete_pointers);
}

RTIBool gazebo_APUState_copy(
    gazebo_APUState* dst,
    const gazebo_APUState* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->id, src->id, 
        (64) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!gazebo_Position_copy(
        &dst->pos, &src->pos)) {
        return RTI_FALSE;
    } 
    if (!gazebo_Orientation_copy(
        &dst->orie, &src->orie)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_APUState' sequence class.
*/
#define T gazebo_APUState
#define TSeq gazebo_APUStateSeq
#define T_initialize_w_params gazebo_APUState_initialize_w_params
#define T_finalize_w_params   gazebo_APUState_finalize_w_params
#define T_copy       gazebo_APUState_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *gazebo_AcousticRuntimeTYPENAME = "gazebo::AcousticRuntime";

DDS_TypeCode* gazebo_AcousticRuntime_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_AcousticRuntime_g_tc_members[3]=
    {

        {
            (char *)"apu_a",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"apu_b",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"delay",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode gazebo_AcousticRuntime_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::AcousticRuntime", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            gazebo_AcousticRuntime_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_AcousticRuntime*/

    if (is_initialized) {
        return &gazebo_AcousticRuntime_g_tc;
    }

    gazebo_AcousticRuntime_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)gazebo_APUState_get_typecode();

    gazebo_AcousticRuntime_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)gazebo_APUState_get_typecode();

    gazebo_AcousticRuntime_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &gazebo_AcousticRuntime_g_tc;
}

RTIBool gazebo_AcousticRuntime_initialize(
    gazebo_AcousticRuntime* sample) {
    return gazebo_AcousticRuntime_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_AcousticRuntime_initialize_ex(
    gazebo_AcousticRuntime* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_AcousticRuntime_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_AcousticRuntime_initialize_w_params(
    gazebo_AcousticRuntime* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!gazebo_APUState_initialize_w_params(&sample->apu_a,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!gazebo_APUState_initialize_w_params(&sample->apu_b,
    allocParams)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initDouble(&sample->delay)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void gazebo_AcousticRuntime_finalize(
    gazebo_AcousticRuntime* sample)
{

    gazebo_AcousticRuntime_finalize_ex(sample,RTI_TRUE);
}

void gazebo_AcousticRuntime_finalize_ex(
    gazebo_AcousticRuntime* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_AcousticRuntime_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_AcousticRuntime_finalize_w_params(
    gazebo_AcousticRuntime* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    gazebo_APUState_finalize_w_params(&sample->apu_a,deallocParams);

    gazebo_APUState_finalize_w_params(&sample->apu_b,deallocParams);

}

void gazebo_AcousticRuntime_finalize_optional_members(
    gazebo_AcousticRuntime* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    gazebo_APUState_finalize_optional_members(&sample->apu_a, deallocParams->delete_pointers);
    gazebo_APUState_finalize_optional_members(&sample->apu_b, deallocParams->delete_pointers);
}

RTIBool gazebo_AcousticRuntime_copy(
    gazebo_AcousticRuntime* dst,
    const gazebo_AcousticRuntime* src)
{

    if (!gazebo_APUState_copy(
        &dst->apu_a, &src->apu_a)) {
        return RTI_FALSE;
    } 
    if (!gazebo_APUState_copy(
        &dst->apu_b, &src->apu_b)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyDouble (
        &dst->delay, &src->delay)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_AcousticRuntime' sequence class.
*/
#define T gazebo_AcousticRuntime
#define TSeq gazebo_AcousticRuntimeSeq
#define T_initialize_w_params gazebo_AcousticRuntime_initialize_w_params
#define T_finalize_w_params   gazebo_AcousticRuntime_finalize_w_params
#define T_copy       gazebo_AcousticRuntime_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

