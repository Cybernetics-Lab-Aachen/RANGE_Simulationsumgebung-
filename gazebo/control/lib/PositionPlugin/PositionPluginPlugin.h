

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PositionPlugin.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PositionPluginPlugin_1929032075_h
#define PositionPluginPlugin_1929032075_h

#include "PositionPlugin.h"

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

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_ActionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Action *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ActionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Action *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_ActionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_ActionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_ActionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_ActionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_ActionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_Action * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    gazebo_ActionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_ActionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ActionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Action *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ActionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Action * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_ActionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Action *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    gazebo_ActionPluginSupport_print_data(
        const gazebo_Action *sample, const char *desc, int indent_level);

    #define gazebo_PosiPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_PosiPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_PosiPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_PosiPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_PosiPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_Posi*
    gazebo_PosiPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_Posi*
    gazebo_PosiPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_Posi*
    gazebo_PosiPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPluginSupport_copy_data(
        gazebo_Posi *out,
        const gazebo_Posi *in);

    NDDSUSERDllExport extern void 
    gazebo_PosiPluginSupport_destroy_data_w_params(
        gazebo_Posi *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_PosiPluginSupport_destroy_data_ex(
        gazebo_Posi *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_PosiPluginSupport_destroy_data(
        gazebo_Posi *sample);

    NDDSUSERDllExport extern void 
    gazebo_PosiPluginSupport_print_data(
        const gazebo_Posi *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_PosiPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_PosiPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_PosiPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_PosiPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_PosiPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Posi *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Posi *out,
        const gazebo_Posi *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Posi *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Posi *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PosiPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_Posi *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Posi **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PosiPlugin_deserialize_from_cdr_buffer(
        gazebo_Posi *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_PosiPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PosiPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_PosiPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PosiPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_PosiPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_Posi * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_PosiPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PosiPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PosiPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Posi *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Posi * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PosiPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Posi ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PosiPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Posi *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_PosiPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_PosiPlugin_delete(struct PRESTypePlugin *);

    #define gazebo_MeltInPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_MeltInPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_MeltInPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_MeltInPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_MeltInPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_MeltIn*
    gazebo_MeltInPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_MeltIn*
    gazebo_MeltInPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_MeltIn*
    gazebo_MeltInPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPluginSupport_copy_data(
        gazebo_MeltIn *out,
        const gazebo_MeltIn *in);

    NDDSUSERDllExport extern void 
    gazebo_MeltInPluginSupport_destroy_data_w_params(
        gazebo_MeltIn *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_MeltInPluginSupport_destroy_data_ex(
        gazebo_MeltIn *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_MeltInPluginSupport_destroy_data(
        gazebo_MeltIn *sample);

    NDDSUSERDllExport extern void 
    gazebo_MeltInPluginSupport_print_data(
        const gazebo_MeltIn *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_MeltInPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_MeltInPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_MeltInPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_MeltInPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_MeltInPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_MeltIn *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_MeltIn *out,
        const gazebo_MeltIn *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_MeltIn *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_MeltIn *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_MeltInPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_MeltIn *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_MeltIn **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_MeltInPlugin_deserialize_from_cdr_buffer(
        gazebo_MeltIn *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_MeltInPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_MeltInPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_MeltInPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_MeltInPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_MeltInPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_MeltIn * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_MeltInPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_MeltInPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_MeltInPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_MeltIn *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_MeltIn * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_MeltInPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_MeltIn ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_MeltInPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_MeltIn *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_MeltInPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_MeltInPlugin_delete(struct PRESTypePlugin *);

    #define gazebo_PositionPluginRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_PositionPluginRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_PositionPluginRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_PositionPluginRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_PositionPluginRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_PositionPluginRequest*
    gazebo_PositionPluginRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_PositionPluginRequest*
    gazebo_PositionPluginRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_PositionPluginRequest*
    gazebo_PositionPluginRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPluginSupport_copy_data(
        gazebo_PositionPluginRequest *out,
        const gazebo_PositionPluginRequest *in);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginRequestPluginSupport_destroy_data_w_params(
        gazebo_PositionPluginRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginRequestPluginSupport_destroy_data_ex(
        gazebo_PositionPluginRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginRequestPluginSupport_destroy_data(
        gazebo_PositionPluginRequest *sample);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginRequestPluginSupport_print_data(
        const gazebo_PositionPluginRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_PositionPluginRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_PositionPluginRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_PositionPluginRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_PositionPluginRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_PositionPluginRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_PositionPluginRequest *out,
        const gazebo_PositionPluginRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_PositionPluginRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_PositionPluginRequest *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPluginRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_PositionPluginRequest *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_PositionPluginRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPluginRequestPlugin_deserialize_from_cdr_buffer(
        gazebo_PositionPluginRequest *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPluginRequestPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPluginRequestPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPluginRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPluginRequestPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_PositionPluginRequestPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_PositionPluginRequest * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_PositionPluginRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPluginRequestPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PositionPluginRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_PositionPluginRequest *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_PositionPluginRequest * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PositionPluginRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_PositionPluginRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PositionPluginRequestPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_PositionPluginRequest *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_PositionPluginRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_PositionPluginRequestPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* PositionPluginPlugin_1929032075_h */

