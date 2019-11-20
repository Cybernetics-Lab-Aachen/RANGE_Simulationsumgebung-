

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ApuSpawn.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ApuSpawnPlugin_517948193_h
#define ApuSpawnPlugin_517948193_h

#include "ApuSpawn.h"

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

    #define gazebo_PointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_PointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_PointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_PointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_PointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_Point*
    gazebo_PointPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_Point*
    gazebo_PointPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_Point*
    gazebo_PointPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPluginSupport_copy_data(
        gazebo_Point *out,
        const gazebo_Point *in);

    NDDSUSERDllExport extern void 
    gazebo_PointPluginSupport_destroy_data_w_params(
        gazebo_Point *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_PointPluginSupport_destroy_data_ex(
        gazebo_Point *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_PointPluginSupport_destroy_data(
        gazebo_Point *sample);

    NDDSUSERDllExport extern void 
    gazebo_PointPluginSupport_print_data(
        const gazebo_Point *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_PointPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_PointPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_PointPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_PointPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_PointPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Point *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Point *out,
        const gazebo_Point *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Point *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Point *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PointPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_Point *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Point **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PointPlugin_deserialize_from_cdr_buffer(
        gazebo_Point *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_PointPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PointPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_PointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PointPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_PointPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_Point * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_PointPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PointPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_PointPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Point *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Point * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_PointPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Point ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_PointPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Point *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_PointPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_PointPlugin_delete(struct PRESTypePlugin *);

    #define gazebo_QuaternionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_QuaternionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_QuaternionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_QuaternionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_QuaternionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_Quaternion*
    gazebo_QuaternionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_Quaternion*
    gazebo_QuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_Quaternion*
    gazebo_QuaternionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPluginSupport_copy_data(
        gazebo_Quaternion *out,
        const gazebo_Quaternion *in);

    NDDSUSERDllExport extern void 
    gazebo_QuaternionPluginSupport_destroy_data_w_params(
        gazebo_Quaternion *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_QuaternionPluginSupport_destroy_data_ex(
        gazebo_Quaternion *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_QuaternionPluginSupport_destroy_data(
        gazebo_Quaternion *sample);

    NDDSUSERDllExport extern void 
    gazebo_QuaternionPluginSupport_print_data(
        const gazebo_Quaternion *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_QuaternionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_QuaternionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_QuaternionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_QuaternionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_QuaternionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Quaternion *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Quaternion *out,
        const gazebo_Quaternion *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Quaternion *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Quaternion *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_QuaternionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_Quaternion *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Quaternion **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_QuaternionPlugin_deserialize_from_cdr_buffer(
        gazebo_Quaternion *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_QuaternionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_QuaternionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_QuaternionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_QuaternionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_QuaternionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_Quaternion * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_QuaternionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_QuaternionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_QuaternionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_Quaternion *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Quaternion * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_QuaternionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Quaternion ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_QuaternionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_Quaternion *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_QuaternionPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_QuaternionPlugin_delete(struct PRESTypePlugin *);

    #define gazebo_ApuSpawnPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define gazebo_ApuSpawnPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define gazebo_ApuSpawnPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define gazebo_ApuSpawnPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define gazebo_ApuSpawnPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern gazebo_ApuSpawn*
    gazebo_ApuSpawnPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern gazebo_ApuSpawn*
    gazebo_ApuSpawnPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern gazebo_ApuSpawn*
    gazebo_ApuSpawnPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPluginSupport_copy_data(
        gazebo_ApuSpawn *out,
        const gazebo_ApuSpawn *in);

    NDDSUSERDllExport extern void 
    gazebo_ApuSpawnPluginSupport_destroy_data_w_params(
        gazebo_ApuSpawn *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    gazebo_ApuSpawnPluginSupport_destroy_data_ex(
        gazebo_ApuSpawn *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    gazebo_ApuSpawnPluginSupport_destroy_data(
        gazebo_ApuSpawn *sample);

    NDDSUSERDllExport extern void 
    gazebo_ApuSpawnPluginSupport_print_data(
        const gazebo_ApuSpawn *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    gazebo_ApuSpawnPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    gazebo_ApuSpawnPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    gazebo_ApuSpawnPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    gazebo_ApuSpawnPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    gazebo_ApuSpawnPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_ApuSpawn *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_ApuSpawn *out,
        const gazebo_ApuSpawn *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_ApuSpawn *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_ApuSpawn *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_ApuSpawnPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const gazebo_ApuSpawn *sample); 

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_ApuSpawn **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_ApuSpawnPlugin_deserialize_from_cdr_buffer(
        gazebo_ApuSpawn *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    gazebo_ApuSpawnPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    gazebo_ApuSpawnPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    gazebo_ApuSpawnPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_ApuSpawnPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    gazebo_ApuSpawnPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const gazebo_ApuSpawn * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    gazebo_ApuSpawnPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    gazebo_ApuSpawnPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    gazebo_ApuSpawnPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const gazebo_ApuSpawn *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_ApuSpawn * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    gazebo_ApuSpawnPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_ApuSpawn ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    gazebo_ApuSpawnPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        gazebo_ApuSpawn *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    gazebo_ApuSpawnPlugin_new(void);

    NDDSUSERDllExport extern void
    gazebo_ApuSpawnPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ApuSpawnPlugin_517948193_h */

