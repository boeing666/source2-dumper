#pragma once

class CDOTA_Modifier_Invoker_IceWall_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 damage_per_second; // offset 0x1A58, size 0x4, align 4
    Vector m_vWallDirection; // offset 0x1A5C, size 0xC, align 4
    VectorWS m_vWallStart; // offset 0x1A68, size 0xC, align 4
    float32 wall_total_length; // offset 0x1A74, size 0x4, align 4
    float32 wall_width; // offset 0x1A78, size 0x4, align 4
    float32 slow_duration; // offset 0x1A7C, size 0x4, align 4
    int32 slow; // offset 0x1A80, size 0x4, align 4
    float32 root_damage; // offset 0x1A84, size 0x4, align 4
    float32 root_duration; // offset 0x1A88, size 0x4, align 4
    float32 tick_interval; // offset 0x1A8C, size 0x4, align 4
};
