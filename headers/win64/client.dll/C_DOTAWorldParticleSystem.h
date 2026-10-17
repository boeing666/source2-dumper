#pragma once

class C_DOTAWorldParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    int32 m_nType; // offset 0xB78, size 0x4, align 4
    ParticleIndex_t m_iClientEffectIndex; // offset 0xB7C, size 0x4, align 255
    CUtlSymbolLarge m_szEffectName; // offset 0xB80, size 0x8, align 8
    CUtlSymbolLarge m_szTargetName; // offset 0xB88, size 0x8, align 8
    CUtlSymbolLarge m_szControlPoint; // offset 0xB90, size 0x8, align 8
    HSequence m_hOverrideSequence; // offset 0xB98, size 0x4, align 255
    char _pad_0B9C[0x4]; // offset 0xB9C
    CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // offset 0xBA0, size 0x8, align 8
    Vector m_vModelScale; // offset 0xBA8, size 0xC, align 4
    int32 m_nSkinOverride; // offset 0xBB4, size 0x4, align 4
    bool m_bDayTime; // offset 0xBB8, size 0x1, align 1
    bool m_bNightTime; // offset 0xBB9, size 0x1, align 1
    bool m_bShowInFow; // offset 0xBBA, size 0x1, align 1
    bool m_bShowWhileDynamicWeatherActive; // offset 0xBBB, size 0x1, align 1
    bool m_bAnimateDuringGameplayPause; // offset 0xBBC, size 0x1, align 1
    char _pad_0BBD[0x3]; // offset 0xBBD
};
