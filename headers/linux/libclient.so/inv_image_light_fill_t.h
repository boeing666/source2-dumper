#pragma once

struct inv_image_light_fill_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    Vector color; // offset 0x0, size 0xC, align 4 | MPropertyFriendlyName MPropertyAttributeEditor MCustomFGDMetadata
    QAngle angle; // offset 0xC, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    float32 brightness; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
};
