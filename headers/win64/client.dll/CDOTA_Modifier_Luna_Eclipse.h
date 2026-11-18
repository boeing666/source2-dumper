#pragma once

class CDOTA_Modifier_Luna_Eclipse : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    int32 beams; // offset 0x1B00, size 0x4, align 4
    int32 hit_count; // offset 0x1B04, size 0x4, align 4
    int32 m_iBeamDamage; // offset 0x1B08, size 0x4, align 4
    float32 beam_interval; // offset 0x1B0C, size 0x4, align 4
    float32 stun_duration; // offset 0x1B10, size 0x4, align 4
    VectorWS vPosition; // offset 0x1B14, size 0xC, align 4
    bool bAreaTarget; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    int32 m_iTickCount; // offset 0x1B24, size 0x4, align 4
    ParticleIndex_t m_nMoonlightFXIndex; // offset 0x1B28, size 0x4, align 255
    char _pad_1B2C[0x4]; // offset 0x1B2C
    CUtlVector< CHandle< C_BaseEntity > > m_HitTargets; // offset 0x1B30, size 0x18, align 8
    float32 m_flBeamStun; // offset 0x1B48, size 0x4, align 4
    char _pad_1B4C[0x4]; // offset 0x1B4C
};
