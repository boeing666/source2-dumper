#pragma once

class C_DOTA_Ability_Mirana_Arrow : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 scepter_radius; // offset 0x824, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x828, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x834, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > >[2] hAlreadyHitList; // offset 0x838, size 0x30, align 8
    CUtlVector< CHandle< C_BaseEntity > >[2] hStarfallList; // offset 0x868, size 0x30, align 8
    int32 m_nActiveArrow; // offset 0x898, size 0x4, align 4
    char _pad_089C[0x4]; // offset 0x89C
};
