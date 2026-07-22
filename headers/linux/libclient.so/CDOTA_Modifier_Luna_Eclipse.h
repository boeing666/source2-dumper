#pragma once

class CDOTA_Modifier_Luna_Eclipse : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    float32 radius; // offset 0x1A5C, size 0x4, align 4
    int32 beams; // offset 0x1A60, size 0x4, align 4
    int32 hit_count; // offset 0x1A64, size 0x4, align 4
    int32 m_iBeamDamage; // offset 0x1A68, size 0x4, align 4
    float32 beam_interval; // offset 0x1A6C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A70, size 0x4, align 4
    VectorWS vPosition; // offset 0x1A74, size 0xC, align 4
    bool bAreaTarget; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    int32 m_iTickCount; // offset 0x1A84, size 0x4, align 4
    ParticleIndex_t m_nMoonlightFXIndex; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CUtlVector< CHandle< C_BaseEntity > > m_HitTargets; // offset 0x1A90, size 0x18, align 8
    float32 m_flBeamStun; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
