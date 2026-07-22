#pragma once

class CDOTA_Ability_Invoker_IceWall : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    VectorWS m_vEndPosition; // offset 0x590, size 0xC, align 4
    int32 num_wall_elements; // offset 0x59C, size 0x4, align 4
    float32 wall_element_spacing; // offset 0x5A0, size 0x4, align 4
    float32 wall_element_radius; // offset 0x5A4, size 0x4, align 4
    int32 vector_cast_range; // offset 0x5A8, size 0x4, align 4
    int32 slow; // offset 0x5AC, size 0x4, align 4
    float32 damage_per_second; // offset 0x5B0, size 0x4, align 4
    float32 duration; // offset 0x5B4, size 0x4, align 4
    float32 slow_duration; // offset 0x5B8, size 0x4, align 4
    float32 root_damage; // offset 0x5BC, size 0x4, align 4
    float32 root_duration; // offset 0x5C0, size 0x4, align 4
    float32 tick_interval; // offset 0x5C4, size 0x4, align 4
    float32 wall_total_length; // offset 0x5C8, size 0x4, align 4
    float32 wall_width; // offset 0x5CC, size 0x4, align 4
};
