#pragma once

class C_DOTA_Ability_Mirana_Arrow : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 scepter_radius; // offset 0x828, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x82C, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x838, size 0x4, align 255
    char _pad_083C[0x4]; // offset 0x83C
    CUtlVector< CHandle< C_BaseEntity > >[2] hAlreadyHitList; // offset 0x840, size 0x30, align 8
    CUtlVector< CHandle< C_BaseEntity > >[2] hStarfallList; // offset 0x870, size 0x30, align 8
    int32 m_nActiveArrow; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
};
