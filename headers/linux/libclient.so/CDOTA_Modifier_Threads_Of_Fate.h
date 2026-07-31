#pragma once

class CDOTA_Modifier_Threads_Of_Fate : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 thread_setup_distance; // offset 0x1A78, size 0x4, align 4
    float32 established_thread_duration; // offset 0x1A7C, size 0x4, align 4
    float32 thread_setup_time; // offset 0x1A80, size 0x4, align 4
    int32 damage_per_thread_creep; // offset 0x1A84, size 0x4, align 4
    int32 damage_per_thread_hero; // offset 0x1A88, size 0x4, align 4
    float32 death_linger_duration; // offset 0x1A8C, size 0x4, align 4
};
