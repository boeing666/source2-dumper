#pragma once

class C_DOTAWorldParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    int32 m_nType; // offset 0xD00, size 0x4, align 4
    ParticleIndex_t m_iClientEffectIndex; // offset 0xD04, size 0x4, align 255
    CUtlSymbolLarge m_szEffectName; // offset 0xD08, size 0x8, align 8
    CUtlSymbolLarge m_szTargetName; // offset 0xD10, size 0x8, align 8
    CUtlSymbolLarge m_szControlPoint; // offset 0xD18, size 0x8, align 8
    HSequence m_hOverrideSequence; // offset 0xD20, size 0x4, align 255
    char _pad_0D24[0x4]; // offset 0xD24
    CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // offset 0xD28, size 0x8, align 8
    Vector m_vModelScale; // offset 0xD30, size 0xC, align 4
    int32 m_nSkinOverride; // offset 0xD3C, size 0x4, align 4
    bool m_bDayTime; // offset 0xD40, size 0x1, align 1
    bool m_bNightTime; // offset 0xD41, size 0x1, align 1
    bool m_bShowInFow; // offset 0xD42, size 0x1, align 1
    bool m_bShowWhileDynamicWeatherActive; // offset 0xD43, size 0x1, align 1
    bool m_bAnimateDuringGameplayPause; // offset 0xD44, size 0x1, align 1
    char _pad_0D45[0x3]; // offset 0xD45
};
