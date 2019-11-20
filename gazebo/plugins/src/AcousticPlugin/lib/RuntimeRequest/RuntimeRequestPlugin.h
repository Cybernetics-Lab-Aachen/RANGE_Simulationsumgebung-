

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RuntimeRequest.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RuntimeRequestPlugin_1530089555_h
#define RuntimeRequestPlugin_1530089555_h

#include "RuntimeRequest.h"

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

    #define gazebo_RuntimeRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_RuntimeRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_RuntimeRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_RuntimeRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_RuntimeRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_RuntimeRequest*
    gazebo_RuntimeRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_RuntimeRequest*
    gazebo_RuntimeRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_RuntimeRequest*
    gazebo_RuntimeRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPluginSupport_copy_data(
        gazebo_RuntimeRequest *out,
        const gazebo_RuntimeRequest *in);

    NDDSUSERDllExport extern void 
    gazebo_RuntimeRequestPluginSupport_destroy_data_w_params(
        gazebo_RuntimeRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_RuntimeRequestPluginSupport_destroy_data_ex(
        gazebo_RuntimeRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_RuntimeRequestPluginSupport_destroy_data(
        gazebo_RuntimeRequest *sample);

    NDDSUSERDllExport extern void 
    gazebo_RuntimeRequestPluginSupport_print_data(
        const gazebo_RuntimeRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_RuntimeRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_RuntimeRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_RuntimeRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_RuntimeRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_RuntimeRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_RuntimeRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_RuntimeRequest *out,
        const gazebo_RuntimeRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_RuntimeRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_RuntimeRequest *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_RuntimeRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_RuntimeRequest *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_RuntimeRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_RuntimeRequestPlugin_deserialize_from_cdr_buffer(
        gazebo_RuntimeRequest *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_RuntimeRequestPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_RuntimeRequestPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_RuntimeRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_RuntimeRequestPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_RuntimeRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_RuntimeRequest * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_RuntimeRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_RuntimeRequestPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_RuntimeRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_RuntimeRequest *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_RuntimeRequest * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_RuntimeRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_RuntimeRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_RuntimeRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_RuntimeRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_RuntimeRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_RuntimeRequestPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RuntimeRequestPlugin_1530089555_h */

