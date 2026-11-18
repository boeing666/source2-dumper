#pragma once

class CDOTA_Modifier_Weaver_Threads_Of_Fate_Established : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 established_thread_break_distance; // offset 0x1AF8, size 0x4, align 4
    float32 established_thread_duration; // offset 0x1AFC, size 0x4, align 4
    float32 thread_setup_distance; // offset 0x1B00, size 0x4, align 4
    int32 damage_per_thread_creep; // offset 0x1B04, size 0x4, align 4
    int32 damage_per_thread_hero; // offset 0x1B08, size 0x4, align 4
    float32 death_linger_duration; // offset 0x1B0C, size 0x4, align 4
    float32 thread_setup_time; // offset 0x1B10, size 0x4, align 4
    ParticleIndex_t m_nTetherParticle; // offset 0x1B14, size 0x4, align 255
    bool m_bEstablished; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    GameTime_t m_fEstablishTime; // offset 0x1B1C, size 0x4, align 255
    GameTime_t m_fNextSlowTime; // offset 0x1B20, size 0x4, align 255
    char _pad_1B24[0x4]; // offset 0x1B24
};
