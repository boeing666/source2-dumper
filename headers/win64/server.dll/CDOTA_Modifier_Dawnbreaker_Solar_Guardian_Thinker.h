#pragma once

class CDOTA_Modifier_Dawnbreaker_Solar_Guardian_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t flTimeSinceLastPulse; // offset 0x1AA8, size 0x4, align 255
    float32 pulse_interval; // offset 0x1AAC, size 0x4, align 4
    float32 flEffectRadius; // offset 0x1AB0, size 0x4, align 4
    int32 base_damage; // offset 0x1AB4, size 0x4, align 4
    int32 base_heal; // offset 0x1AB8, size 0x4, align 4
    int32 effectiveness_pct; // offset 0x1ABC, size 0x4, align 4
    ParticleIndex_t m_nThinkerFXIndex; // offset 0x1AC0, size 0x4, align 255
    CDOTA_BuffParticle m_ThinkerFXBuffParticle; // offset 0x1AC4, size 0xC, align 255
    bool bLanded; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x7]; // offset 0x1AD1
};
