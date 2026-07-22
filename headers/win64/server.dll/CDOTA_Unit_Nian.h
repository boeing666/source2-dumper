#pragma once

class CDOTA_Unit_Nian : public CDOTA_BaseNPC_Creature /*0x0*/  // sizeof 0x1A40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    CUtlVector< NianDamageTaken_t > m_vecRecentDamage; // offset 0x1A20, size 0x18, align 8
    CHandle< CBaseEntity > m_hTail; // offset 0x1A38, size 0x4, align 4
    CHandle< CBaseEntity > m_hHorn; // offset 0x1A3C, size 0x4, align 4
};
