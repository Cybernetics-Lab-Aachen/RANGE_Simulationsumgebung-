

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Return.idl using "rtiddsgen".
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

#include "Return.h"

/* ========================================================================= */
const char *range_ReturnTYPENAME = "range::Return";

DDS_TypeCode* range_Return_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode range_Return_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member range_Return_g_tc_members[2]=
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
            (char *)"depth",/* Member name */
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

    static DDS_TypeCode range_Return_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"range::Return", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            range_Return_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for range_Return*/

    if (is_initialized) {
        return &range_Return_g_tc;
    }

    range_Return_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&range_Return_g_tc_id_string;

    range_Return_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &range_Return_g_tc;
}

RTIBool range_Return_initialize(
    range_Return* sample) {
    return range_Return_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool range_Return_initialize_ex(
    range_Return* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return range_Return_initialize_w_params(
        sample,&allocParams);

}

RTIBool range_Return_initialize_w_params(
    range_Return* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->id= DDS_String_alloc ((255));
        if (sample->id == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->id!= NULL) { 
            sample->id[0] = '\0';
        }
    }

    if (!RTICdrType_initDouble(&sample->depth)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void range_Return_finalize(
    range_Return* sample)
{

    range_Return_finalize_ex(sample,RTI_TRUE);
}

void range_Return_finalize_ex(
    range_Return* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    range_Return_finalize_w_params(
        sample,&deallocParams);
}

void range_Return_finalize_w_params(
    range_Return* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->id != NULL) {
        DDS_String_free(sample->id);
        sample->id=NULL;

    }

}

void range_Return_finalize_optional_members(
    range_Return* sample, RTIBool deletePointers)
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

RTIBool range_Return_copy(
    range_Return* dst,
    const range_Return* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->id, src->id, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->depth, &src->depth)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'range_Return' sequence class.
*/
#define T range_Return
#define TSeq range_ReturnSeq
#define T_initialize_w_params range_Return_initialize_w_params
#define T_finalize_w_params   range_Return_finalize_w_params
#define T_copy       range_Return_copy

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

