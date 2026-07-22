#pragma once

class C_DOTA_Ability_Shredder_Chakram : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 radius; // offset 0x6A8, size 0x4, align 4
    float32 speed; // offset 0x6AC, size 0x4, align 4
    float32 pass_slow_duration; // offset 0x6B0, size 0x4, align 4
    int32 pass_damage; // offset 0x6B4, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x6B8, size 0xC, align 4
    float32 m_fZCoord; // offset 0x6C4, size 0x4, align 4
    bool m_bIsReturning; // offset 0x6C8, size 0x1, align 1
    char _pad_06C9[0x3]; // offset 0x6C9
    ParticleIndex_t m_nFXIndex; // offset 0x6CC, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x6D0, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x6D4, size 0x4, align 255
    int32 m_nProjectileIndex; // offset 0x6D8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x6DC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hReturnHits; // offset 0x6E0, size 0x18, align 8
};
