#pragma once

class CCitadel_Ability_Frank_ShockTarget2 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1E88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1E48]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x1E48, size 0x18, align 8
    char _pad_1E60[0x8]; // offset 0x1E60
    bool m_bIsFullyCharged; // offset 0x1E68, size 0x1, align 1
    char _pad_1E69[0x7]; // offset 0x1E69
    CModifierHandleBase m_hFullyChargedFXModifier; // offset 0x1E70, size 0x18, align 8
};
