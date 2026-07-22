#pragma once

struct inv_image_item_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    Vector position; // offset 0x0, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    QAngle angle; // offset 0xC, size 0xC, align 4 | MPropertyFriendlyName MCustomFGDMetadata
    CUtlString pose_sequence; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName MCustomFGDMetadata
};
