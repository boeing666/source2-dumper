#pragma once

class CDOTA_Modifier_Invoker_IceWall_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage_per_second; // offset 0x1A78, size 0x4, align 4
    Vector m_vWallDirection; // offset 0x1A7C, size 0xC, align 4
    VectorWS m_vWallStart; // offset 0x1A88, size 0xC, align 4
    float32 wall_total_length; // offset 0x1A94, size 0x4, align 4
    float32 wall_width; // offset 0x1A98, size 0x4, align 4
    float32 slow_duration; // offset 0x1A9C, size 0x4, align 4
    int32 slow; // offset 0x1AA0, size 0x4, align 4
    float32 root_damage; // offset 0x1AA4, size 0x4, align 4
    float32 root_duration; // offset 0x1AA8, size 0x4, align 4
    float32 tick_interval; // offset 0x1AAC, size 0x4, align 4
    bool m_bGrantedGem; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    ParticleIndex_t m_nParticleIndex; // offset 0x1AB4, size 0x4, align 255
    ParticleIndex_t m_nParticleIndex2; // offset 0x1AB8, size 0x4, align 255
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
