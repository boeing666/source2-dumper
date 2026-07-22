#pragma once

class CDOTA_Ability_Shredder_Chakram : public CDOTABaseAbility /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 radius; // offset 0x85C, size 0x4, align 4
    float32 speed; // offset 0x860, size 0x4, align 4
    float32 pass_slow_duration; // offset 0x864, size 0x4, align 4
    int32 pass_damage; // offset 0x868, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x86C, size 0xC, align 4
    float32 m_fZCoord; // offset 0x878, size 0x4, align 4
    bool m_bIsReturning; // offset 0x87C, size 0x1, align 1
    char _pad_087D[0x3]; // offset 0x87D
    ParticleIndex_t m_nFXIndex; // offset 0x880, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x884, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x888, size 0x4, align 255
    int32 m_nProjectileIndex; // offset 0x88C, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
    CUtlVector< CHandle< CBaseEntity > > m_hReturnHits; // offset 0x898, size 0x18, align 8
    char _pad_08B0[0x18]; // offset 0x8B0
};
