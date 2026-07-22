#pragma once

struct CitadelModelDamageNumberSettings_t  // sizeof 0x10, align 0x4 [trivial_dtor] (client) {MModelGameData MGetKV3ClassDefaults}
{
    float32 m_flSideOffsetNear; // offset 0x0, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flSideOffsetFar; // offset 0x4, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flHeightOffsetNear; // offset 0x8, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flHeightOffsetFar; // offset 0xC, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
};
