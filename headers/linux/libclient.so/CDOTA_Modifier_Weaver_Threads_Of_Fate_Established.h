#pragma once

class CDOTA_Modifier_Weaver_Threads_Of_Fate_Established : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 established_thread_break_distance; // offset 0x1A78, size 0x4, align 4
    float32 thread_setup_distance; // offset 0x1A7C, size 0x4, align 4
    int32 damage_per_thread_creep; // offset 0x1A80, size 0x4, align 4
    int32 damage_per_thread_hero; // offset 0x1A84, size 0x4, align 4
    float32 death_linger_duration; // offset 0x1A88, size 0x4, align 4
    float32 thread_setup_time; // offset 0x1A8C, size 0x4, align 4
    ParticleIndex_t m_nTetherParticle; // offset 0x1A90, size 0x4, align 255
    bool m_bEstablished; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    GameTime_t m_fEstablishTime; // offset 0x1A98, size 0x4, align 255
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
