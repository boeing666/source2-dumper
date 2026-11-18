#pragma once

class CDOTA_Modifier_NagaSiren_SongOfTheSiren_Healing_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 m_nAffectedAllies; // offset 0x1AFC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vhAffectedHeroes; // offset 0x1B00, size 0x18, align 8
};
