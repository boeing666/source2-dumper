#pragma once

struct SteamAudioReverbCompressionSettings_t  // sizeof 0x8, align 0x4 [trivial_dtor] (steamaudio) {MGetKV3ClassDefaults}
{
    bool m_bEnableCompression; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flQuality; // offset 0x4, size 0x4, align 4
};
