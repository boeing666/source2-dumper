#pragma once

class CDOTA_Ability_Nevermore_Requiem : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 requiem_line_width_start; // offset 0x85C, size 0x4, align 4
    float32 requiem_line_width_end; // offset 0x860, size 0x4, align 4
    int32 m_nCachedSouls; // offset 0x864, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x868, size 0x4, align 255
    int32 m_nKilleater_nLines; // offset 0x86C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesReqd; // offset 0x870, size 0x18, align 8
};
