#pragma once

struct SteamAudioReverbSettings_t  // sizeof 0x14, align 0x4 [trivial_dtor] (steamaudio) {MGetKV3ClassDefaults}
{
    int32 m_nNumRays; // offset 0x0, size 0x4, align 4
    int32 m_nNumBounces; // offset 0x4, size 0x4, align 4
    float32 m_flIRDuration; // offset 0x8, size 0x4, align 4
    int32 m_nAmbisonicsOrder; // offset 0xC, size 0x4, align 4
    bool m_bExportScene; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
};
