#pragma once

class CSteamAudioBakedPathingData  // sizeof 0xB8, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    int32 m_nBands; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CSteamAudioProbeData m_probes; // offset 0x8, size 0x8, align 8
    CSteamAudioMovableBakedData< CSteamAudioBakedPathingData > m_movables; // offset 0x10, size 0xA8, align 8
};
