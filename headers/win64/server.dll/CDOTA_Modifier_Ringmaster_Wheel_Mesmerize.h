#pragma once

class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1ABC]; // offset 0x0
    float32 wheel_stun; // offset 0x1ABC, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x1AC0, size 0x4, align 4
    float32 vision_cone; // offset 0x1AC4, size 0x4, align 4
    float32 explosion_damage; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
    CountdownTimer m_ctFuseTimer; // offset 0x1AD0, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AE8, size 0x4, align 255
    int32 m_nTimesTriggered; // offset 0x1AEC, size 0x4, align 4
};
