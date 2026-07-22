#pragma once

struct inv_image_camera_t  // sizeof 0x34, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    QAngle angle; // offset 0x0, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    float32 fov; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    float32 znear; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    float32 zfar; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    Vector target; // offset 0x18, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    Vector target_nudge; // offset 0x24, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    float32 orbit_distance; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
};
