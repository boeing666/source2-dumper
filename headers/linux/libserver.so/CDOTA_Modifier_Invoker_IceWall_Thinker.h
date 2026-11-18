#pragma once

class CDOTA_Modifier_Invoker_IceWall_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_per_second; // offset 0x1AF8, size 0x4, align 4
    Vector m_vWallDirection; // offset 0x1AFC, size 0xC, align 4
    VectorWS m_vWallStart; // offset 0x1B08, size 0xC, align 4
    float32 wall_total_length; // offset 0x1B14, size 0x4, align 4
    float32 wall_width; // offset 0x1B18, size 0x4, align 4
    float32 slow_duration; // offset 0x1B1C, size 0x4, align 4
    int32 slow; // offset 0x1B20, size 0x4, align 4
    float32 root_damage; // offset 0x1B24, size 0x4, align 4
    float32 root_duration; // offset 0x1B28, size 0x4, align 4
    float32 tick_interval; // offset 0x1B2C, size 0x4, align 4
    bool m_bGrantedGem; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x3]; // offset 0x1B31
    ParticleIndex_t m_nParticleIndex; // offset 0x1B34, size 0x4, align 255
    ParticleIndex_t m_nParticleIndex2; // offset 0x1B38, size 0x4, align 255
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
