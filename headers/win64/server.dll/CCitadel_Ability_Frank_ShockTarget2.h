#pragma once

class CCitadel_Ability_Frank_ShockTarget2 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16B8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1678]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x1678, size 0x18, align 8
    char _pad_1690[0x8]; // offset 0x1690
    bool m_bIsFullyCharged; // offset 0x1698, size 0x1, align 1 | MNetworkEnable
    char _pad_1699[0x7]; // offset 0x1699
    CModifierHandleBase m_hFullyChargedFXModifier; // offset 0x16A0, size 0x18, align 255
};
