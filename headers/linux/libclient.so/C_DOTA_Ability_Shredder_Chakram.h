#pragma once

class C_DOTA_Ability_Shredder_Chakram : public C_DOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 radius; // offset 0x824, size 0x4, align 4
    float32 speed; // offset 0x828, size 0x4, align 4
    float32 pass_slow_duration; // offset 0x82C, size 0x4, align 4
    int32 pass_damage; // offset 0x830, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x834, size 0xC, align 4
    float32 m_fZCoord; // offset 0x840, size 0x4, align 4
    bool m_bIsReturning; // offset 0x844, size 0x1, align 1
    char _pad_0845[0x3]; // offset 0x845
    ParticleIndex_t m_nFXIndex; // offset 0x848, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x84C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x850, size 0x4, align 255
    int32 m_nProjectileIndex; // offset 0x854, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x858, size 0x4, align 4
    char _pad_085C[0x4]; // offset 0x85C
    CUtlVector< CHandle< C_BaseEntity > > m_hReturnHits; // offset 0x860, size 0x18, align 8
};
