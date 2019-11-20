

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AcousticRuntime.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AcousticRuntimePlugin_1641410540_h
#define AcousticRuntimePlugin_1641410540_h

#include "AcousticRuntime.h"

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

    #define gazebo_PositionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_PositionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_PositionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_PositionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_PositionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_Position*
    gazebo_PositionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_Position*
    gazebo_PositionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_Position*
    gazebo_PositionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginSupport_copy_data(
        gazebo_Position *out,
        const gazebo_Position *in);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginSupport_destroy_data_w_params(
        gazebo_Position *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginSupport_destroy_data_ex(
        gazebo_Position *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginSupport_destroy_data(
        gazebo_Position *sample);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginSupport_print_data(
        const gazebo_Position *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_PositionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_PositionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_PositionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_PositionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_PositionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Position *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Position *out,
        const gazebo_Position *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Position *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Position *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_Position *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Position **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPlugin_deserialize_from_cdr_buffer(
        gazebo_Position *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_PositionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_Position * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_PositionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Position *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Position * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Position ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Position *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_PositionPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_PositionPlugin_delete(struct PRESTypePlugin *);

    #define gazebo_OrientationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_OrientationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_OrientationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_OrientationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_OrientationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_Orientation*
    gazebo_OrientationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_Orientation*
    gazebo_OrientationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_Orientation*
    gazebo_OrientationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPluginSupport_copy_data(
        gazebo_Orientation *out,
        const gazebo_Orientation *in);

    NDDSUSERDllExport extern void 
    gazebo_OrientationPluginSupport_destroy_data_w_params(
        gazebo_Orientation *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_OrientationPluginSupport_destroy_data_ex(
        gazebo_Orientation *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_OrientationPluginSupport_destroy_data(
        gazebo_Orientation *sample);

    NDDSUSERDllExport extern void 
    gazebo_OrientationPluginSupport_print_data(
        const gazebo_Orientation *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_OrientationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_OrientationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_OrientationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_OrientationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_OrientationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Orientation *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Orientation *out,
        const gazebo_Orientation *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Orientation *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Orientation *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_OrientationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_Orientation *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Orientation **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_OrientationPlugin_deserialize_from_cdr_buffer(
        gazebo_Orientation *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_OrientationPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_OrientationPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_OrientationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_OrientationPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_OrientationPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_Orientation * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_OrientationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_OrientationPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_OrientationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Orientation *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Orientation * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_OrientationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Orientation ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_OrientationPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Orientation *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_OrientationPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_OrientationPlugin_delete(struct PRESTypePlugin *);

    #define gazebo_APUStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_APUStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_APUStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_APUStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_APUStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_APUState*
    gazebo_APUStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_APUState*
    gazebo_APUStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_APUState*
    gazebo_APUStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePluginSupport_copy_data(
        gazebo_APUState *out,
        const gazebo_APUState *in);

    NDDSUSERDllExport extern void 
    gazebo_APUStatePluginSupport_destroy_data_w_params(
        gazebo_APUState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_APUStatePluginSupport_destroy_data_ex(
        gazebo_APUState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_APUStatePluginSupport_destroy_data(
        gazebo_APUState *sample);

    NDDSUSERDllExport extern void 
    gazebo_APUStatePluginSupport_print_data(
        const gazebo_APUState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_APUStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_APUStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_APUStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_APUStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_APUStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_APUState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_APUState *out,
        const gazebo_APUState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_APUState *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_APUState *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_APUStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_APUState *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_APUState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_APUStatePlugin_deserialize_from_cdr_buffer(
        gazebo_APUState *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_APUStatePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_APUStatePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_APUStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_APUStatePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_APUStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_APUState * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_APUStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_APUStatePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_APUStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_APUState *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_APUState * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_APUStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_APUState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_APUStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_APUState *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_APUStatePlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_APUStatePlugin_delete(struct PRESTypePlugin *);

    #define gazebo_AcousticRuntimePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_AcousticRuntimePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_AcousticRuntimePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_AcousticRuntimePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_AcousticRuntimePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_AcousticRuntime*
    gazebo_AcousticRuntimePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_AcousticRuntime*
    gazebo_AcousticRuntimePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_AcousticRuntime*
    gazebo_AcousticRuntimePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePluginSupport_copy_data(
        gazebo_AcousticRuntime *out,
        const gazebo_AcousticRuntime *in);

    NDDSUSERDllExport extern void 
    gazebo_AcousticRuntimePluginSupport_destroy_data_w_params(
        gazebo_AcousticRuntime *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_AcousticRuntimePluginSupport_destroy_data_ex(
        gazebo_AcousticRuntime *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_AcousticRuntimePluginSupport_destroy_data(
        gazebo_AcousticRuntime *sample);

    NDDSUSERDllExport extern void 
    gazebo_AcousticRuntimePluginSupport_print_data(
        const gazebo_AcousticRuntime *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_AcousticRuntimePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_AcousticRuntimePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_AcousticRuntimePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_AcousticRuntimePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_AcousticRuntimePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_AcousticRuntime *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_AcousticRuntime *out,
        const gazebo_AcousticRuntime *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_AcousticRuntime *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_AcousticRuntime *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_AcousticRuntimePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_AcousticRuntime *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_AcousticRuntime **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_AcousticRuntimePlugin_deserialize_from_cdr_buffer(
        gazebo_AcousticRuntime *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_AcousticRuntimePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_AcousticRuntimePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_AcousticRuntimePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_AcousticRuntimePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_AcousticRuntimePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_AcousticRuntime * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_AcousticRuntimePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_AcousticRuntimePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_AcousticRuntimePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_AcousticRuntime *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_AcousticRuntime * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_AcousticRuntimePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_AcousticRuntime ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_AcousticRuntimePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_AcousticRuntime *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_AcousticRuntimePlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_AcousticRuntimePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* AcousticRuntimePlugin_1641410540_h */

