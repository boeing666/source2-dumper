#pragma once

class CCitadel_Ability_SummonGangster : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1008, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CNPC_YakuzaGangster > > m_vecGangsters; // offset 0xF70, size 0x18, align 8
    char _pad_0F88[0x80]; // offset 0xF88
};
