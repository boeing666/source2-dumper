#pragma once

struct SteamAudioCustomDataDimensionsSettings_t  // sizeof 0x14, align 0x4 [trivial_ctor trivial_dtor] (steamaudio) {MGetKV3ClassDefaults}
{
    int32 m_nAmbisonicsOrderOutsideField; // offset 0x0, size 0x4, align 4
    int32 m_nAmbisonicsOrderInsideSizeField; // offset 0x4, size 0x4, align 4
    float32 m_flOutsideThreshold; // offset 0x8, size 0x4, align 4
    float32 m_flSizeThreshold; // offset 0xC, size 0x4, align 4
    float32 m_flInsideThreshold; // offset 0x10, size 0x4, align 4
};
