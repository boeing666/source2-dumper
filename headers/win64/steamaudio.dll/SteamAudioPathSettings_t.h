#pragma once

struct SteamAudioPathSettings_t  // sizeof 0x10, align 0x4 [trivial_ctor trivial_dtor] (steamaudio) {MGetKV3ClassDefaults}
{
    int32 m_nNumVisSamples; // offset 0x0, size 0x4, align 4
    float32 m_flProbeVisRadius; // offset 0x4, size 0x4, align 4
    float32 m_flProbeVisThreshold; // offset 0x8, size 0x4, align 4
    float32 m_flProbePathRange; // offset 0xC, size 0x4, align 4
};
