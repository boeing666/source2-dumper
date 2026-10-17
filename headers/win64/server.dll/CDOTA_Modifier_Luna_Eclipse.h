#pragma once

class CDOTA_Modifier_Luna_Eclipse : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    float32 radius; // offset 0x1AAC, size 0x4, align 4
    int32 beams; // offset 0x1AB0, size 0x4, align 4
    int32 hit_count; // offset 0x1AB4, size 0x4, align 4
    int32 m_iBeamDamage; // offset 0x1AB8, size 0x4, align 4
    float32 beam_interval; // offset 0x1ABC, size 0x4, align 4
    float32 stun_duration; // offset 0x1AC0, size 0x4, align 4
    VectorWS vPosition; // offset 0x1AC4, size 0xC, align 4
    bool bAreaTarget; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    int32 m_iTickCount; // offset 0x1AD4, size 0x4, align 4
    ParticleIndex_t m_nMoonlightFXIndex; // offset 0x1AD8, size 0x4, align 255
    char _pad_1ADC[0x4]; // offset 0x1ADC
    CUtlVector< CHandle< CBaseEntity > > m_HitTargets; // offset 0x1AE0, size 0x18, align 8
    float32 m_flBeamStun; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
