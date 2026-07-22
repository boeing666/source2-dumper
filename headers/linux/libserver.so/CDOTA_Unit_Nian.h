#pragma once

class CDOTA_Unit_Nian : public CDOTA_BaseNPC_Creature /*0x0*/  // sizeof 0x1D20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D00]; // offset 0x0
    CUtlVector< NianDamageTaken_t > m_vecRecentDamage; // offset 0x1D00, size 0x18, align 8
    CHandle< CBaseEntity > m_hTail; // offset 0x1D18, size 0x4, align 4
    CHandle< CBaseEntity > m_hHorn; // offset 0x1D1C, size 0x4, align 4
};
