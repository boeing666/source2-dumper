#pragma once

class CCitadel_Ability_Frank_ShockTarget2 : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x20C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2080]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x2080, size 0x18, align 8
    char _pad_2098[0x8]; // offset 0x2098
    bool m_bIsFullyCharged; // offset 0x20A0, size 0x1, align 1
    char _pad_20A1[0x7]; // offset 0x20A1
    CModifierHandleBase m_hFullyChargedFXModifier; // offset 0x20A8, size 0x18, align 8
};
