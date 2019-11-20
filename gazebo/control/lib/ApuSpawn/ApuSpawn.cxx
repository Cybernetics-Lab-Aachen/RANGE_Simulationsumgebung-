

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApuSpawn.idl using "rtiddsgen".
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

#include "ApuSpawn.h"

/* ========================================================================= */
const char *gazebo_PointTYPENAME = "gazebo::Point";

DDS_TypeCode* gazebo_Point_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_Point_g_tc_members[3]=
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

    static DDS_TypeCode gazebo_Point_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::Point", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            gazebo_Point_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_Point*/

    if (is_initialized) {
        return &gazebo_Point_g_tc;
    }

    gazebo_Point_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Point_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Point_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &gazebo_Point_g_tc;
}

RTIBool gazebo_Point_initialize(
    gazebo_Point* sample) {
    return gazebo_Point_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_Point_initialize_ex(
    gazebo_Point* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_Point_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_Point_initialize_w_params(
    gazebo_Point* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

void gazebo_Point_finalize(
    gazebo_Point* sample)
{

    gazebo_Point_finalize_ex(sample,RTI_TRUE);
}

void gazebo_Point_finalize_ex(
    gazebo_Point* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_Point_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_Point_finalize_w_params(
    gazebo_Point* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void gazebo_Point_finalize_optional_members(
    gazebo_Point* sample, RTIBool deletePointers)
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

RTIBool gazebo_Point_copy(
    gazebo_Point* dst,
    const gazebo_Point* src)
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
* Configure and implement 'gazebo_Point' sequence class.
*/
#define T gazebo_Point
#define TSeq gazebo_PointSeq
#define T_initialize_w_params gazebo_Point_initialize_w_params
#define T_finalize_w_params   gazebo_Point_finalize_w_params
#define T_copy       gazebo_Point_copy

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
const char *gazebo_QuaternionTYPENAME = "gazebo::Quaternion";

DDS_TypeCode* gazebo_Quaternion_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_Quaternion_g_tc_members[4]=
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

    static DDS_TypeCode gazebo_Quaternion_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::Quaternion", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            gazebo_Quaternion_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_Quaternion*/

    if (is_initialized) {
        return &gazebo_Quaternion_g_tc;
    }

    gazebo_Quaternion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Quaternion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Quaternion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Quaternion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &gazebo_Quaternion_g_tc;
}

RTIBool gazebo_Quaternion_initialize(
    gazebo_Quaternion* sample) {
    return gazebo_Quaternion_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_Quaternion_initialize_ex(
    gazebo_Quaternion* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_Quaternion_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_Quaternion_initialize_w_params(
    gazebo_Quaternion* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

void gazebo_Quaternion_finalize(
    gazebo_Quaternion* sample)
{

    gazebo_Quaternion_finalize_ex(sample,RTI_TRUE);
}

void gazebo_Quaternion_finalize_ex(
    gazebo_Quaternion* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_Quaternion_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_Quaternion_finalize_w_params(
    gazebo_Quaternion* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void gazebo_Quaternion_finalize_optional_members(
    gazebo_Quaternion* sample, RTIBool deletePointers)
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

RTIBool gazebo_Quaternion_copy(
    gazebo_Quaternion* dst,
    const gazebo_Quaternion* src)
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
* Configure and implement 'gazebo_Quaternion' sequence class.
*/
#define T gazebo_Quaternion
#define TSeq gazebo_QuaternionSeq
#define T_initialize_w_params gazebo_Quaternion_initialize_w_params
#define T_finalize_w_params   gazebo_Quaternion_finalize_w_params
#define T_copy       gazebo_Quaternion_copy

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
const char *gazebo_ApuSpawnTYPENAME = "gazebo::ApuSpawn";

DDS_TypeCode* gazebo_ApuSpawn_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_ApuSpawn_g_tc_members[2]=
    {

        {
            (char *)"position",/* Member name */
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
            (char *)"orientation",/* Member name */
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
        }
    };

    static DDS_TypeCode gazebo_ApuSpawn_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::ApuSpawn", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            gazebo_ApuSpawn_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_ApuSpawn*/

    if (is_initialized) {
        return &gazebo_ApuSpawn_g_tc;
    }

    gazebo_ApuSpawn_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)gazebo_Point_get_typecode();

    gazebo_ApuSpawn_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)gazebo_Quaternion_get_typecode();

    is_initialized = RTI_TRUE;

    return &gazebo_ApuSpawn_g_tc;
}

RTIBool gazebo_ApuSpawn_initialize(
    gazebo_ApuSpawn* sample) {
    return gazebo_ApuSpawn_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_ApuSpawn_initialize_ex(
    gazebo_ApuSpawn* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_ApuSpawn_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_ApuSpawn_initialize_w_params(
    gazebo_ApuSpawn* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!gazebo_Point_initialize_w_params(&sample->position,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!gazebo_Quaternion_initialize_w_params(&sample->orientation,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void gazebo_ApuSpawn_finalize(
    gazebo_ApuSpawn* sample)
{

    gazebo_ApuSpawn_finalize_ex(sample,RTI_TRUE);
}

void gazebo_ApuSpawn_finalize_ex(
    gazebo_ApuSpawn* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_ApuSpawn_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_ApuSpawn_finalize_w_params(
    gazebo_ApuSpawn* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    gazebo_Point_finalize_w_params(&sample->position,deallocParams);

    gazebo_Quaternion_finalize_w_params(&sample->orientation,deallocParams);

}

void gazebo_ApuSpawn_finalize_optional_members(
    gazebo_ApuSpawn* sample, RTIBool deletePointers)
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

    gazebo_Point_finalize_optional_members(&sample->position, deallocParams->delete_pointers);
    gazebo_Quaternion_finalize_optional_members(&sample->orientation, deallocParams->delete_pointers);
}

RTIBool gazebo_ApuSpawn_copy(
    gazebo_ApuSpawn* dst,
    const gazebo_ApuSpawn* src)
{

    if (!gazebo_Point_copy(
        &dst->position, &src->position)) {
        return RTI_FALSE;
    } 
    if (!gazebo_Quaternion_copy(
        &dst->orientation, &src->orientation)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_ApuSpawn' sequence class.
*/
#define T gazebo_ApuSpawn
#define TSeq gazebo_ApuSpawnSeq
#define T_initialize_w_params gazebo_ApuSpawn_initialize_w_params
#define T_finalize_w_params   gazebo_ApuSpawn_finalize_w_params
#define T_copy       gazebo_ApuSpawn_copy

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

