#pragma once

struct inv_image_map_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString map_name; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyLeafChoiceProviderFn
    float32 map_rotation; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MCustomFGDMetadata MPropertyAttributeRange
    char _pad_000C[0x4]; // offset 0xC
};
