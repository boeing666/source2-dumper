#pragma once

class C_DOTAWorldParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    int32 m_nType; // offset 0xC10, size 0x4, align 4
    ParticleIndex_t m_iClientEffectIndex; // offset 0xC14, size 0x4, align 255
    CUtlSymbolLarge m_szEffectName; // offset 0xC18, size 0x8, align 8
    CUtlSymbolLarge m_szTargetName; // offset 0xC20, size 0x8, align 8
    CUtlSymbolLarge m_szControlPoint; // offset 0xC28, size 0x8, align 8
    HSequence m_hOverrideSequence; // offset 0xC30, size 0x4, align 255
    char _pad_0C34[0x4]; // offset 0xC34
    CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // offset 0xC38, size 0x8, align 8
    Vector m_vModelScale; // offset 0xC40, size 0xC, align 4
    int32 m_nSkinOverride; // offset 0xC4C, size 0x4, align 4
    bool m_bDayTime; // offset 0xC50, size 0x1, align 1
    bool m_bNightTime; // offset 0xC51, size 0x1, align 1
    bool m_bShowInFow; // offset 0xC52, size 0x1, align 1
    bool m_bShowWhileDynamicWeatherActive; // offset 0xC53, size 0x1, align 1
    bool m_bAnimateDuringGameplayPause; // offset 0xC54, size 0x1, align 1
    char _pad_0C55[0x3]; // offset 0xC55
};
