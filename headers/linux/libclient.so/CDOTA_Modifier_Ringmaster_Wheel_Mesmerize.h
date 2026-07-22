#pragma once

class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A6C]; // offset 0x0
    float32 wheel_stun; // offset 0x1A6C, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x1A70, size 0x4, align 4
    float32 vision_cone; // offset 0x1A74, size 0x4, align 4
    float32 explosion_damage; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CountdownTimer m_ctFuseTimer; // offset 0x1A80, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1A98, size 0x4, align 255
    int32 m_nTimesTriggered; // offset 0x1A9C, size 0x4, align 4
};
