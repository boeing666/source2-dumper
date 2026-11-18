#pragma once

class CDOTA_Modifier_Morphling_Replicate : public CDOTA_Buff /*0x0*/  // sizeof 0x1B90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTinyTreeWearable; // offset 0x1AF8, size 0x4, align 4
    float32 m_flBaseAttackRange; // offset 0x1AFC, size 0x4, align 4
    float32 m_flBaseMovementSpeed; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlSymbolLarge m_iszModelName; // offset 0x1B08, size 0x8, align 8
    CUtlSymbolLarge m_iszProjectileName; // offset 0x1B10, size 0x8, align 8
    HeroFacetKey_t m_nFacetKey; // offset 0x1B18, size 0x8, align 255
    CUtlSymbolLarge m_iszOriginalModel; // offset 0x1B20, size 0x8, align 8
    HeroID_t m_nCopiedHeroID; // offset 0x1B28, size 0x4, align 255
    float32 m_fOriginalModelScale; // offset 0x1B2C, size 0x4, align 4
    CUtlVector< C_EconItemView* > m_vecOriginalItems; // offset 0x1B30, size 0x18, align 8
    char _pad_1B48[0x30]; // offset 0x1B48
    float32 m_flOriginalStr; // offset 0x1B78, size 0x4, align 4
    float32 m_flOriginalAgi; // offset 0x1B7C, size 0x4, align 4
    float32 m_flOriginalInt; // offset 0x1B80, size 0x4, align 4
    int32 m_iOriginalAttackCapability; // offset 0x1B84, size 0x4, align 4
    float32 m_flOriginalHealthPercentage; // offset 0x1B88, size 0x4, align 4
    float32 m_flOriginalManaPercentage; // offset 0x1B8C, size 0x4, align 4
};
