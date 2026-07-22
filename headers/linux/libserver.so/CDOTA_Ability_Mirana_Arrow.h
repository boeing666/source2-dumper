#pragma once

class CDOTA_Ability_Mirana_Arrow : public CDOTABaseAbility /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CDOTABaseAbility > m_hSourceAbility; // offset 0x85C, size 0x4, align 4
    float32 scepter_radius; // offset 0x860, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x864, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x870, size 0x4, align 255
    char _pad_0874[0x4]; // offset 0x874
    CUtlVector< CHandle< CBaseEntity > >[2] hAlreadyHitList; // offset 0x878, size 0x30, align 8
    CUtlVector< CHandle< CBaseEntity > >[2] hStarfallList; // offset 0x8A8, size 0x30, align 8
    int32 m_nActiveArrow; // offset 0x8D8, size 0x4, align 4
    char _pad_08DC[0x4]; // offset 0x8DC
};
