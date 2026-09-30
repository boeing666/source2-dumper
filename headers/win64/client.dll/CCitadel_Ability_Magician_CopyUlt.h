#pragma once

class CCitadel_Ability_Magician_CopyUlt : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x18E8]; // offset 0x0
    bool m_bHasUsedCopiedUlt; // offset 0x18E8, size 0x1, align 1
    bool m_bHasCopiedUlt; // offset 0x18E9, size 0x1, align 1
    bool m_bIsModelSwapped; // offset 0x18EA, size 0x1, align 1
    char _pad_18EB[0x1]; // offset 0x18EB
    GameTime_t m_timeSwappedModel; // offset 0x18EC, size 0x4, align 255
    CHandle< C_CitadelBaseAbility > m_pActiveCopyUltimateAbility; // offset 0x18F0, size 0x4, align 4
    HeroID_t m_nCopiedHeroID; // offset 0x18F4, size 0x4, align 255
    CUtlVector< LingeringCopiedAbility_t > m_vecLingeringCopiedAbilities; // offset 0x18F8, size 0x18, align 8
    ModelChange_t m_ModelChange; // offset 0x1910, size 0xE8, align 8
};
