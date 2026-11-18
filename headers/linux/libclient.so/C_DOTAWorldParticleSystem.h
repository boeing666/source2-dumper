#pragma once

class C_DOTAWorldParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0xDB0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    int32 m_nType; // offset 0xD68, size 0x4, align 4
    ParticleIndex_t m_iClientEffectIndex; // offset 0xD6C, size 0x4, align 255
    CUtlSymbolLarge m_szEffectName; // offset 0xD70, size 0x8, align 8
    CUtlSymbolLarge m_szTargetName; // offset 0xD78, size 0x8, align 8
    CUtlSymbolLarge m_szControlPoint; // offset 0xD80, size 0x8, align 8
    HSequence m_hOverrideSequence; // offset 0xD88, size 0x4, align 255
    char _pad_0D8C[0x4]; // offset 0xD8C
    CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // offset 0xD90, size 0x8, align 8
    Vector m_vModelScale; // offset 0xD98, size 0xC, align 4
    int32 m_nSkinOverride; // offset 0xDA4, size 0x4, align 4
    bool m_bDayTime; // offset 0xDA8, size 0x1, align 1
    bool m_bNightTime; // offset 0xDA9, size 0x1, align 1
    bool m_bShowInFow; // offset 0xDAA, size 0x1, align 1
    bool m_bShowWhileDynamicWeatherActive; // offset 0xDAB, size 0x1, align 1
    bool m_bAnimateDuringGameplayPause; // offset 0xDAC, size 0x1, align 1
    char _pad_0DAD[0x3]; // offset 0xDAD
};
