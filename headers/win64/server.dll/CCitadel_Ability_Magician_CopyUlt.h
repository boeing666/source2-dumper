#pragma once

class CCitadel_Ability_Magician_CopyUlt : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x16B0]; // offset 0x0
    bool m_bHasUsedCopiedUlt; // offset 0x16B0, size 0x1, align 1
    bool m_bHasCopiedUlt; // offset 0x16B1, size 0x1, align 1
    bool m_bIsModelSwapped; // offset 0x16B2, size 0x1, align 1
    char _pad_16B3[0x1]; // offset 0x16B3
    GameTime_t m_timeSwappedModel; // offset 0x16B4, size 0x4, align 255
    CHandle< CCitadelBaseAbility > m_pActiveCopyUltimateAbility; // offset 0x16B8, size 0x4, align 4
    HeroID_t m_nCopiedHeroID; // offset 0x16BC, size 0x4, align 255
    CUtlVector< LingeringCopiedAbility_t > m_vecLingeringCopiedAbilities; // offset 0x16C0, size 0x18, align 8
    ModelChange_t m_ModelChange; // offset 0x16D8, size 0xE8, align 8
    char _pad_17C0[0x28]; // offset 0x17C0
};
