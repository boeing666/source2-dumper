#pragma once

class CSteamAudioBakedOcclusionDynamicObject  // sizeof 0x78, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sName; // offset 0x0, size 0x8, align 8
    CUtlString m_sHammerId; // offset 0x8, size 0x8, align 8
    uint32 m_nHammerIdHash; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlVector< uint32 > m_vecPairs; // offset 0x18, size 0x18, align 8
    CUtlVector< float32 > m_vecPathingRatioDeltas; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_vecPathingDeviationDeltas; // offset 0x48, size 0x18, align 8
    CUtlVector< float32 > m_vecReflectionEnergyDeltas; // offset 0x60, size 0x18, align 8
};
