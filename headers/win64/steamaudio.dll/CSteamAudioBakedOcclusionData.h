#pragma once

class CSteamAudioBakedOcclusionData  // sizeof 0x60, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    SteamAudioCustomDataOcclusionSettings_t m_settings; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x4]; // offset 0xC
    CSteamAudioProbeData m_probes; // offset 0x10, size 0x8, align 8
    CUtlVector< float32 > m_vecPathingRatio; // offset 0x18, size 0x18, align 8
    CUtlVector< float32 > m_vecPathingDeviation; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_vecReflectionRatio; // offset 0x48, size 0x18, align 8
};
