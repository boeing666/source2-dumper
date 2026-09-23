#pragma once

struct inv_image_camera_t  // sizeof 0x38, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    QAngle angle; // offset 0x0, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    float32 fov_h; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    float32 fov_v; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    float32 znear; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    float32 zfar; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    Vector target; // offset 0x1C, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    Vector target_nudge; // offset 0x28, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    float32 orbit_distance; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
};
