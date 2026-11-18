#pragma once

class C_DOTA_Ability_Nevermore_Requiem : public C_DOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 requiem_line_width_start; // offset 0x828, size 0x4, align 4
    float32 requiem_line_width_end; // offset 0x82C, size 0x4, align 4
    int32 m_nCachedSouls; // offset 0x830, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x834, size 0x4, align 255
    int32 m_nKilleater_nLines; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesReqd; // offset 0x840, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x858, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecReturnHitTargets; // offset 0x870, size 0x18, align 8
};
