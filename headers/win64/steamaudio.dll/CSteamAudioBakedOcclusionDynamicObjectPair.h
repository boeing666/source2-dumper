#pragma once

class CSteamAudioBakedOcclusionDynamicObjectPair  // sizeof 0x70, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sName; // offset 0x0, size 0x8, align 8
    uint32 m_nHammerIdHashA; // offset 0x8, size 0x4, align 4
    uint32 m_nHammerIdHashB; // offset 0xC, size 0x4, align 4
    CUtlVector< uint32 > m_vecPairs; // offset 0x10, size 0x18, align 8
    CUtlVector< float32 > m_vecPathingRatioResiduals; // offset 0x28, size 0x18, align 8
    CUtlVector< float32 > m_vecPathingDeviationResiduals; // offset 0x40, size 0x18, align 8
    CUtlVector< float32 > m_vecReflectionEnergyResiduals; // offset 0x58, size 0x18, align 8
};
