#pragma once

class CCitadel_Ability_Frank_ShockTarget2 : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1920, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x18E0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x18E0, size 0x18, align 8
    char _pad_18F8[0x8]; // offset 0x18F8
    bool m_bIsFullyCharged; // offset 0x1900, size 0x1, align 1 | MNetworkEnable
    char _pad_1901[0x7]; // offset 0x1901
    CModifierHandleBase m_hFullyChargedFXModifier; // offset 0x1908, size 0x18, align 255
};
