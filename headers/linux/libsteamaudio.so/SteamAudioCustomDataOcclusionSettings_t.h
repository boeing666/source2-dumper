#pragma once

struct SteamAudioCustomDataOcclusionSettings_t  // sizeof 0xC, align 0x4 [trivial_ctor trivial_dtor] (steamaudio) {MGetKV3ClassDefaults}
{
    bool m_bEnablePathing; // offset 0x0, size 0x1, align 1
    bool m_bEnableReflections; // offset 0x1, size 0x1, align 1
    char _pad_0002[0x2]; // offset 0x2
    int32 m_nReflectionRays; // offset 0x4, size 0x4, align 4
    int32 m_nReflectionBounces; // offset 0x8, size 0x4, align 4
};
