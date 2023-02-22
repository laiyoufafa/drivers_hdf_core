/*
 * Copyright (c) 2021-2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CAMERA_DEVICE_ABILITY_ITEMS_H
#define CAMERA_DEVICE_ABILITY_ITEMS_H

typedef enum camera_ability_section {
    // Camera attribute information: position(facing), type, connection, description, sensor, lens description
    OHOS_CAMERA_PROPERTIES = 0,
    OHOS_CAMERA_LENS,
    OHOS_CAMERA_SENSOR,
    OHOS_CAMERA_SENSOR_INFO,
    OHOS_CAMERA_STATISTICS,

    // Camera device image acquisition
    OHOS_DEVICE_CONTROL = 0x1000, // Overall control, such as turning off automatic 3A, operating mode
    OHOS_DEVICE_EXPOSURE,
    OHOS_DEVICE_FOCUS,
    OHOS_DEVICE_WHITE_BLANCE,
    OHOS_DEVICE_FLASH,
    OHOS_DEVICE_ZOOM,

    // Camera image post-processing related
    OHOS_POST_PROCESS_CONTROL = 0x2000,
    OHOS_POST_PROCESS_COLOR,
    OHOS_POST_PROCESS_HDR,
    OHOS_POST_PROCESS_PORTRAIT,
    OHOS_POST_PROCESS_NIGHT,

    // Camera flow control related
    OHOS_STREAM_ABILITY = 0x3000,
    OHOS_STREAM_CONTROL, // General control: frame rate, resolution, mirroring
    OHOS_STREAM_JPEG,
    OHOS_STREAM_VIDEO, // Video encoding related
    OHOS_STREAM_DEPTH,
    OHOS_STREAM_METADATA,
    OHOS_STREAM_METADATA_FACE,
    OHOS_STREAM_METADATA_BODY,

    OHOS_ABILITY_SECTION_END
} camera_ability_section_t;

typedef enum camera_device_metadata_section_start {
    OHOS_CAMERA_PROPERTIES_START = OHOS_CAMERA_PROPERTIES << 16,
    OHOS_CAMERA_LENS_START = OHOS_CAMERA_LENS << 16,
    OHOS_CAMERA_SENSOR_START = OHOS_CAMERA_SENSOR << 16,
    OHOS_CAMERA_SENSOR_INFO_START = OHOS_CAMERA_SENSOR_INFO << 16,
    OHOS_CAMERA_STATISTICS_START = OHOS_CAMERA_STATISTICS << 16,

    OHOS_DEVICE_CONTROL_START = OHOS_DEVICE_CONTROL << 16,
    OHOS_DEVICE_EXPOSURE_START = OHOS_DEVICE_EXPOSURE << 16,
    OHOS_DEVICE_FOCUS_START = OHOS_DEVICE_FOCUS << 16,
    OHOS_DEVICE_WHITE_BLANCE_START = OHOS_DEVICE_WHITE_BLANCE << 16,
    OHOS_DEVICE_FLASH_START = OHOS_DEVICE_FLASH << 16,
    OHOS_DEVICE_ZOOM_START = OHOS_DEVICE_ZOOM << 16,

    OHOS_POST_PROCESS_CONTROL_START = OHOS_POST_PROCESS_CONTROL << 16,
    OHOS_POST_PROCESS_COLOR_START = OHOS_POST_PROCESS_COLOR << 16,
    OHOS_POST_PROCESS_HDR_START = OHOS_POST_PROCESS_HDR << 16,
    OHOS_POST_PROCESS_PORTRAIT_START = OHOS_POST_PROCESS_PORTRAIT << 16,
    OHOS_POST_PROCESS_NIGHT_START = OHOS_POST_PROCESS_NIGHT << 16,

    OHOS_STREAM_ABILITY_START = OHOS_STREAM_ABILITY << 16,
    OHOS_STREAM_CONTROL_START = OHOS_STREAM_CONTROL << 16,
    OHOS_STREAM_JPEG_START = OHOS_STREAM_JPEG << 16,
    OHOS_STREAM_VIDEO_START = OHOS_STREAM_VIDEO << 16,
    OHOS_STREAM_DEPTH_START = OHOS_STREAM_DEPTH << 16,
    OHOS_STREAM_METADATA_START = OHOS_STREAM_METADATA << 16,
    OHOS_STREAM_METADATA_FACE_START = OHOS_STREAM_METADATA_FACE << 16,
    OHOS_STREAM_METADATA_BODY_START = OHOS_STREAM_METADATA_BODY << 16
} camera_device_info_section_start_t;

typedef enum camera_device_metadata_tag {
    // Camera attribute related item
    OHOS_ABILITY_CAMERA_POSITION = OHOS_CAMERA_PROPERTIES_START,
    OHOS_ABILITY_CAMERA_TYPE,
    OHOS_ABILITY_CAMERA_CONNECTION_TYPE,
    OHOS_ABILITY_MEMORY_TYPE,
    OHOS_ABILITY_FPS_RANGES,
    OHOS_ABILITY_FLASH_AVAILABLE,
    OHOS_CAMERA_STREAM_ID,
    OHOS_CAMERA_PROPERTIES_END,

    OHOS_SENSOR_EXPOSURE_TIME = OHOS_CAMERA_SENSOR_START,
    OHOS_SENSOR_COLOR_CORRECTION_GAINS,
    OHOS_SENSOR_ORIENTATION,
    OHOS_ABILITY_MUTE_MODES,
    OHOS_CONTROL_MUTE_MODE,
    OHOS_CAMERA_SENSOR_END,

    OHOS_SENSOR_INFO_ACTIVE_ARRAY_SIZE = OHOS_CAMERA_SENSOR_INFO_START,
    OHOS_SENSOR_INFO_SENSITIVITY_RANGE,
    OHOS_SENSOR_INFO_MAX_FRAME_DURATION,
    OHOS_SENSOR_INFO_PHYSICAL_SIZE,
    OHOS_SENSOR_INFO_PIXEL_ARRAY_SIZE,
    OHOS_SENSOR_INFO_TIMESTAMP,
    OHOS_CAMERA_SENSOR_INFO_END,

    OHOS_STATISTICS_FACE_DETECT_MODE = OHOS_CAMERA_STATISTICS_START,
    OHOS_STATISTICS_FACE_DETECT_SWITCH,
    OHOS_STATISTICS_FACE_DETECT_MAX_NUM,
    OHOS_STATISTICS_HISTOGRAM_MODE,
    OHOS_STATISTICS_FACE_IDS,
    OHOS_STATISTICS_FACE_LANDMARKS,
    OHOS_STATISTICS_FACE_RECTANGLES,
    OHOS_STATISTICS_FACE_SCORES,
    OHOS_CAMERA_STATISTICS_END,

    OHOS_CONTROL_AE_ANTIBANDING_MODE = OHOS_DEVICE_CONTROL_START,
    OHOS_CONTROL_AE_EXPOSURE_COMPENSATION,
    OHOS_CONTROL_AE_LOCK,
    OHOS_CONTROL_AE_MODE,
    OHOS_CONTROL_AE_REGIONS,
    OHOS_CONTROL_AE_TARGET_FPS_RANGE,
    OHOS_CONTROL_FPS_RANGES,
    OHOS_CONTROL_AF_MODE,
    OHOS_CONTROL_AF_REGIONS,
    OHOS_CONTROL_AF_TRIGGER,
    OHOS_CONTROL_AF_TRIGGER_ID,
    OHOS_CONTROL_AF_STATE,
    OHOS_CONTROL_AWB_LOCK,
    OHOS_CONTROL_AWB_MODE,
    OHOS_CONTROL_AWB_REGIONS,
    OHOS_CONTROL_AE_AVAILABLE_ANTIBANDING_MODES,
    OHOS_CONTROL_AE_AVAILABLE_MODES,
    OHOS_CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES,
    OHOS_CONTROL_AE_COMPENSATION_RANGE,
    OHOS_CONTROL_AE_COMPENSATION_STEP,
    OHOS_CONTROL_AF_AVAILABLE_MODES,
    OHOS_CONTROL_AWB_AVAILABLE_MODES,
    OHOS_CONTROL_CAPTURE_MIRROR_SUPPORTED,
    OHOS_CONTROL_CAPTURE_MIRROR,
    OHOS_CONTROL_FOCUS_STATE,
    OHOS_CONTROL_METER_POINT,
    OHOS_CONTROL_METER_MODE,
    OHOS_CONTROL_EXPOSURE_STATE,
    OHOS_DEVICE_CONTROL_END,

    // Camera device image acquisition related
    OHOS_ABILITY_DEVICE_AVAILABLE_EXPOSUREMODES = OHOS_DEVICE_EXPOSURE_START,
    OHOS_CONTROL_EXPOSUREMODE,
    OHOS_ABILITY_EXPOSURE_MODES,
    OHOS_CONTROL_EXPOSURE_MODE,
    OHOS_ABILITY_METER_MODES,
    OHOS_DEVICE_EXPOSURE_END,

    OHOS_ABILITY_DEVICE_AVAILABLE_FOCUSMODES = OHOS_DEVICE_FOCUS_START,
    OHOS_CONTROL_FOCUSMODE,
    OHOS_ABILITY_FOCUS_MODES,
    OHOS_CONTROL_FOCUS_MODE,
    OHOS_ABILITY_FOCAL_LENGTH,
    OHOS_DEVICE_FOCUS_END,

    OHOS_ABILITY_DEVICE_AVAILABLE_FLASHMODES = OHOS_DEVICE_FLASH_START,
    OHOS_CONTROL_FLASHMODE,
    OHOS_ABILITY_FLASH_MODES,
    OHOS_CONTROL_FLASH_MODE,
    OHOS_CONTROL_FLASH_STATE,
    OHOS_DEVICE_FLASH_END,

    OHOS_ABILITY_ZOOM_RATIO_RANGE = OHOS_DEVICE_ZOOM_START,
    OHOS_CONTROL_ZOOM_RATIO,
    OHOS_CONTROL_ZOOM_CROP_REGION,
    OHOS_ABILITY_ZOOM_CAP,
    OHOS_ABILITY_SCENE_ZOOM_CAP,
    OHOS_DEVICE_ZOOM_END,

    // Camera flow control related
    OHOS_ABILITY_STREAM_AVAILABLE_BASIC_CONFIGURATIONS = OHOS_STREAM_ABILITY_START,
    OHOS_STREAM_AVAILABLE_FORMATS,
    OHOS_ABILITY_STREAM_AVAILABLE_EXTEND_CONFIGURATIONS,
    OHOS_STREAM_ABILITY_END,

    OHOS_JPEG_GPS_COORDINATES = OHOS_STREAM_JPEG_START,
    OHOS_JPEG_GPS_PROCESSING_METHOD,
    OHOS_JPEG_GPS_TIMESTAMP,
    OHOS_JPEG_ORIENTATION,
    OHOS_JPEG_QUALITY,
    OHOS_JPEG_THUMBNAIL_QUALITY,
    OHOS_JPEG_THUMBNAIL_SIZE,
    OHOS_JPEG_AVAILABLE_THUMBNAIL_SIZES,
    OHOS_JPEG_MAX_SIZE,
    OHOS_JPEG_SIZE,
    OHOS_STREAM_JPEG_END,

    OHOS_ABILITY_VIDEO_STABILIZATION_MODES = OHOS_STREAM_VIDEO_START,
    OHOS_CONTROL_VIDEO_STABILIZATION_MODE,
    OHOS_STREAM_VIDEO_END,
} camera_device_metadata_tag_t;

// OHOS_ABILITY_CAMERA_POSITION enumeration values
typedef enum camera_position_enum {
    OHOS_CAMERA_POSITION_FRONT = 0,
    OHOS_CAMERA_POSITION_BACK,
    OHOS_CAMERA_POSITION_OTHER
} camera_position_enum_t;

// OHOS_ABILITY_CAMERA_TYPE enumeration values
typedef enum camera_type_enum {
    OHOS_CAMERA_TYPE_WIDE_ANGLE = 0,
    OHOS_CAMERA_TYPE_ULTRA_WIDE,
    OHOS_CAMERA_TYPE_TELTPHOTO,
    OHOS_CAMERA_TYPE_TRUE_DEAPTH,
    OHOS_CAMERA_TYPE_LOGICAL,
    OHOS_CAMERA_TYPE_UNSPECIFIED,
} camera_type_enum_t;

// OHOS_ABILITY_CAMERA_CONNECTION_TYPE enumeration values
typedef enum camera_connection_type {
    OHOS_CAMERA_CONNECTION_TYPE_BUILTIN = 0,
    OHOS_CAMERA_CONNECTION_TYPE_USB_PLUGIN,
    OHOS_CAMERA_CONNECTION_TYPE_REMOTE,
} camera_connection_type_t;

// OHOS_CONTROL_EXPOSUREMODE
// and OHOS_ABILITY_EXPOSURE_MODES enumeration values
typedef enum camera_exposure_mode_enum {
    OHOS_CAMERA_EXPOSURE_MODE_MANUAL = 0,
    OHOS_CAMERA_EXPOSURE_MODE_CONTINUOUS_AUTO,
    OHOS_CAMERA_EXPOSURE_MODE_LOCKED,
    OHOS_CAMERA_EXPOSURE_MODE_AUTO
} camera_exposure_mode_enum_t;

// OHOS_CONTROL_FOCUS_MODE and OHOS_ABILITY_FOCUS_MODES enumeration values
typedef enum camera_focus_mode_enum {
    OHOS_CAMERA_FOCUS_MODE_MANUAL = 0,
    OHOS_CAMERA_FOCUS_MODE_CONTINUOUS_AUTO,
    OHOS_CAMERA_FOCUS_MODE_AUTO,
    OHOS_CAMERA_FOCUS_MODE_LOCKED
} camera_focus_mode_enum_t;

// OHOS_CONTROL_FLASHMODE and OHOS_ABILITY_FLASH_MODES enumeration values
typedef enum camera_flash_mode_enum {
    OHOS_CAMERA_FLASH_MODE_CLOSE = 0,
    OHOS_CAMERA_FLASH_MODE_OPEN,
    OHOS_CAMERA_FLASH_MODE_AUTO,
    OHOS_CAMERA_FLASH_MODE_ALWAYS_OPEN
} camera_flash_mode_enum_t;

// OHOS_CONTROL_FLASH_STATE enumeration values
typedef enum camera_flash_state_enum {
    OHOS_CAMERA_FLASH_STATE_UNAVAILABLE = 0,
    OHOS_CAMERA_FLASH_STATE_CHARGING,
    OHOS_CAMERA_FLASH_STATE_READY,
    OHOS_CAMERA_FLASH_STATE_FLASHING,
    OHOS_CAMERA_FLASH_STATE_UNKNOWN
} camera_flash_state_enum_t;

// OHOS_CONTROL_AE_ANTIBANDING_MODE enumeration values
typedef enum camera_ae_antibanding_mode {
    OHOS_CAMERA_AE_ANTIBANDING_MODE_OFF,
    OHOS_CAMERA_AE_ANTIBANDING_MODE_50HZ,
    OHOS_CAMERA_AE_ANTIBANDING_MODE_60HZ,
    OHOS_CAMERA_AE_ANTIBANDING_MODE_AUTO,
} camera_ae_antibanding_mode_t;

// OHOS_CONTROL_AE_LOCK enumeration values
typedef enum camera_ae_lock {
    OHOS_CAMERA_AE_LOCK_OFF,
    OHOS_CAMERA_AE_LOCK_ON,
} camera_ae_lock_t;

// OHOS_CONTROL_AE_MODE enumeration values
typedef enum camera_ae_mode {
    OHOS_CAMERA_AE_MODE_OFF,
    OHOS_CAMERA_AE_MODE_ON,
    OHOS_CAMERA_AE_MODE_ON_AUTO_FLASH,
    OHOS_CAMERA_AE_MODE_ON_ALWAYS_FLASH,
    OHOS_CAMERA_AE_MODE_ON_AUTO_FLASH_REDEYE,
    OHOS_CAMERA_AE_MODE_ON_EXTERNAL_FLASH,
} camera_ae_mode_t;

// OHOS_CONTROL_AF_MODE
// and OHOS_CONTROL_AF_AVAILABLE_MODES enumeration values
typedef enum camera_af_mode {
    OHOS_CAMERA_AF_MODE_OFF,
    OHOS_CAMERA_AF_MODE_AUTO,
    OHOS_CAMERA_AF_MODE_MACRO,
    OHOS_CAMERA_AF_MODE_CONTINUOUS_VIDEO,
    OHOS_CAMERA_AF_MODE_CONTINUOUS_PICTURE,
    OHOS_CAMERA_AF_MODE_EDOF,
} camera_af_mode_t;

// OHOS_CONTROL_AF_TRIGGER enumeration values
typedef enum camera_af_trigger {
    OHOS_CAMERA_AF_TRIGGER_IDLE,
    OHOS_CAMERA_AF_TRIGGER_START,
    OHOS_CAMERA_AF_TRIGGER_CANCEL,
} camera_af_trigger_t;

// OHOS_CONTROL_AF_STATE enumeration values
typedef enum camera_af_state {
    OHOS_CAMERA_AF_STATE_INACTIVE,
    OHOS_CAMERA_AF_STATE_PASSIVE_SCAN,
    OHOS_CAMERA_AF_STATE_PASSIVE_FOCUSED,
    OHOS_CAMERA_AF_STATE_ACTIVE_SCAN,
    OHOS_CAMERA_AF_STATE_FOCUSED_LOCKED,
    OHOS_CAMERA_AF_STATE_NOT_FOCUSED_LOCKED,
    OHOS_CAMERA_AF_STATE_PASSIVE_UNFOCUSED,
} camera_af_state_t;

// OHOS_CONTROL_AWB_LOCK enumeration values
typedef enum camera_awb_lock {
    OHOS_CAMERA_AWB_LOCK_OFF,
    OHOS_CAMERA_AWB_LOCK_ON,
} camera_awb_lock_t;

// OHOS_CONTROL_AWB_MODE enumeration values
typedef enum camera_awb_mode {
    OHOS_CAMERA_AWB_MODE_OFF,
    OHOS_CAMERA_AWB_MODE_AUTO,
    OHOS_CAMERA_AWB_MODE_INCANDESCENT,
    OHOS_CAMERA_AWB_MODE_FLUORESCENT,
    OHOS_CAMERA_AWB_MODE_WARM_FLUORESCENT,
    OHOS_CAMERA_AWB_MODE_DAYLIGHT,
    OHOS_CAMERA_AWB_MODE_CLOUDY_DAYLIGHT,
    OHOS_CAMERA_AWB_MODE_TWILIGHT,
    OHOS_CAMERA_AWB_MODE_SHADE,
} camera_awb_mode_t;

// OHOS_STATISTICS_FACE_DETECT_MODE
// and OHOS_STATISTICS_FACE_DETECT_SWITCH enumeration values
typedef enum camera_face_detect_mode {
    OHOS_CAMERA_FACE_DETECT_MODE_OFF,
    OHOS_CAMERA_FACE_DETECT_MODE_SIMPLE
} camera_face_detect_mode_t;

// OHOS_STATISTICS_HISTOGRAM_MODE enumeration values
typedef enum camera_histogram_mode {
    OHOS_CAMERA_HISTOGRAM_MODE_OFF,
    OHOS_CAMERA_HISTOGRAM_MODE_ON,
} camera_histogram_mode_t;

// OHOS_STREAM_AVAILABLE_FORMATS
// and OHOS_ABILITY_STREAM_AVAILABLE_BASIC_CONFIGURATIONS enumeration values
typedef enum camera_format {
    OHOS_CAMERA_FORMAT_RGBA_8888 = 1,
    OHOS_CAMERA_FORMAT_YCBCR_420_888,
    OHOS_CAMERA_FORMAT_YCRCB_420_SP,
    OHOS_CAMERA_FORMAT_JPEG,
} camera_format_t;

// OHOS_CONTROL_FOCUS_STATE enumeration values
typedef enum camera_focus_state {
    OHOS_CAMERA_FOCUS_STATE_SCAN,
    OHOS_CAMERA_FOCUS_STATE_FOCUSED,
    OHOS_CAMERA_FOCUS_STATE_UNFOCUSED,
} camera_focus_state_t;

// OHOS_CONTROL_METER_MODE and OHOS_ABILITY_METER_MODES enumeration values
typedef enum camera_meter_mode {
    OHOS_CAMERA_SPOT_METERING = 0,
    OHOS_CAMERA_REGION_METERING,
    OHOS_CAMERA_OVERALL_METERING,
} camera_meter_mode_t;

typedef enum camera_exposure_state {
    OHOS_CAMERA_EXPOSURE_STATE_SCAN,
    OHOS_CAMERA_EXPOSURE_STATE_CONVERGED,
} camera_exposure_state_t;

// OHOS_CONTROL_CAPTURE_MIRROR
// and OHOS_CONTROL_CAPTURE_MIRROR_SUPPORTED enumeration values
typedef enum camera_mirror {
    OHOS_CAMERA_MIRROR_OFF = 0,
    OHOS_CAMERA_MIRROR_ON,
} camera_mirror_t;

// OHOS_JPEG_ORIENTATION enumeration values
typedef enum camera_jpeg_orientation {
    OHOS_CAMERA_JPEG_ROTATION_0 = 0,
    OHOS_CAMERA_JPEG_ROTATION_90 = 90,
    OHOS_CAMERA_JPEG_ROTATION_180 = 180,
    OHOS_CAMERA_JPEG_ROTATION_270 = 270,
} camera_jpeg_orientation_t;

// OHOS_JPEG_QUALITY enumeration values
typedef enum camera_jpeg_quality {
    OHOS_CAMERA_JPEG_LEVEL_LOW = 0,
    OHOS_CAMERA_JPEG_LEVEL_MIDDLE,
    OHOS_CAMERA_JPEG_LEVEL_HIGH,
} camera_jpeg_quality_t;

// OHOS_ABILITY_VIDEO_STABILIZATION_MODES
// and OHOS_CONTROL_VIDEO_STABILIZATION_MODE enumeration values
typedef enum camera_video_stabilization_mode {
    OHOS_CAMERA_VIDEO_STABILIZATION_OFF = 0,
    OHOS_CAMERA_VIDEO_STABILIZATION_LOW,
    OHOS_CAMERA_VIDEO_STABILIZATION_MIDDLE,
    OHOS_CAMERA_VIDEO_STABILIZATION_HIGH,
    OHOS_CAMERA_VIDEO_STABILIZATION_AUTO,
} CameraVideoStabilizationMode;

// OHOS_ABILITY_FLASH_AVAILABLE enumeration values
typedef enum camera_flash_available {
    OHOS_CAMERA_FLASH_FALSE = 0,
    OHOS_CAMERA_FLASH_TRUE,
} CameraFlashAvailable;

// OHOS_ABILITY_MEMORY_TYPE enumeration values
typedef enum camera_memory_type_enum {
    OHOS_CAMERA_MEMORY_MMAP = 1,
    OHOS_CAMERA_MEMORY_USERPTR,
    OHOS_CAMERA_MEMORY_OVERLAY,
    OHOS_CAMERA_MEMORY_DMABUF,
} camera_memory_type_enum_t;

// OHOS_ABILITY_MUTE_MODES and OHOS_CONTROL_MUTE_MODE enumeration values
typedef enum camera_mute_mode {
    OHOS_CAMERA_MUTE_MODE_OFF,
    OHOS_CAMERA_MUTE_MODE_SOLID_COLOR_BLACK,
} camera_mute_mode_t;
#endif
