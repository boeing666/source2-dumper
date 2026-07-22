#pragma once

class CDOTA_Modifier_Morphling_Replicate : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTinyTreeWearable; // offset 0x1A58, size 0x4, align 4
    float32 m_flBaseAttackRange; // offset 0x1A5C, size 0x4, align 4
    float32 m_flBaseMovementSpeed; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CUtlSymbolLarge m_iszModelName; // offset 0x1A68, size 0x8, align 8
    CUtlSymbolLarge m_iszProjectileName; // offset 0x1A70, size 0x8, align 8
    HeroFacetKey_t m_nFacetKey; // offset 0x1A78, size 0x8, align 255
    CUtlSymbolLarge m_iszOriginalModel; // offset 0x1A80, size 0x8, align 8
    HeroID_t m_nCopiedHeroID; // offset 0x1A88, size 0x4, align 255
    float32 m_fOriginalModelScale; // offset 0x1A8C, size 0x4, align 4
    CUtlVector< C_EconItemView* > m_vecOriginalItems; // offset 0x1A90, size 0x18, align 8
    char _pad_1AA8[0x30]; // offset 0x1AA8
    float32 m_flOriginalStr; // offset 0x1AD8, size 0x4, align 4
    float32 m_flOriginalAgi; // offset 0x1ADC, size 0x4, align 4
    float32 m_flOriginalInt; // offset 0x1AE0, size 0x4, align 4
    int32 m_iOriginalAttackCapability; // offset 0x1AE4, size 0x4, align 4
    float32 m_flOriginalHealthPercentage; // offset 0x1AE8, size 0x4, align 4
    float32 m_flOriginalManaPercentage; // offset 0x1AEC, size 0x4, align 4
};
