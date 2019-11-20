

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrajectoryRequest.idl using "rtiddsgen".
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

#include "TrajectoryRequest.h"

/* ========================================================================= */
const char *range_TrajectoryRequestTYPENAME = "range::TrajectoryRequest";

DDS_TypeCode* range_TrajectoryRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode range_TrajectoryRequest_g_tc_id_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode range_TrajectoryRequest_g_tc_expressionX_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode range_TrajectoryRequest_g_tc_expressionY_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode range_TrajectoryRequest_g_tc_expressionZ_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member range_TrajectoryRequest_g_tc_members[7]=
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
            (char *)"expressionX",/* Member name */
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
            (char *)"expressionY",/* Member name */
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
            (char *)"expressionZ",/* Member name */
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
        }, 
        {
            (char *)"radius",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"e",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"voxelWidth",/* Member name */
            {
                6,/* Representation ID */          
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

    static DDS_TypeCode range_TrajectoryRequest_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"range::TrajectoryRequest", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            range_TrajectoryRequest_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for range_TrajectoryRequest*/

    if (is_initialized) {
        return &range_TrajectoryRequest_g_tc;
    }

    range_TrajectoryRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&range_TrajectoryRequest_g_tc_id_string;

    range_TrajectoryRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&range_TrajectoryRequest_g_tc_expressionX_string;

    range_TrajectoryRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&range_TrajectoryRequest_g_tc_expressionY_string;

    range_TrajectoryRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&range_TrajectoryRequest_g_tc_expressionZ_string;

    range_TrajectoryRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    range_TrajectoryRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    range_TrajectoryRequest_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &range_TrajectoryRequest_g_tc;
}

RTIBool range_TrajectoryRequest_initialize(
    range_TrajectoryRequest* sample) {
    return range_TrajectoryRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool range_TrajectoryRequest_initialize_ex(
    range_TrajectoryRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return range_TrajectoryRequest_initialize_w_params(
        sample,&allocParams);

}

RTIBool range_TrajectoryRequest_initialize_w_params(
    range_TrajectoryRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

    if (allocParams->allocate_memory){
        sample->expressionX= DDS_String_alloc ((255));
        if (sample->expressionX == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->expressionX!= NULL) { 
            sample->expressionX[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->expressionY= DDS_String_alloc ((255));
        if (sample->expressionY == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->expressionY!= NULL) { 
            sample->expressionY[0] = '\0';
        }
    }

    if (allocParams->allocate_memory){
        sample->expressionZ= DDS_String_alloc ((255));
        if (sample->expressionZ == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->expressionZ!= NULL) { 
            sample->expressionZ[0] = '\0';
        }
    }

    if (!RTICdrType_initDouble(&sample->radius)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->e)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->voxelWidth)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void range_TrajectoryRequest_finalize(
    range_TrajectoryRequest* sample)
{

    range_TrajectoryRequest_finalize_ex(sample,RTI_TRUE);
}

void range_TrajectoryRequest_finalize_ex(
    range_TrajectoryRequest* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    range_TrajectoryRequest_finalize_w_params(
        sample,&deallocParams);
}

void range_TrajectoryRequest_finalize_w_params(
    range_TrajectoryRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->id != NULL) {
        DDS_String_free(sample->id);
        sample->id=NULL;

    }
    if (sample->expressionX != NULL) {
        DDS_String_free(sample->expressionX);
        sample->expressionX=NULL;

    }
    if (sample->expressionY != NULL) {
        DDS_String_free(sample->expressionY);
        sample->expressionY=NULL;

    }
    if (sample->expressionZ != NULL) {
        DDS_String_free(sample->expressionZ);
        sample->expressionZ=NULL;

    }

}

void range_TrajectoryRequest_finalize_optional_members(
    range_TrajectoryRequest* sample, RTIBool deletePointers)
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

RTIBool range_TrajectoryRequest_copy(
    range_TrajectoryRequest* dst,
    const range_TrajectoryRequest* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->id, src->id, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->expressionX, src->expressionX, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->expressionY, src->expressionY, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->expressionZ, src->expressionZ, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->radius, &src->radius)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->e, &src->e)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->voxelWidth, &src->voxelWidth)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'range_TrajectoryRequest' sequence class.
*/
#define T range_TrajectoryRequest
#define TSeq range_TrajectoryRequestSeq
#define T_initialize_w_params range_TrajectoryRequest_initialize_w_params
#define T_finalize_w_params   range_TrajectoryRequest_finalize_w_params
#define T_copy       range_TrajectoryRequest_copy

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

