

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PositionRequestPlugin_32488113_h
#define PositionRequestPlugin_32488113_h

#include "PositionRequest.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    #define range_UIDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define range_UIDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define range_UIDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define range_UIDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define range_UIDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern range_UID*
    range_UIDPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern range_UID*
    range_UIDPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern range_UID*
    range_UIDPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    range_UIDPluginSupport_copy_data(
        range_UID *out,
        const range_UID *in);

    NDDSUSERDllExport extern void 
    range_UIDPluginSupport_destroy_data_w_params(
        range_UID *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    range_UIDPluginSupport_destroy_data_ex(
        range_UID *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    range_UIDPluginSupport_destroy_data(
        range_UID *sample);

    NDDSUSERDllExport extern void 
    range_UIDPluginSupport_print_data(
        const range_UID *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    range_UIDPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_UID *out,
        const range_UID *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    range_UIDPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const range_UID *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_UIDPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_UID *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_UIDPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    range_UIDPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    range_UIDPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_UIDPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    range_UIDPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const range_UID * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    range_UIDPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    range_UIDPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_UIDPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    range_UIDPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const range_UID *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_UIDPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_UID * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_UIDPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        range_UID *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    range_ContentPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const range_Content *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_ContentPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_Content *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_ContentPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    range_ContentPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    range_ContentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_ContentPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    range_ContentPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const range_Content * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    range_ContentPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_ContentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    range_ContentPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const range_Content *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_ContentPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_Content * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_ContentPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        range_Content *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    range_ContentPluginSupport_print_data(
        const range_Content *sample, const char *desc, int indent_level);

    #define range_PositionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define range_PositionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define range_PositionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define range_PositionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define range_PositionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern range_PositionRequest*
    range_PositionRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern range_PositionRequest*
    range_PositionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern range_PositionRequest*
    range_PositionRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPluginSupport_copy_data(
        range_PositionRequest *out,
        const range_PositionRequest *in);

    NDDSUSERDllExport extern void 
    range_PositionRequestPluginSupport_destroy_data_w_params(
        range_PositionRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    range_PositionRequestPluginSupport_destroy_data_ex(
        range_PositionRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    range_PositionRequestPluginSupport_destroy_data(
        range_PositionRequest *sample);

    NDDSUSERDllExport extern void 
    range_PositionRequestPluginSupport_print_data(
        const range_PositionRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    range_PositionRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    range_PositionRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    range_PositionRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    range_PositionRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    range_PositionRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_PositionRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_PositionRequest *out,
        const range_PositionRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const range_PositionRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_PositionRequest *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_PositionRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const range_PositionRequest *sample); 

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        range_PositionRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_PositionRequestPlugin_deserialize_from_cdr_buffer(
        range_PositionRequest *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    range_PositionRequestPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    range_PositionRequestPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    range_PositionRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_PositionRequestPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    range_PositionRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const range_PositionRequest * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    range_PositionRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    range_PositionRequestPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_PositionRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const range_PositionRequest *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_PositionRequest * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_PositionRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        range_PositionRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_PositionRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        range_PositionRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    range_PositionRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    range_PositionRequestPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PositionRequestPlugin_32488113_h */

