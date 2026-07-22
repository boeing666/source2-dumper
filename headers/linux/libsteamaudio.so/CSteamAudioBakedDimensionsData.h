#pragma once

class CSteamAudioBakedDimensionsData  // sizeof 0x128, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    SteamAudioCustomDataDimensionsSettings_t m_settings; // offset 0x0, size 0x14, align 4
    char _pad_0014[0x4]; // offset 0x14
    CSteamAudioProbeData m_probes; // offset 0x18, size 0x8, align 8
    CUtlVector< float32 > m_vecInOut; // offset 0x20, size 0x18, align 8
    CUtlVector< float32 > m_vecSize; // offset 0x38, size 0x18, align 8
    CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField; // offset 0x50, size 0x18, align 8
    CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField; // offset 0x68, size 0x18, align 8
    CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables; // offset 0x80, size 0xA8, align 8
};
