#pragma once

class CDOTAFightingGameHeroDefinition  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    HeroID_t m_nHeroID; // offset 0x0, size 0x4, align 255
    float32 m_flHeroWidth; // offset 0x4, size 0x4, align 4
    CUtlString m_pszBasicSwingSound; // offset 0x8, size 0x8, align 8
    CUtlString m_pszBasicHitSound; // offset 0x10, size 0x8, align 8
    int32 m_nVictoryDuration; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlString m_pszHeroNameVO; // offset 0x20, size 0x8, align 8
    CUtlVector< CDOTAFightingGameHeroStyleDefinition > m_vecHeroStyles; // offset 0x28, size 0x18, align 8
    CUtlVector< CDOTAFightingGameActionDefinition > m_vecActionDefinitions; // offset 0x40, size 0x18, align 8
    float32 m_HeroPick_HeightOffset; // offset 0x58, size 0x4, align 4
    float32 m_HeroPick_XOffset_Right; // offset 0x5C, size 0x4, align 4
    float32 m_HeroPick_Angle_Right; // offset 0x60, size 0x4, align 4
    float32 m_HeroPick_XOffset_Left; // offset 0x64, size 0x4, align 4
    float32 m_HeroPick_Angle_Left; // offset 0x68, size 0x4, align 4
    float32 m_HeroPick_Scale; // offset 0x6C, size 0x4, align 4
};
