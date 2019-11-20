

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Localization.idl using "rtiddsgen".
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

#include "Localization.h"

/* ========================================================================= */

DDS_TypeCode* de_dlr_enex_datamodel_range_UID_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode de_dlr_enex_datamodel_range_UID_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((64));

    static DDS_TypeCode de_dlr_enex_datamodel_range_UID_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"de::dlr::enex::datamodel::range::UID", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  de_dlr_enex_datamodel_range_UID */

    if (is_initialized) {
        return &de_dlr_enex_datamodel_range_UID_g_tc;
    }

    de_dlr_enex_datamodel_range_UID_g_tc._data._typeCode =  (RTICdrTypeCode *)&de_dlr_enex_datamodel_range_UID_g_tc_string;

    is_initialized = RTI_TRUE;

    return &de_dlr_enex_datamodel_range_UID_g_tc;
}

RTIBool de_dlr_enex_datamodel_range_UID_initialize(
    de_dlr_enex_datamodel_range_UID* sample) {
    return de_dlr_enex_datamodel_range_UID_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool de_dlr_enex_datamodel_range_UID_initialize_ex(
    de_dlr_enex_datamodel_range_UID* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return de_dlr_enex_datamodel_range_UID_initialize_w_params(
        sample,&allocParams);

}

RTIBool de_dlr_enex_datamodel_range_UID_initialize_w_params(
    de_dlr_enex_datamodel_range_UID* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

void de_dlr_enex_datamodel_range_UID_finalize(
    de_dlr_enex_datamodel_range_UID* sample)
{

    de_dlr_enex_datamodel_range_UID_finalize_ex(sample,RTI_TRUE);
}

void de_dlr_enex_datamodel_range_UID_finalize_ex(
    de_dlr_enex_datamodel_range_UID* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    de_dlr_enex_datamodel_range_UID_finalize_w_params(
        sample,&deallocParams);
}

void de_dlr_enex_datamodel_range_UID_finalize_w_params(
    de_dlr_enex_datamodel_range_UID* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

void de_dlr_enex_datamodel_range_UID_finalize_optional_members(
    de_dlr_enex_datamodel_range_UID* sample, RTIBool deletePointers)
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

RTIBool de_dlr_enex_datamodel_range_UID_copy(
    de_dlr_enex_datamodel_range_UID* dst,
    const de_dlr_enex_datamodel_range_UID* src)
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
* Configure and implement 'de_dlr_enex_datamodel_range_UID' sequence class.
*/
#define T de_dlr_enex_datamodel_range_UID
#define TSeq de_dlr_enex_datamodel_range_UIDSeq
#define T_initialize_w_params de_dlr_enex_datamodel_range_UID_initialize_w_params
#define T_finalize_w_params   de_dlr_enex_datamodel_range_UID_finalize_w_params
#define T_copy       de_dlr_enex_datamodel_range_UID_copy

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

DDS_TypeCode* de_dlr_enex_datamodel_range_Frame_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode de_dlr_enex_datamodel_range_Frame_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE((64));

    static DDS_TypeCode de_dlr_enex_datamodel_range_Frame_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"de::dlr::enex::datamodel::range::Frame", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  de_dlr_enex_datamodel_range_Frame */

    if (is_initialized) {
        return &de_dlr_enex_datamodel_range_Frame_g_tc;
    }

    de_dlr_enex_datamodel_range_Frame_g_tc._data._typeCode =  (RTICdrTypeCode *)&de_dlr_enex_datamodel_range_Frame_g_tc_string;

    is_initialized = RTI_TRUE;

    return &de_dlr_enex_datamodel_range_Frame_g_tc;
}

RTIBool de_dlr_enex_datamodel_range_Frame_initialize(
    de_dlr_enex_datamodel_range_Frame* sample) {
    return de_dlr_enex_datamodel_range_Frame_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool de_dlr_enex_datamodel_range_Frame_initialize_ex(
    de_dlr_enex_datamodel_range_Frame* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return de_dlr_enex_datamodel_range_Frame_initialize_w_params(
        sample,&allocParams);

}

RTIBool de_dlr_enex_datamodel_range_Frame_initialize_w_params(
    de_dlr_enex_datamodel_range_Frame* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

void de_dlr_enex_datamodel_range_Frame_finalize(
    de_dlr_enex_datamodel_range_Frame* sample)
{

    de_dlr_enex_datamodel_range_Frame_finalize_ex(sample,RTI_TRUE);
}

void de_dlr_enex_datamodel_range_Frame_finalize_ex(
    de_dlr_enex_datamodel_range_Frame* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    de_dlr_enex_datamodel_range_Frame_finalize_w_params(
        sample,&deallocParams);
}

void de_dlr_enex_datamodel_range_Frame_finalize_w_params(
    de_dlr_enex_datamodel_range_Frame* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

void de_dlr_enex_datamodel_range_Frame_finalize_optional_members(
    de_dlr_enex_datamodel_range_Frame* sample, RTIBool deletePointers)
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

RTIBool de_dlr_enex_datamodel_range_Frame_copy(
    de_dlr_enex_datamodel_range_Frame* dst,
    const de_dlr_enex_datamodel_range_Frame* src)
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
* Configure and implement 'de_dlr_enex_datamodel_range_Frame' sequence class.
*/
#define T de_dlr_enex_datamodel_range_Frame
#define TSeq de_dlr_enex_datamodel_range_FrameSeq
#define T_initialize_w_params de_dlr_enex_datamodel_range_Frame_initialize_w_params
#define T_finalize_w_params   de_dlr_enex_datamodel_range_Frame_finalize_w_params
#define T_copy       de_dlr_enex_datamodel_range_Frame_copy

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
const char *de_dlr_enex_datamodel_range_PointTYPENAME = "de::dlr::enex::datamodel::range::Point";

DDS_TypeCode* de_dlr_enex_datamodel_range_Point_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member de_dlr_enex_datamodel_range_Point_g_tc_members[3]=
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

    static DDS_TypeCode de_dlr_enex_datamodel_range_Point_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"de::dlr::enex::datamodel::range::Point", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            de_dlr_enex_datamodel_range_Point_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for de_dlr_enex_datamodel_range_Point*/

    if (is_initialized) {
        return &de_dlr_enex_datamodel_range_Point_g_tc;
    }

    de_dlr_enex_datamodel_range_Point_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    de_dlr_enex_datamodel_range_Point_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    de_dlr_enex_datamodel_range_Point_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &de_dlr_enex_datamodel_range_Point_g_tc;
}

RTIBool de_dlr_enex_datamodel_range_Point_initialize(
    de_dlr_enex_datamodel_range_Point* sample) {
    return de_dlr_enex_datamodel_range_Point_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool de_dlr_enex_datamodel_range_Point_initialize_ex(
    de_dlr_enex_datamodel_range_Point* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return de_dlr_enex_datamodel_range_Point_initialize_w_params(
        sample,&allocParams);

}

RTIBool de_dlr_enex_datamodel_range_Point_initialize_w_params(
    de_dlr_enex_datamodel_range_Point* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

void de_dlr_enex_datamodel_range_Point_finalize(
    de_dlr_enex_datamodel_range_Point* sample)
{

    de_dlr_enex_datamodel_range_Point_finalize_ex(sample,RTI_TRUE);
}

void de_dlr_enex_datamodel_range_Point_finalize_ex(
    de_dlr_enex_datamodel_range_Point* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    de_dlr_enex_datamodel_range_Point_finalize_w_params(
        sample,&deallocParams);
}

void de_dlr_enex_datamodel_range_Point_finalize_w_params(
    de_dlr_enex_datamodel_range_Point* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void de_dlr_enex_datamodel_range_Point_finalize_optional_members(
    de_dlr_enex_datamodel_range_Point* sample, RTIBool deletePointers)
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

RTIBool de_dlr_enex_datamodel_range_Point_copy(
    de_dlr_enex_datamodel_range_Point* dst,
    const de_dlr_enex_datamodel_range_Point* src)
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
* Configure and implement 'de_dlr_enex_datamodel_range_Point' sequence class.
*/
#define T de_dlr_enex_datamodel_range_Point
#define TSeq de_dlr_enex_datamodel_range_PointSeq
#define T_initialize_w_params de_dlr_enex_datamodel_range_Point_initialize_w_params
#define T_finalize_w_params   de_dlr_enex_datamodel_range_Point_finalize_w_params
#define T_copy       de_dlr_enex_datamodel_range_Point_copy

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
const char *de_dlr_enex_datamodel_range_QuaternionTYPENAME = "de::dlr::enex::datamodel::range::Quaternion";

DDS_TypeCode* de_dlr_enex_datamodel_range_Quaternion_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member de_dlr_enex_datamodel_range_Quaternion_g_tc_members[4]=
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

    static DDS_TypeCode de_dlr_enex_datamodel_range_Quaternion_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"de::dlr::enex::datamodel::range::Quaternion", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            de_dlr_enex_datamodel_range_Quaternion_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for de_dlr_enex_datamodel_range_Quaternion*/

    if (is_initialized) {
        return &de_dlr_enex_datamodel_range_Quaternion_g_tc;
    }

    de_dlr_enex_datamodel_range_Quaternion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    de_dlr_enex_datamodel_range_Quaternion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    de_dlr_enex_datamodel_range_Quaternion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    de_dlr_enex_datamodel_range_Quaternion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &de_dlr_enex_datamodel_range_Quaternion_g_tc;
}

RTIBool de_dlr_enex_datamodel_range_Quaternion_initialize(
    de_dlr_enex_datamodel_range_Quaternion* sample) {
    return de_dlr_enex_datamodel_range_Quaternion_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool de_dlr_enex_datamodel_range_Quaternion_initialize_ex(
    de_dlr_enex_datamodel_range_Quaternion* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return de_dlr_enex_datamodel_range_Quaternion_initialize_w_params(
        sample,&allocParams);

}

RTIBool de_dlr_enex_datamodel_range_Quaternion_initialize_w_params(
    de_dlr_enex_datamodel_range_Quaternion* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

void de_dlr_enex_datamodel_range_Quaternion_finalize(
    de_dlr_enex_datamodel_range_Quaternion* sample)
{

    de_dlr_enex_datamodel_range_Quaternion_finalize_ex(sample,RTI_TRUE);
}

void de_dlr_enex_datamodel_range_Quaternion_finalize_ex(
    de_dlr_enex_datamodel_range_Quaternion* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    de_dlr_enex_datamodel_range_Quaternion_finalize_w_params(
        sample,&deallocParams);
}

void de_dlr_enex_datamodel_range_Quaternion_finalize_w_params(
    de_dlr_enex_datamodel_range_Quaternion* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void de_dlr_enex_datamodel_range_Quaternion_finalize_optional_members(
    de_dlr_enex_datamodel_range_Quaternion* sample, RTIBool deletePointers)
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

RTIBool de_dlr_enex_datamodel_range_Quaternion_copy(
    de_dlr_enex_datamodel_range_Quaternion* dst,
    const de_dlr_enex_datamodel_range_Quaternion* src)
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
* Configure and implement 'de_dlr_enex_datamodel_range_Quaternion' sequence class.
*/
#define T de_dlr_enex_datamodel_range_Quaternion
#define TSeq de_dlr_enex_datamodel_range_QuaternionSeq
#define T_initialize_w_params de_dlr_enex_datamodel_range_Quaternion_initialize_w_params
#define T_finalize_w_params   de_dlr_enex_datamodel_range_Quaternion_finalize_w_params
#define T_copy       de_dlr_enex_datamodel_range_Quaternion_copy

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
const char *de_dlr_enex_datamodel_range_ProcessStateTYPENAME = "de::dlr::enex::datamodel::range::ProcessState";

DDS_TypeCode* de_dlr_enex_datamodel_range_ProcessState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member de_dlr_enex_datamodel_range_ProcessState_g_tc_members[4]=
    {

        {
            (char *)"WORKING",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            WORKING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"IDLE",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            IDLE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"NOT_RESPONDING",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            NOT_RESPONDING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"STOPPED",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            STOPPED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode de_dlr_enex_datamodel_range_ProcessState_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"de::dlr::enex::datamodel::range::ProcessState", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            de_dlr_enex_datamodel_range_ProcessState_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for de_dlr_enex_datamodel_range_ProcessState*/

    if (is_initialized) {
        return &de_dlr_enex_datamodel_range_ProcessState_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &de_dlr_enex_datamodel_range_ProcessState_g_tc;
}

RTIBool de_dlr_enex_datamodel_range_ProcessState_initialize(
    de_dlr_enex_datamodel_range_ProcessState* sample) {
    *sample = WORKING;
    return RTI_TRUE;
}

RTIBool de_dlr_enex_datamodel_range_ProcessState_initialize_ex(
    de_dlr_enex_datamodel_range_ProcessState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return de_dlr_enex_datamodel_range_ProcessState_initialize_w_params(
        sample,&allocParams);

}

RTIBool de_dlr_enex_datamodel_range_ProcessState_initialize_w_params(
    de_dlr_enex_datamodel_range_ProcessState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = WORKING;
    return RTI_TRUE;
}

void de_dlr_enex_datamodel_range_ProcessState_finalize(
    de_dlr_enex_datamodel_range_ProcessState* sample)
{

    if (sample==NULL) {
        return;
    }
}

void de_dlr_enex_datamodel_range_ProcessState_finalize_ex(
    de_dlr_enex_datamodel_range_ProcessState* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    de_dlr_enex_datamodel_range_ProcessState_finalize_w_params(
        sample,&deallocParams);
}

void de_dlr_enex_datamodel_range_ProcessState_finalize_w_params(
    de_dlr_enex_datamodel_range_ProcessState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void de_dlr_enex_datamodel_range_ProcessState_finalize_optional_members(
    de_dlr_enex_datamodel_range_ProcessState* sample, RTIBool deletePointers)
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

RTIBool de_dlr_enex_datamodel_range_ProcessState_copy(
    de_dlr_enex_datamodel_range_ProcessState* dst,
    const de_dlr_enex_datamodel_range_ProcessState* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'de_dlr_enex_datamodel_range_ProcessState' sequence class.
*/
#define T de_dlr_enex_datamodel_range_ProcessState
#define TSeq de_dlr_enex_datamodel_range_ProcessStateSeq
#define T_initialize_w_params de_dlr_enex_datamodel_range_ProcessState_initialize_w_params
#define T_finalize_w_params   de_dlr_enex_datamodel_range_ProcessState_finalize_w_params
#define T_copy       de_dlr_enex_datamodel_range_ProcessState_copy

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
const char *de_dlr_enex_datamodel_range_PoseTYPENAME = "de::dlr::enex::datamodel::range::Pose";

DDS_TypeCode* de_dlr_enex_datamodel_range_Pose_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member de_dlr_enex_datamodel_range_Pose_g_tc_members[3]=
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
        }, 
        {
            (char *)"frame",/* Member name */
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

    static DDS_TypeCode de_dlr_enex_datamodel_range_Pose_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"de::dlr::enex::datamodel::range::Pose", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            de_dlr_enex_datamodel_range_Pose_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for de_dlr_enex_datamodel_range_Pose*/

    if (is_initialized) {
        return &de_dlr_enex_datamodel_range_Pose_g_tc;
    }

    de_dlr_enex_datamodel_range_Pose_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)de_dlr_enex_datamodel_range_Point_get_typecode();

    de_dlr_enex_datamodel_range_Pose_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)de_dlr_enex_datamodel_range_Quaternion_get_typecode();

    de_dlr_enex_datamodel_range_Pose_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)de_dlr_enex_datamodel_range_Frame_get_typecode();

    is_initialized = RTI_TRUE;

    return &de_dlr_enex_datamodel_range_Pose_g_tc;
}

RTIBool de_dlr_enex_datamodel_range_Pose_initialize(
    de_dlr_enex_datamodel_range_Pose* sample) {
    return de_dlr_enex_datamodel_range_Pose_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool de_dlr_enex_datamodel_range_Pose_initialize_ex(
    de_dlr_enex_datamodel_range_Pose* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return de_dlr_enex_datamodel_range_Pose_initialize_w_params(
        sample,&allocParams);

}

RTIBool de_dlr_enex_datamodel_range_Pose_initialize_w_params(
    de_dlr_enex_datamodel_range_Pose* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!de_dlr_enex_datamodel_range_Point_initialize_w_params(&sample->position,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!de_dlr_enex_datamodel_range_Quaternion_initialize_w_params(&sample->orientation,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!de_dlr_enex_datamodel_range_Frame_initialize_w_params(&sample->frame,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void de_dlr_enex_datamodel_range_Pose_finalize(
    de_dlr_enex_datamodel_range_Pose* sample)
{

    de_dlr_enex_datamodel_range_Pose_finalize_ex(sample,RTI_TRUE);
}

void de_dlr_enex_datamodel_range_Pose_finalize_ex(
    de_dlr_enex_datamodel_range_Pose* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    de_dlr_enex_datamodel_range_Pose_finalize_w_params(
        sample,&deallocParams);
}

void de_dlr_enex_datamodel_range_Pose_finalize_w_params(
    de_dlr_enex_datamodel_range_Pose* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    de_dlr_enex_datamodel_range_Point_finalize_w_params(&sample->position,deallocParams);

    de_dlr_enex_datamodel_range_Quaternion_finalize_w_params(&sample->orientation,deallocParams);

    de_dlr_enex_datamodel_range_Frame_finalize_w_params(&sample->frame,deallocParams);

}

void de_dlr_enex_datamodel_range_Pose_finalize_optional_members(
    de_dlr_enex_datamodel_range_Pose* sample, RTIBool deletePointers)
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

    de_dlr_enex_datamodel_range_Point_finalize_optional_members(&sample->position, deallocParams->delete_pointers);
    de_dlr_enex_datamodel_range_Quaternion_finalize_optional_members(&sample->orientation, deallocParams->delete_pointers);
    de_dlr_enex_datamodel_range_Frame_finalize_optional_members(&sample->frame, deallocParams->delete_pointers);
}

RTIBool de_dlr_enex_datamodel_range_Pose_copy(
    de_dlr_enex_datamodel_range_Pose* dst,
    const de_dlr_enex_datamodel_range_Pose* src)
{

    if (!de_dlr_enex_datamodel_range_Point_copy(
        &dst->position, &src->position)) {
        return RTI_FALSE;
    } 
    if (!de_dlr_enex_datamodel_range_Quaternion_copy(
        &dst->orientation, &src->orientation)) {
        return RTI_FALSE;
    } 
    if (!de_dlr_enex_datamodel_range_Frame_copy(
        &dst->frame, &src->frame)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'de_dlr_enex_datamodel_range_Pose' sequence class.
*/
#define T de_dlr_enex_datamodel_range_Pose
#define TSeq de_dlr_enex_datamodel_range_PoseSeq
#define T_initialize_w_params de_dlr_enex_datamodel_range_Pose_initialize_w_params
#define T_finalize_w_params   de_dlr_enex_datamodel_range_Pose_finalize_w_params
#define T_copy       de_dlr_enex_datamodel_range_Pose_copy

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
const char *de_dlr_enex_datamodel_range_LocalizationTYPENAME = "de::dlr::enex::datamodel::range::Localization";

DDS_TypeCode* de_dlr_enex_datamodel_range_Localization_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member de_dlr_enex_datamodel_range_Localization_g_tc_members[3]=
    {

        {
            (char *)"apu",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"relative_position",/* Member name */
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
            (char *)"state",/* Member name */
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

    static DDS_TypeCode de_dlr_enex_datamodel_range_Localization_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"de::dlr::enex::datamodel::range::Localization", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            de_dlr_enex_datamodel_range_Localization_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for de_dlr_enex_datamodel_range_Localization*/

    if (is_initialized) {
        return &de_dlr_enex_datamodel_range_Localization_g_tc;
    }

    de_dlr_enex_datamodel_range_Localization_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)de_dlr_enex_datamodel_range_UID_get_typecode();

    de_dlr_enex_datamodel_range_Localization_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)de_dlr_enex_datamodel_range_Pose_get_typecode();

    de_dlr_enex_datamodel_range_Localization_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)de_dlr_enex_datamodel_range_ProcessState_get_typecode();

    is_initialized = RTI_TRUE;

    return &de_dlr_enex_datamodel_range_Localization_g_tc;
}

RTIBool de_dlr_enex_datamodel_range_Localization_initialize(
    de_dlr_enex_datamodel_range_Localization* sample) {
    return de_dlr_enex_datamodel_range_Localization_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool de_dlr_enex_datamodel_range_Localization_initialize_ex(
    de_dlr_enex_datamodel_range_Localization* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return de_dlr_enex_datamodel_range_Localization_initialize_w_params(
        sample,&allocParams);

}

RTIBool de_dlr_enex_datamodel_range_Localization_initialize_w_params(
    de_dlr_enex_datamodel_range_Localization* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!de_dlr_enex_datamodel_range_UID_initialize_w_params(&sample->apu,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!de_dlr_enex_datamodel_range_Pose_initialize_w_params(&sample->relative_position,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!de_dlr_enex_datamodel_range_ProcessState_initialize_w_params(&sample->state,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void de_dlr_enex_datamodel_range_Localization_finalize(
    de_dlr_enex_datamodel_range_Localization* sample)
{

    de_dlr_enex_datamodel_range_Localization_finalize_ex(sample,RTI_TRUE);
}

void de_dlr_enex_datamodel_range_Localization_finalize_ex(
    de_dlr_enex_datamodel_range_Localization* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    de_dlr_enex_datamodel_range_Localization_finalize_w_params(
        sample,&deallocParams);
}

void de_dlr_enex_datamodel_range_Localization_finalize_w_params(
    de_dlr_enex_datamodel_range_Localization* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    de_dlr_enex_datamodel_range_UID_finalize_w_params(&sample->apu,deallocParams);

    de_dlr_enex_datamodel_range_Pose_finalize_w_params(&sample->relative_position,deallocParams);

    de_dlr_enex_datamodel_range_ProcessState_finalize_w_params(&sample->state,deallocParams);

}

void de_dlr_enex_datamodel_range_Localization_finalize_optional_members(
    de_dlr_enex_datamodel_range_Localization* sample, RTIBool deletePointers)
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

    de_dlr_enex_datamodel_range_UID_finalize_optional_members(&sample->apu, deallocParams->delete_pointers);
    de_dlr_enex_datamodel_range_Pose_finalize_optional_members(&sample->relative_position, deallocParams->delete_pointers);
    de_dlr_enex_datamodel_range_ProcessState_finalize_optional_members(&sample->state, deallocParams->delete_pointers);
}

RTIBool de_dlr_enex_datamodel_range_Localization_copy(
    de_dlr_enex_datamodel_range_Localization* dst,
    const de_dlr_enex_datamodel_range_Localization* src)
{

    if (!de_dlr_enex_datamodel_range_UID_copy(
        &dst->apu, &src->apu)) {
        return RTI_FALSE;
    } 
    if (!de_dlr_enex_datamodel_range_Pose_copy(
        &dst->relative_position, &src->relative_position)) {
        return RTI_FALSE;
    } 
    if (!de_dlr_enex_datamodel_range_ProcessState_copy(
        &dst->state, &src->state)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'de_dlr_enex_datamodel_range_Localization' sequence class.
*/
#define T de_dlr_enex_datamodel_range_Localization
#define TSeq de_dlr_enex_datamodel_range_LocalizationSeq
#define T_initialize_w_params de_dlr_enex_datamodel_range_Localization_initialize_w_params
#define T_finalize_w_params   de_dlr_enex_datamodel_range_Localization_finalize_w_params
#define T_copy       de_dlr_enex_datamodel_range_Localization_copy

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

