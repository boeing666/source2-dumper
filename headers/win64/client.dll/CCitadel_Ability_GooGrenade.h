#pragma once

class CCitadel_Ability_GooGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16F8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecPuddleModifiers; // offset 0x11D8, size 0x18, align 8 | MNetworkEnable
    char _pad_11F0[0x500]; // offset 0x11F0
    GameTime_t m_LastDetonateTime; // offset 0x16F0, size 0x4, align 255
    char _pad_16F4[0x4]; // offset 0x16F4
};
