#pragma once

class C_DOTAWorldParticleSystem : public C_BaseModelEntity /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    int32 m_nType; // offset 0xA88, size 0x4, align 4
    ParticleIndex_t m_iClientEffectIndex; // offset 0xA8C, size 0x4, align 255
    CUtlSymbolLarge m_szEffectName; // offset 0xA90, size 0x8, align 8
    CUtlSymbolLarge m_szTargetName; // offset 0xA98, size 0x8, align 8
    CUtlSymbolLarge m_szControlPoint; // offset 0xAA0, size 0x8, align 8
    HSequence m_hOverrideSequence; // offset 0xAA8, size 0x4, align 255
    char _pad_0AAC[0x4]; // offset 0xAAC
    CStrongHandle< InfoForResourceTypeCModel > m_hOverrideModel; // offset 0xAB0, size 0x8, align 8
    Vector m_vModelScale; // offset 0xAB8, size 0xC, align 4
    int32 m_nSkinOverride; // offset 0xAC4, size 0x4, align 4
    bool m_bDayTime; // offset 0xAC8, size 0x1, align 1
    bool m_bNightTime; // offset 0xAC9, size 0x1, align 1
    bool m_bShowInFow; // offset 0xACA, size 0x1, align 1
    bool m_bShowWhileDynamicWeatherActive; // offset 0xACB, size 0x1, align 1
    bool m_bAnimateDuringGameplayPause; // offset 0xACC, size 0x1, align 1
    char _pad_0ACD[0x3]; // offset 0xACD
};
