

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrajectoryRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrajectoryRequestPlugin_797839897_h
#define TrajectoryRequestPlugin_797839897_h

#include "TrajectoryRequest.h"

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

    #define range_TrajectoryRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define range_TrajectoryRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define range_TrajectoryRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define range_TrajectoryRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define range_TrajectoryRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern range_TrajectoryRequest*
    range_TrajectoryRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern range_TrajectoryRequest*
    range_TrajectoryRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern range_TrajectoryRequest*
    range_TrajectoryRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPluginSupport_copy_data(
        range_TrajectoryRequest *out,
        const range_TrajectoryRequest *in);

    NDDSUSERDllExport extern void 
    range_TrajectoryRequestPluginSupport_destroy_data_w_params(
        range_TrajectoryRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    range_TrajectoryRequestPluginSupport_destroy_data_ex(
        range_TrajectoryRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    range_TrajectoryRequestPluginSupport_destroy_data(
        range_TrajectoryRequest *sample);

    NDDSUSERDllExport extern void 
    range_TrajectoryRequestPluginSupport_print_data(
        const range_TrajectoryRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    range_TrajectoryRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    range_TrajectoryRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    range_TrajectoryRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    range_TrajectoryRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    range_TrajectoryRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_TrajectoryRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_TrajectoryRequest *out,
        const range_TrajectoryRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const range_TrajectoryRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_TrajectoryRequest *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_TrajectoryRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const range_TrajectoryRequest *sample); 

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        range_TrajectoryRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_TrajectoryRequestPlugin_deserialize_from_cdr_buffer(
        range_TrajectoryRequest *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    range_TrajectoryRequestPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    range_TrajectoryRequestPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    range_TrajectoryRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_TrajectoryRequestPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    range_TrajectoryRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const range_TrajectoryRequest * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    range_TrajectoryRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    range_TrajectoryRequestPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    range_TrajectoryRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const range_TrajectoryRequest *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        range_TrajectoryRequest * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    range_TrajectoryRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        range_TrajectoryRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    range_TrajectoryRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        range_TrajectoryRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    range_TrajectoryRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    range_TrajectoryRequestPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TrajectoryRequestPlugin_797839897_h */

