#pragma once

class CCitadel_Ability_SummonGangster : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1570, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CNPC_YakuzaGangster > > m_vecGangsters; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0xB0]; // offset 0x14C0
};
