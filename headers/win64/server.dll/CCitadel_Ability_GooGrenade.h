#pragma once

class CCitadel_Ability_GooGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecPuddleModifiers; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x6E0]; // offset 0x14C0
    GameTime_t m_LastDetonateTime; // offset 0x1BA0, size 0x4, align 255
    char _pad_1BA4[0x4]; // offset 0x1BA4
};
