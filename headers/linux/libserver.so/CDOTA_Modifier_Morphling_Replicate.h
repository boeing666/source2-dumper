#pragma once

class CDOTA_Modifier_Morphling_Replicate : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTinyTreeWearable; // offset 0x1A78, size 0x4, align 4
    float32 m_flBaseAttackRange; // offset 0x1A7C, size 0x4, align 4
    float32 m_flBaseMovementSpeed; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlSymbolLarge m_iszModelName; // offset 0x1A88, size 0x8, align 8
    CUtlSymbolLarge m_iszProjectileName; // offset 0x1A90, size 0x8, align 8
    HeroFacetKey_t m_nFacetKey; // offset 0x1A98, size 0x8, align 255
    CUtlSymbolLarge m_iszOriginalModel; // offset 0x1AA0, size 0x8, align 8
    HeroID_t m_nCopiedHeroID; // offset 0x1AA8, size 0x4, align 255
    float32 m_fOriginalModelScale; // offset 0x1AAC, size 0x4, align 4
    CUtlVector< CEconItemView* > m_vecOriginalItems; // offset 0x1AB0, size 0x18, align 8
    char _pad_1AC8[0x30]; // offset 0x1AC8
    float32 m_flOriginalStr; // offset 0x1AF8, size 0x4, align 4
    float32 m_flOriginalAgi; // offset 0x1AFC, size 0x4, align 4
    float32 m_flOriginalInt; // offset 0x1B00, size 0x4, align 4
    int32 m_iOriginalAttackCapability; // offset 0x1B04, size 0x4, align 4
    float32 m_flOriginalHealthPercentage; // offset 0x1B08, size 0x4, align 4
    float32 m_flOriginalManaPercentage; // offset 0x1B0C, size 0x4, align 4
};
