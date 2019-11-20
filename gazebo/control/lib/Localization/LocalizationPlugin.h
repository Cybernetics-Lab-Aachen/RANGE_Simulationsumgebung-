

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Localization.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LocalizationPlugin_395155913_h
#define LocalizationPlugin_395155913_h

#include "Localization.h"

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

    #define de_dlr_enex_datamodel_range_UIDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define de_dlr_enex_datamodel_range_UIDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define de_dlr_enex_datamodel_range_UIDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define de_dlr_enex_datamodel_range_UIDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define de_dlr_enex_datamodel_range_UIDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_UID*
    de_dlr_enex_datamodel_range_UIDPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_UID*
    de_dlr_enex_datamodel_range_UIDPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_UID*
    de_dlr_enex_datamodel_range_UIDPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_UIDPluginSupport_copy_data(
        de_dlr_enex_datamodel_range_UID *out,
        const de_dlr_enex_datamodel_range_UID *in);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_UIDPluginSupport_destroy_data_w_params(
        de_dlr_enex_datamodel_range_UID *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_UIDPluginSupport_destroy_data_ex(
        de_dlr_enex_datamodel_range_UID *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_UIDPluginSupport_destroy_data(
        de_dlr_enex_datamodel_range_UID *sample);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_UIDPluginSupport_print_data(
        const de_dlr_enex_datamodel_range_UID *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_UIDPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_UID *out,
        const de_dlr_enex_datamodel_range_UID *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_UIDPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_UID *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_UIDPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_UID *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_UIDPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_UIDPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_UIDPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_UIDPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    de_dlr_enex_datamodel_range_UIDPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const de_dlr_enex_datamodel_range_UID * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    de_dlr_enex_datamodel_range_UIDPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_UIDPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_UIDPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_UIDPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_UID *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_UIDPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_UID * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_UIDPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_UID *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define de_dlr_enex_datamodel_range_FramePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define de_dlr_enex_datamodel_range_FramePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define de_dlr_enex_datamodel_range_FramePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define de_dlr_enex_datamodel_range_FramePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define de_dlr_enex_datamodel_range_FramePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Frame*
    de_dlr_enex_datamodel_range_FramePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Frame*
    de_dlr_enex_datamodel_range_FramePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Frame*
    de_dlr_enex_datamodel_range_FramePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_FramePluginSupport_copy_data(
        de_dlr_enex_datamodel_range_Frame *out,
        const de_dlr_enex_datamodel_range_Frame *in);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_FramePluginSupport_destroy_data_w_params(
        de_dlr_enex_datamodel_range_Frame *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_FramePluginSupport_destroy_data_ex(
        de_dlr_enex_datamodel_range_Frame *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_FramePluginSupport_destroy_data(
        de_dlr_enex_datamodel_range_Frame *sample);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_FramePluginSupport_print_data(
        const de_dlr_enex_datamodel_range_Frame *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_FramePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Frame *out,
        const de_dlr_enex_datamodel_range_Frame *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_FramePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Frame *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_FramePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Frame *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_FramePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_FramePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_FramePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_FramePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    de_dlr_enex_datamodel_range_FramePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const de_dlr_enex_datamodel_range_Frame * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    de_dlr_enex_datamodel_range_FramePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_FramePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_FramePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_FramePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Frame *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_FramePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Frame * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_FramePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Frame *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define de_dlr_enex_datamodel_range_PointPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define de_dlr_enex_datamodel_range_PointPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define de_dlr_enex_datamodel_range_PointPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define de_dlr_enex_datamodel_range_PointPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define de_dlr_enex_datamodel_range_PointPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Point*
    de_dlr_enex_datamodel_range_PointPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Point*
    de_dlr_enex_datamodel_range_PointPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Point*
    de_dlr_enex_datamodel_range_PointPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPluginSupport_copy_data(
        de_dlr_enex_datamodel_range_Point *out,
        const de_dlr_enex_datamodel_range_Point *in);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PointPluginSupport_destroy_data_w_params(
        de_dlr_enex_datamodel_range_Point *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PointPluginSupport_destroy_data_ex(
        de_dlr_enex_datamodel_range_Point *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PointPluginSupport_destroy_data(
        de_dlr_enex_datamodel_range_Point *sample);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PointPluginSupport_print_data(
        const de_dlr_enex_datamodel_range_Point *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    de_dlr_enex_datamodel_range_PointPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PointPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    de_dlr_enex_datamodel_range_PointPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PointPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    de_dlr_enex_datamodel_range_PointPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Point *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Point *out,
        const de_dlr_enex_datamodel_range_Point *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Point *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Point *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PointPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const de_dlr_enex_datamodel_range_Point *sample); 

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Point **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PointPlugin_deserialize_from_cdr_buffer(
        de_dlr_enex_datamodel_range_Point *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PointPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PointPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PointPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PointPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    de_dlr_enex_datamodel_range_PointPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const de_dlr_enex_datamodel_range_Point * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    de_dlr_enex_datamodel_range_PointPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PointPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PointPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Point *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Point * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PointPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Point ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PointPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Point *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    de_dlr_enex_datamodel_range_PointPlugin_new(void);

    NDDSUSERDllExport extern void
    de_dlr_enex_datamodel_range_PointPlugin_delete(struct PRESTypePlugin *);

    #define de_dlr_enex_datamodel_range_QuaternionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define de_dlr_enex_datamodel_range_QuaternionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define de_dlr_enex_datamodel_range_QuaternionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define de_dlr_enex_datamodel_range_QuaternionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define de_dlr_enex_datamodel_range_QuaternionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Quaternion*
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Quaternion*
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Quaternion*
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_copy_data(
        de_dlr_enex_datamodel_range_Quaternion *out,
        const de_dlr_enex_datamodel_range_Quaternion *in);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_destroy_data_w_params(
        de_dlr_enex_datamodel_range_Quaternion *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_destroy_data_ex(
        de_dlr_enex_datamodel_range_Quaternion *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_destroy_data(
        de_dlr_enex_datamodel_range_Quaternion *sample);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_QuaternionPluginSupport_print_data(
        const de_dlr_enex_datamodel_range_Quaternion *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    de_dlr_enex_datamodel_range_QuaternionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_QuaternionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    de_dlr_enex_datamodel_range_QuaternionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_QuaternionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    de_dlr_enex_datamodel_range_QuaternionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Quaternion *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Quaternion *out,
        const de_dlr_enex_datamodel_range_Quaternion *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Quaternion *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Quaternion *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_QuaternionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const de_dlr_enex_datamodel_range_Quaternion *sample); 

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Quaternion **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_QuaternionPlugin_deserialize_from_cdr_buffer(
        de_dlr_enex_datamodel_range_Quaternion *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_QuaternionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_QuaternionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_QuaternionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_QuaternionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    de_dlr_enex_datamodel_range_QuaternionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const de_dlr_enex_datamodel_range_Quaternion * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    de_dlr_enex_datamodel_range_QuaternionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_QuaternionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_QuaternionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Quaternion *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Quaternion * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_QuaternionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Quaternion ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_QuaternionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Quaternion *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    de_dlr_enex_datamodel_range_QuaternionPlugin_new(void);

    NDDSUSERDllExport extern void
    de_dlr_enex_datamodel_range_QuaternionPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_ProcessState *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_ProcessState *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_ProcessStatePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    de_dlr_enex_datamodel_range_ProcessStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const de_dlr_enex_datamodel_range_ProcessState * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_ProcessState *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_ProcessStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_ProcessState * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_ProcessStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_ProcessState *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    de_dlr_enex_datamodel_range_ProcessStatePluginSupport_print_data(
        const de_dlr_enex_datamodel_range_ProcessState *sample, const char *desc, int indent_level);

    #define de_dlr_enex_datamodel_range_PosePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define de_dlr_enex_datamodel_range_PosePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define de_dlr_enex_datamodel_range_PosePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define de_dlr_enex_datamodel_range_PosePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define de_dlr_enex_datamodel_range_PosePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Pose*
    de_dlr_enex_datamodel_range_PosePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Pose*
    de_dlr_enex_datamodel_range_PosePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Pose*
    de_dlr_enex_datamodel_range_PosePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePluginSupport_copy_data(
        de_dlr_enex_datamodel_range_Pose *out,
        const de_dlr_enex_datamodel_range_Pose *in);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PosePluginSupport_destroy_data_w_params(
        de_dlr_enex_datamodel_range_Pose *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PosePluginSupport_destroy_data_ex(
        de_dlr_enex_datamodel_range_Pose *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PosePluginSupport_destroy_data(
        de_dlr_enex_datamodel_range_Pose *sample);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PosePluginSupport_print_data(
        const de_dlr_enex_datamodel_range_Pose *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    de_dlr_enex_datamodel_range_PosePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PosePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    de_dlr_enex_datamodel_range_PosePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_PosePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    de_dlr_enex_datamodel_range_PosePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Pose *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Pose *out,
        const de_dlr_enex_datamodel_range_Pose *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Pose *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Pose *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PosePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const de_dlr_enex_datamodel_range_Pose *sample); 

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Pose **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PosePlugin_deserialize_from_cdr_buffer(
        de_dlr_enex_datamodel_range_Pose *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PosePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PosePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PosePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PosePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    de_dlr_enex_datamodel_range_PosePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const de_dlr_enex_datamodel_range_Pose * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    de_dlr_enex_datamodel_range_PosePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PosePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_PosePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Pose *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Pose * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_PosePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Pose ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_PosePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Pose *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    de_dlr_enex_datamodel_range_PosePlugin_new(void);

    NDDSUSERDllExport extern void
    de_dlr_enex_datamodel_range_PosePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Localization
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Localization)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Localization must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Localization.
    */
    typedef  class de_dlr_enex_datamodel_range_Localization de_dlr_enex_datamodel_range_LocalizationKeyHolder;

    #define de_dlr_enex_datamodel_range_LocalizationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define de_dlr_enex_datamodel_range_LocalizationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define de_dlr_enex_datamodel_range_LocalizationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define de_dlr_enex_datamodel_range_LocalizationPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define de_dlr_enex_datamodel_range_LocalizationPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define de_dlr_enex_datamodel_range_LocalizationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define de_dlr_enex_datamodel_range_LocalizationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Localization*
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Localization*
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Localization*
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_copy_data(
        de_dlr_enex_datamodel_range_Localization *out,
        const de_dlr_enex_datamodel_range_Localization *in);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_destroy_data_w_params(
        de_dlr_enex_datamodel_range_Localization *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_destroy_data_ex(
        de_dlr_enex_datamodel_range_Localization *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_destroy_data(
        de_dlr_enex_datamodel_range_Localization *sample);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_print_data(
        const de_dlr_enex_datamodel_range_Localization *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Localization*
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern de_dlr_enex_datamodel_range_Localization*
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_destroy_key_ex(
        de_dlr_enex_datamodel_range_LocalizationKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPluginSupport_destroy_key(
        de_dlr_enex_datamodel_range_LocalizationKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    de_dlr_enex_datamodel_range_LocalizationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    de_dlr_enex_datamodel_range_LocalizationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    de_dlr_enex_datamodel_range_LocalizationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    de_dlr_enex_datamodel_range_LocalizationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization *out,
        const de_dlr_enex_datamodel_range_Localization *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Localization *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_LocalizationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const de_dlr_enex_datamodel_range_Localization *sample); 

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_LocalizationPlugin_deserialize_from_cdr_buffer(
        de_dlr_enex_datamodel_range_Localization *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_LocalizationPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_LocalizationPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_LocalizationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_LocalizationPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    de_dlr_enex_datamodel_range_LocalizationPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const de_dlr_enex_datamodel_range_Localization * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    de_dlr_enex_datamodel_range_LocalizationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_LocalizationPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    de_dlr_enex_datamodel_range_LocalizationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const de_dlr_enex_datamodel_range_Localization *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    de_dlr_enex_datamodel_range_LocalizationPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_LocalizationKeyHolder *key, 
        const de_dlr_enex_datamodel_range_Localization *instance);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        de_dlr_enex_datamodel_range_Localization *instance, 
        const de_dlr_enex_datamodel_range_LocalizationKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const de_dlr_enex_datamodel_range_Localization *instance);

    NDDSUSERDllExport extern RTIBool 
    de_dlr_enex_datamodel_range_LocalizationPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    de_dlr_enex_datamodel_range_LocalizationPlugin_new(void);

    NDDSUSERDllExport extern void
    de_dlr_enex_datamodel_range_LocalizationPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LocalizationPlugin_395155913_h */

