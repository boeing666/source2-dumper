#pragma once

class CCitadel_Ability_GooGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecPuddleModifiers; // offset 0xF70, size 0x18, align 8 | MNetworkEnable
    char _pad_0F88[0x500]; // offset 0xF88
    GameTime_t m_LastDetonateTime; // offset 0x1488, size 0x4, align 255
    char _pad_148C[0x4]; // offset 0x148C
};
