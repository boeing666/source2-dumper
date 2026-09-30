#pragma once

class CSteamAudioBakedDimensionsData  // sizeof 0x138, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    SteamAudioCustomDataDimensionsSettings_t m_settings; // offset 0x0, size 0x28, align 4
    CSteamAudioProbeData m_probes; // offset 0x28, size 0x8, align 8
    CUtlVector< float32 > m_vecInOut; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_vecSize; // offset 0x48, size 0x18, align 8
    CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField; // offset 0x60, size 0x18, align 8
    CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField; // offset 0x78, size 0x18, align 8
    CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables; // offset 0x90, size 0xA8, align 8
};
