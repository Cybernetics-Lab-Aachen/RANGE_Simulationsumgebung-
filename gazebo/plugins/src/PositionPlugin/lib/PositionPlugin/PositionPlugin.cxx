

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionPlugin.idl using "rtiddsgen".
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

#include "PositionPlugin.h"

/* ========================================================================= */
const char *gazebo_ActionTYPENAME = "gazebo::Action";

DDS_TypeCode* gazebo_Action_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_Action_g_tc_members[3]=
    {

        {
            (char *)"SET_POSITION",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            SET_POSITION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"GET_POSITION",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            GET_POSITION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"MELT",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            MELT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode gazebo_Action_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::Action", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            gazebo_Action_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for gazebo_Action*/

    if (is_initialized) {
        return &gazebo_Action_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &gazebo_Action_g_tc;
}

RTIBool gazebo_Action_initialize(
    gazebo_Action* sample) {
    *sample = SET_POSITION;
    return RTI_TRUE;
}

RTIBool gazebo_Action_initialize_ex(
    gazebo_Action* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_Action_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_Action_initialize_w_params(
    gazebo_Action* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = SET_POSITION;
    return RTI_TRUE;
}

void gazebo_Action_finalize(
    gazebo_Action* sample)
{

    if (sample==NULL) {
        return;
    }
}

void gazebo_Action_finalize_ex(
    gazebo_Action* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_Action_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_Action_finalize_w_params(
    gazebo_Action* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void gazebo_Action_finalize_optional_members(
    gazebo_Action* sample, RTIBool deletePointers)
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

RTIBool gazebo_Action_copy(
    gazebo_Action* dst,
    const gazebo_Action* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_Action' sequence class.
*/
#define T gazebo_Action
#define TSeq gazebo_ActionSeq
#define T_initialize_w_params gazebo_Action_initialize_w_params
#define T_finalize_w_params   gazebo_Action_finalize_w_params
#define T_copy       gazebo_Action_copy

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
const char *gazebo_PosiTYPENAME = "gazebo::Posi";

DDS_TypeCode* gazebo_Posi_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_Posi_g_tc_members[7]=
    {

        {
            (char *)"posX",/* Member name */
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
            (char *)"posY",/* Member name */
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
            (char *)"posZ",/* Member name */
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
            (char *)"orX",/* Member name */
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
            (char *)"orY",/* Member name */
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
            (char *)"orZ",/* Member name */
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
            (char *)"orW",/* Member name */
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

    static DDS_TypeCode gazebo_Posi_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::Posi", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            gazebo_Posi_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_Posi*/

    if (is_initialized) {
        return &gazebo_Posi_g_tc;
    }

    gazebo_Posi_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Posi_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Posi_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Posi_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Posi_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Posi_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_Posi_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &gazebo_Posi_g_tc;
}

RTIBool gazebo_Posi_initialize(
    gazebo_Posi* sample) {
    return gazebo_Posi_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_Posi_initialize_ex(
    gazebo_Posi* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_Posi_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_Posi_initialize_w_params(
    gazebo_Posi* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initDouble(&sample->posX)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->posY)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->posZ)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->orX)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->orY)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->orZ)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->orW)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void gazebo_Posi_finalize(
    gazebo_Posi* sample)
{

    gazebo_Posi_finalize_ex(sample,RTI_TRUE);
}

void gazebo_Posi_finalize_ex(
    gazebo_Posi* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_Posi_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_Posi_finalize_w_params(
    gazebo_Posi* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void gazebo_Posi_finalize_optional_members(
    gazebo_Posi* sample, RTIBool deletePointers)
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

RTIBool gazebo_Posi_copy(
    gazebo_Posi* dst,
    const gazebo_Posi* src)
{

    if (!RTICdrType_copyDouble (
        &dst->posX, &src->posX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->posY, &src->posY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->posZ, &src->posZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->orX, &src->orX)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->orY, &src->orY)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->orZ, &src->orZ)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->orW, &src->orW)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_Posi' sequence class.
*/
#define T gazebo_Posi
#define TSeq gazebo_PosiSeq
#define T_initialize_w_params gazebo_Posi_initialize_w_params
#define T_finalize_w_params   gazebo_Posi_finalize_w_params
#define T_copy       gazebo_Posi_copy

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
const char *gazebo_MeltInTYPENAME = "gazebo::MeltIn";

DDS_TypeCode* gazebo_MeltIn_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member gazebo_MeltIn_g_tc_members[2]=
    {

        {
            (char *)"depth",/* Member name */
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
            (char *)"speed",/* Member name */
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

    static DDS_TypeCode gazebo_MeltIn_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::MeltIn", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            gazebo_MeltIn_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_MeltIn*/

    if (is_initialized) {
        return &gazebo_MeltIn_g_tc;
    }

    gazebo_MeltIn_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    gazebo_MeltIn_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &gazebo_MeltIn_g_tc;
}

RTIBool gazebo_MeltIn_initialize(
    gazebo_MeltIn* sample) {
    return gazebo_MeltIn_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_MeltIn_initialize_ex(
    gazebo_MeltIn* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_MeltIn_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_MeltIn_initialize_w_params(
    gazebo_MeltIn* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initDouble(&sample->depth)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->speed)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void gazebo_MeltIn_finalize(
    gazebo_MeltIn* sample)
{

    gazebo_MeltIn_finalize_ex(sample,RTI_TRUE);
}

void gazebo_MeltIn_finalize_ex(
    gazebo_MeltIn* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_MeltIn_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_MeltIn_finalize_w_params(
    gazebo_MeltIn* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void gazebo_MeltIn_finalize_optional_members(
    gazebo_MeltIn* sample, RTIBool deletePointers)
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

RTIBool gazebo_MeltIn_copy(
    gazebo_MeltIn* dst,
    const gazebo_MeltIn* src)
{

    if (!RTICdrType_copyDouble (
        &dst->depth, &src->depth)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->speed, &src->speed)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_MeltIn' sequence class.
*/
#define T gazebo_MeltIn
#define TSeq gazebo_MeltInSeq
#define T_initialize_w_params gazebo_MeltIn_initialize_w_params
#define T_finalize_w_params   gazebo_MeltIn_finalize_w_params
#define T_copy       gazebo_MeltIn_copy

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
const char *gazebo_PositionPluginRequestTYPENAME = "gazebo::PositionPluginRequest";

DDS_TypeCode* gazebo_PositionPluginRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode gazebo_PositionPluginRequest_g_tc_apu_string = DDS_INITIALIZE_STRING_TYPECODE((64));
    static DDS_TypeCode_Member gazebo_PositionPluginRequest_g_tc_members[4]=
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
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"act",/* Member name */
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
            (char *)"melt",/* Member name */
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
            (char *)"pos",/* Member name */
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

    static DDS_TypeCode gazebo_PositionPluginRequest_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"gazebo::PositionPluginRequest", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            gazebo_PositionPluginRequest_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for gazebo_PositionPluginRequest*/

    if (is_initialized) {
        return &gazebo_PositionPluginRequest_g_tc;
    }

    gazebo_PositionPluginRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&gazebo_PositionPluginRequest_g_tc_apu_string;

    gazebo_PositionPluginRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)gazebo_Action_get_typecode();

    gazebo_PositionPluginRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)gazebo_MeltIn_get_typecode();

    gazebo_PositionPluginRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)gazebo_Posi_get_typecode();

    is_initialized = RTI_TRUE;

    return &gazebo_PositionPluginRequest_g_tc;
}

RTIBool gazebo_PositionPluginRequest_initialize(
    gazebo_PositionPluginRequest* sample) {
    return gazebo_PositionPluginRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool gazebo_PositionPluginRequest_initialize_ex(
    gazebo_PositionPluginRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return gazebo_PositionPluginRequest_initialize_w_params(
        sample,&allocParams);

}

RTIBool gazebo_PositionPluginRequest_initialize_w_params(
    gazebo_PositionPluginRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory){
        sample->apu= DDS_String_alloc ((64));
        if (sample->apu == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->apu!= NULL) { 
            sample->apu[0] = '\0';
        }
    }

    if (!gazebo_Action_initialize_w_params(&sample->act,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!gazebo_MeltIn_initialize_w_params(&sample->melt,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!gazebo_Posi_initialize_w_params(&sample->pos,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void gazebo_PositionPluginRequest_finalize(
    gazebo_PositionPluginRequest* sample)
{

    gazebo_PositionPluginRequest_finalize_ex(sample,RTI_TRUE);
}

void gazebo_PositionPluginRequest_finalize_ex(
    gazebo_PositionPluginRequest* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    gazebo_PositionPluginRequest_finalize_w_params(
        sample,&deallocParams);
}

void gazebo_PositionPluginRequest_finalize_w_params(
    gazebo_PositionPluginRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    if (sample->apu != NULL) {
        DDS_String_free(sample->apu);
        sample->apu=NULL;

    }
    gazebo_Action_finalize_w_params(&sample->act,deallocParams);

    gazebo_MeltIn_finalize_w_params(&sample->melt,deallocParams);

    gazebo_Posi_finalize_w_params(&sample->pos,deallocParams);

}

void gazebo_PositionPluginRequest_finalize_optional_members(
    gazebo_PositionPluginRequest* sample, RTIBool deletePointers)
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

    gazebo_Action_finalize_optional_members(&sample->act, deallocParams->delete_pointers);
    gazebo_MeltIn_finalize_optional_members(&sample->melt, deallocParams->delete_pointers);
    gazebo_Posi_finalize_optional_members(&sample->pos, deallocParams->delete_pointers);
}

RTIBool gazebo_PositionPluginRequest_copy(
    gazebo_PositionPluginRequest* dst,
    const gazebo_PositionPluginRequest* src)
{

    if (!RTICdrType_copyStringEx (
        &dst->apu, src->apu, 
        (64) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!gazebo_Action_copy(
        &dst->act, &src->act)) {
        return RTI_FALSE;
    } 
    if (!gazebo_MeltIn_copy(
        &dst->melt, &src->melt)) {
        return RTI_FALSE;
    } 
    if (!gazebo_Posi_copy(
        &dst->pos, &src->pos)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'gazebo_PositionPluginRequest' sequence class.
*/
#define T gazebo_PositionPluginRequest
#define TSeq gazebo_PositionPluginRequestSeq
#define T_initialize_w_params gazebo_PositionPluginRequest_initialize_w_params
#define T_finalize_w_params   gazebo_PositionPluginRequest_finalize_w_params
#define T_copy       gazebo_PositionPluginRequest_copy

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

