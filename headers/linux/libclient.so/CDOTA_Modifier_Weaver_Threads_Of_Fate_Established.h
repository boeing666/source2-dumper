#pragma once

class CDOTA_Modifier_Weaver_Threads_Of_Fate_Established : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 established_thread_break_distance; // offset 0x1A58, size 0x4, align 4
    float32 thread_setup_distance; // offset 0x1A5C, size 0x4, align 4
    int32 damage_per_thread_creep; // offset 0x1A60, size 0x4, align 4
    int32 damage_per_thread_hero; // offset 0x1A64, size 0x4, align 4
    float32 death_linger_duration; // offset 0x1A68, size 0x4, align 4
    float32 thread_setup_time; // offset 0x1A6C, size 0x4, align 4
    ParticleIndex_t m_nTetherParticle; // offset 0x1A70, size 0x4, align 255
    bool m_bEstablished; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    GameTime_t m_fEstablishTime; // offset 0x1A78, size 0x4, align 255
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
