

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RuntimeRequest.idl using "rtiddsgen".
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

#include "RuntimeRequest.h"

/* ========================================================================= */
const char *gazebo_RuntimeRequestTYPENAME = "gazebo::RuntimeRequest";

DDS_TypeCode* gazebo_RuntimeRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode gazebo_RuntimeRequest_g_tc_apu_a_string = DDS_INITIALIZE_STRING_TYPECODE((64));
    static DDS_TypeCode gazebo_RuntimeRequest_g_tc_apu_b_string = DDS_INITIALIZE_STRING_TYPECODE((64));
    static DDS_TypeCode_Member gazebo_RuntimeRequest_g_tc_members[2]=
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
        }
    };

    static DDS_TypeCode gazebo_RuntimeRequest_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::RuntimeRequest", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            gazebo_RuntimeRequest_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_RuntimeRequest*/

    if (is_initialized) {
        return &gazebo_RuntimeRequest_g_tc;
    }

    gazebo_RuntimeRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&gazebo_RuntimeRequest_g_tc_apu_a_string;

    gazebo_RuntimeRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&gazebo_RuntimeRequest_g_tc_apu_b_string;

    is_initialized = RTI_TRUE;

    return &gazebo_RuntimeRequest_g_tc;
}

RTIBool gazebo_RuntimeRequest_initialize(
    gazebo_RuntimeRequest* sample) {
    return gazebo_RuntimeRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_RuntimeRequest_initialize_ex(
    gazebo_RuntimeRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_RuntimeRequest_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_RuntimeRequest_initialize_w_params(
    gazebo_RuntimeRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->apu_a= DDS_String_alloc ((64));
        if (sample->apu_a == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->apu_a!= NULL) { 
            sample->apu_a[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->apu_b= DDS_String_alloc ((64));
        if (sample->apu_b == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->apu_b!= NULL) { 
            sample->apu_b[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void gazebo_RuntimeRequest_finalize(
    gazebo_RuntimeRequest* sample)
{

    gazebo_RuntimeRequest_finalize_ex(sample,RTI_TRUE);
}

void gazebo_RuntimeRequest_finalize_ex(
    gazebo_RuntimeRequest* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_RuntimeRequest_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_RuntimeRequest_finalize_w_params(
    gazebo_RuntimeRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->apu_a != NULL) {
        DDS_String_free(sample->apu_a);
        sample->apu_a=NULL;

    }
    if (sample->apu_b != NULL) {
        DDS_String_free(sample->apu_b);
        sample->apu_b=NULL;

    }
}

void gazebo_RuntimeRequest_finalize_optional_members(
    gazebo_RuntimeRequest* sample, RTIBool deletePointers)
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

RTIBool gazebo_RuntimeRequest_copy(
    gazebo_RuntimeRequest* dst,
    const gazebo_RuntimeRequest* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->apu_a, src->apu_a, 
        (64) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->apu_b, src->apu_b, 
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
* Configure and implement 'gazebo_RuntimeRequest' sequence class.
*/
#define T gazebo_RuntimeRequest
#define TSeq gazebo_RuntimeRequestSeq
#define T_initialize_w_params gazebo_RuntimeRequest_initialize_w_params
#define T_finalize_w_params   gazebo_RuntimeRequest_finalize_w_params
#define T_copy       gazebo_RuntimeRequest_copy

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

