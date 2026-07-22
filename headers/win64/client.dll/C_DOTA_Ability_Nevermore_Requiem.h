#pragma once

class C_DOTA_Ability_Nevermore_Requiem : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 requiem_line_width_start; // offset 0x6A8, size 0x4, align 4
    float32 requiem_line_width_end; // offset 0x6AC, size 0x4, align 4
    int32 m_nCachedSouls; // offset 0x6B0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6B4, size 0x4, align 255
    int32 m_nKilleater_nLines; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesReqd; // offset 0x6C0, size 0x18, align 8
};
