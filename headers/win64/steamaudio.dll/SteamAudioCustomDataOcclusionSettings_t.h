#pragma once

struct SteamAudioCustomDataOcclusionSettings_t  // sizeof 0x14, align 0x4 [trivial_dtor] (steamaudio) {MGetKV3ClassDefaults}
{
    bool m_bEnablePathing; // offset 0x0, size 0x1, align 1
    bool m_bEnableReflections; // offset 0x1, size 0x1, align 1
    char _pad_0002[0x2]; // offset 0x2
    int32 m_nReflectionRays; // offset 0x4, size 0x4, align 4
    int32 m_nReflectionBounces; // offset 0x8, size 0x4, align 4
    int32 m_nSpatialFilterMode; // offset 0xC, size 0x4, align 4
    float32 m_flSpatialFilterRadiusFactor; // offset 0x10, size 0x4, align 4
};
