#pragma once

class CDOTA_Ability_Shredder_Chakram : public CDOTABaseAbility /*0x0*/  // sizeof 0x5E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 radius; // offset 0x580, size 0x4, align 4
    float32 speed; // offset 0x584, size 0x4, align 4
    float32 pass_slow_duration; // offset 0x588, size 0x4, align 4
    int32 pass_damage; // offset 0x58C, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x590, size 0xC, align 4
    float32 m_fZCoord; // offset 0x59C, size 0x4, align 4
    bool m_bIsReturning; // offset 0x5A0, size 0x1, align 1
    char _pad_05A1[0x3]; // offset 0x5A1
    ParticleIndex_t m_nFXIndex; // offset 0x5A4, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x5A8, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x5AC, size 0x4, align 255
    int32 m_nProjectileIndex; // offset 0x5B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x5B4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hReturnHits; // offset 0x5B8, size 0x18, align 8
    char _pad_05D0[0x18]; // offset 0x5D0
};
