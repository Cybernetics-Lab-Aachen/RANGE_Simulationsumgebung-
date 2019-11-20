

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionRequest.idl using "rtiddsgen".
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

#include "PositionRequest.h"

/* ========================================================================= */

DDS_TypeCode* range_UID_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode range_UID_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((64));

    static DDS_TypeCode range_UID_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"range::UID", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  range_UID */

    if (is_initialized) {
        return &range_UID_g_tc;
    }

    range_UID_g_tc._data._typeCode =  (RTICdrTypeCode *)&range_UID_g_tc_string;

    is_initialized = RTI_TRUE;

    return &range_UID_g_tc;
}

RTIBool range_UID_initialize(
    range_UID* sample) {
    return range_UID_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool range_UID_initialize_ex(
    range_UID* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return range_UID_initialize_w_params(
        sample,&allocParams);

}

RTIBool range_UID_initialize_w_params(
    range_UID* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        (*sample)= DDS_String_alloc ((64));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }

    } else {
        if ((*sample)!= NULL) { 
            (*sample)[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void range_UID_finalize(
    range_UID* sample)
{

    range_UID_finalize_ex(sample,RTI_TRUE);
}

void range_UID_finalize_ex(
    range_UID* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    range_UID_finalize_w_params(
        sample,&deallocParams);
}

void range_UID_finalize_w_params(
    range_UID* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if ((*sample) != NULL) {
        DDS_String_free((*sample));
        (*sample)=NULL;

    }
}

void range_UID_finalize_optional_members(
    range_UID* sample, RTIBool deletePointers)
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

RTIBool range_UID_copy(
    range_UID* dst,
    const range_UID* src)
{

    if (!RTICdrType_copyStringEx (
        &(*dst), (*src), 
        (64) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'range_UID' sequence class.
*/
#define T range_UID
#define TSeq range_UIDSeq
#define T_initialize_w_params range_UID_initialize_w_params
#define T_finalize_w_params   range_UID_finalize_w_params
#define T_copy       range_UID_copy

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
const char *range_ContentTYPENAME = "range::Content";

DDS_TypeCode* range_Content_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member range_Content_g_tc_members[1]=
    {

        {
            (char *)"POSE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            POSE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode range_Content_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"range::Content", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            range_Content_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for range_Content*/

    if (is_initialized) {
        return &range_Content_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &range_Content_g_tc;
}

RTIBool range_Content_initialize(
    range_Content* sample) {
    *sample = POSE;
    return RTI_TRUE;
}

RTIBool range_Content_initialize_ex(
    range_Content* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return range_Content_initialize_w_params(
        sample,&allocParams);

}

RTIBool range_Content_initialize_w_params(
    range_Content* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = POSE;
    return RTI_TRUE;
}

void range_Content_finalize(
    range_Content* sample)
{

    if (sample==NULL) {
        return;
    }
}

void range_Content_finalize_ex(
    range_Content* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    range_Content_finalize_w_params(
        sample,&deallocParams);
}

void range_Content_finalize_w_params(
    range_Content* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void range_Content_finalize_optional_members(
    range_Content* sample, RTIBool deletePointers)
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

RTIBool range_Content_copy(
    range_Content* dst,
    const range_Content* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'range_Content' sequence class.
*/
#define T range_Content
#define TSeq range_ContentSeq
#define T_initialize_w_params range_Content_initialize_w_params
#define T_finalize_w_params   range_Content_finalize_w_params
#define T_copy       range_Content_copy

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
const char *range_PositionRequestTYPENAME = "range::PositionRequest";

DDS_TypeCode* range_PositionRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member range_PositionRequest_g_tc_members[2]=
    {

        {
            (char *)"uid",/* Member name */
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
            (char *)"content",/* Member name */
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

    static DDS_TypeCode range_PositionRequest_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"range::PositionRequest", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            range_PositionRequest_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for range_PositionRequest*/

    if (is_initialized) {
        return &range_PositionRequest_g_tc;
    }

    range_PositionRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)range_UID_get_typecode();

    range_PositionRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)range_Content_get_typecode();

    is_initialized = RTI_TRUE;

    return &range_PositionRequest_g_tc;
}

RTIBool range_PositionRequest_initialize(
    range_PositionRequest* sample) {
    return range_PositionRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool range_PositionRequest_initialize_ex(
    range_PositionRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return range_PositionRequest_initialize_w_params(
        sample,&allocParams);

}

RTIBool range_PositionRequest_initialize_w_params(
    range_PositionRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!range_UID_initialize_w_params(&sample->uid,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!range_Content_initialize_w_params(&sample->content,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void range_PositionRequest_finalize(
    range_PositionRequest* sample)
{

    range_PositionRequest_finalize_ex(sample,RTI_TRUE);
}

void range_PositionRequest_finalize_ex(
    range_PositionRequest* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    range_PositionRequest_finalize_w_params(
        sample,&deallocParams);
}

void range_PositionRequest_finalize_w_params(
    range_PositionRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    range_UID_finalize_w_params(&sample->uid,deallocParams);

    range_Content_finalize_w_params(&sample->content,deallocParams);

}

void range_PositionRequest_finalize_optional_members(
    range_PositionRequest* sample, RTIBool deletePointers)
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

    range_UID_finalize_optional_members(&sample->uid, deallocParams->delete_pointers);
    range_Content_finalize_optional_members(&sample->content, deallocParams->delete_pointers);
}

RTIBool range_PositionRequest_copy(
    range_PositionRequest* dst,
    const range_PositionRequest* src)
{

    if (!range_UID_copy(
        &dst->uid, &src->uid)) {
        return RTI_FALSE;
    } 
    if (!range_Content_copy(
        &dst->content, &src->content)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'range_PositionRequest' sequence class.
*/
#define T range_PositionRequest
#define TSeq range_PositionRequestSeq
#define T_initialize_w_params range_PositionRequest_initialize_w_params
#define T_finalize_w_params   range_PositionRequest_finalize_w_params
#define T_copy       range_PositionRequest_copy

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

