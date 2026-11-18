#pragma once

class CSteamAudioBakedOcclusionData  // sizeof 0x98, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    SteamAudioCustomDataOcclusionSettings_t m_settings; // offset 0x0, size 0x14, align 4
    char _pad_0014[0x4]; // offset 0x14
    CSteamAudioProbeData m_probes; // offset 0x18, size 0x8, align 8
    CUtlVector< float32 > m_vecPathingRatio; // offset 0x20, size 0x18, align 8
    CUtlVector< float32 > m_vecPathingDeviation; // offset 0x38, size 0x18, align 8
    CUtlVector< float32 > m_vecReflectionEnergy; // offset 0x50, size 0x18, align 8
    CUtlVector< CSteamAudioBakedOcclusionDynamicObject > m_vecDynamicObjects; // offset 0x68, size 0x18, align 8
    CUtlVector< CSteamAudioBakedOcclusionDynamicObjectPair > m_vecDynamicObjectPairs; // offset 0x80, size 0x18, align 8
};
