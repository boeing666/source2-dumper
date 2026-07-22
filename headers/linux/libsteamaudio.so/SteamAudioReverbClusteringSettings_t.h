#pragma once

struct SteamAudioReverbClusteringSettings_t  // sizeof 0xC, align 0x4 [trivial_ctor trivial_dtor] (steamaudio) {MGetKV3ClassDefaults}
{
    bool m_bEnableClustering; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    int32 m_nCubeMapResolution; // offset 0x4, size 0x4, align 4
    float32 m_flDepthThreshold; // offset 0x8, size 0x4, align 4
};
