#pragma once

class CDOTA_Modifier_NagaSiren_SongOfTheSiren_Healing_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    int32 m_nAffectedAllies; // offset 0x1A5C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vhAffectedHeroes; // offset 0x1A60, size 0x18, align 8
};
