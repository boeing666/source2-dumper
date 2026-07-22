#pragma once

class CDOTA_Ability_Mirana_Arrow : public CDOTABaseAbility /*0x0*/  // sizeof 0x600, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CDOTABaseAbility > m_hSourceAbility; // offset 0x580, size 0x4, align 4
    float32 scepter_radius; // offset 0x584, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x588, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x594, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > >[2] hAlreadyHitList; // offset 0x598, size 0x30, align 8
    CUtlVector< CHandle< CBaseEntity > >[2] hStarfallList; // offset 0x5C8, size 0x30, align 8
    int32 m_nActiveArrow; // offset 0x5F8, size 0x4, align 4
    char _pad_05FC[0x4]; // offset 0x5FC
};
