#pragma once

class CDOTA_Modifier_Morphling_Replicate : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTinyTreeWearable; // offset 0x1AA8, size 0x4, align 4
    float32 m_flBaseAttackRange; // offset 0x1AAC, size 0x4, align 4
    float32 m_flBaseMovementSpeed; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlSymbolLarge m_iszModelName; // offset 0x1AB8, size 0x8, align 8
    CUtlSymbolLarge m_iszProjectileName; // offset 0x1AC0, size 0x8, align 8
    HeroFacetKey_t m_nFacetKey; // offset 0x1AC8, size 0x8, align 255
    CUtlSymbolLarge m_iszOriginalModel; // offset 0x1AD0, size 0x8, align 8
    HeroID_t m_nCopiedHeroID; // offset 0x1AD8, size 0x4, align 255
    float32 m_fOriginalModelScale; // offset 0x1ADC, size 0x4, align 4
    CUtlVector< CEconItemView* > m_vecOriginalItems; // offset 0x1AE0, size 0x18, align 8
    char _pad_1AF8[0x30]; // offset 0x1AF8
    float32 m_flOriginalStr; // offset 0x1B28, size 0x4, align 4
    float32 m_flOriginalAgi; // offset 0x1B2C, size 0x4, align 4
    float32 m_flOriginalInt; // offset 0x1B30, size 0x4, align 4
    int32 m_iOriginalAttackCapability; // offset 0x1B34, size 0x4, align 4
    float32 m_flOriginalHealthPercentage; // offset 0x1B38, size 0x4, align 4
    float32 m_flOriginalManaPercentage; // offset 0x1B3C, size 0x4, align 4
};
