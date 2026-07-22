#pragma once

struct inv_image_light_barn_t  // sizeof 0x20, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    Vector color; // offset 0x0, size 0xC, align 4 | MPropertyFriendlyName MPropertyAttributeEditor MCustomFGDMetadata
    QAngle angle; // offset 0xC, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    float32 brightness; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    float32 orbit_distance; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
};
