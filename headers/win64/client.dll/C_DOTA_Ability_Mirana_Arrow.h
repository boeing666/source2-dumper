#pragma once

class C_DOTA_Ability_Mirana_Arrow : public C_DOTABaseAbility /*0x0*/  // sizeof 0x728, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 scepter_radius; // offset 0x6A8, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x6AC, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6B8, size 0x4, align 255
    char _pad_06BC[0x4]; // offset 0x6BC
    CUtlVector< CHandle< C_BaseEntity > >[2] hAlreadyHitList; // offset 0x6C0, size 0x30, align 8
    CUtlVector< CHandle< C_BaseEntity > >[2] hStarfallList; // offset 0x6F0, size 0x30, align 8
    int32 m_nActiveArrow; // offset 0x720, size 0x4, align 4
    char _pad_0724[0x4]; // offset 0x724
};
