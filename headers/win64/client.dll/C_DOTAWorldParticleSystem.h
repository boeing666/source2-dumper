#pragma once

class C_DOTAWorldParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    int32 m_nType; // offset 0xBD8, size 0x4, align 4
    ParticleIndex_t m_iClientEffectIndex; // offset 0xBDC, size 0x4, align 255
    CUtlSymbolLarge m_szEffectName; // offset 0xBE0, size 0x8, align 8
    CUtlSymbolLarge m_szTargetName; // offset 0xBE8, size 0x8, align 8
    CUtlSymbolLarge m_szControlPoint; // offset 0xBF0, size 0x8, align 8
    HSequence m_hOverrideSequence; // offset 0xBF8, size 0x4, align 255
    char _pad_0BFC[0x4]; // offset 0xBFC
    CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // offset 0xC00, size 0x8, align 8
    Vector m_vModelScale; // offset 0xC08, size 0xC, align 4
    int32 m_nSkinOverride; // offset 0xC14, size 0x4, align 4
    bool m_bDayTime; // offset 0xC18, size 0x1, align 1
    bool m_bNightTime; // offset 0xC19, size 0x1, align 1
    bool m_bShowInFow; // offset 0xC1A, size 0x1, align 1
    bool m_bShowWhileDynamicWeatherActive; // offset 0xC1B, size 0x1, align 1
    bool m_bAnimateDuringGameplayPause; // offset 0xC1C, size 0x1, align 1
    char _pad_0C1D[0x3]; // offset 0xC1D
};
