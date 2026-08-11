#pragma once

class CDOTA_Ability_Elder_Titan_EarthSplitter : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 crack_width; // offset 0x85C, size 0x4, align 4
    float32 crack_distance; // offset 0x860, size 0x4, align 4
    float32 speed; // offset 0x864, size 0x4, align 4
    float32 vision_width; // offset 0x868, size 0x4, align 4
    float32 crack_time; // offset 0x86C, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x870, size 0xC, align 4
    char _pad_087C[0x14]; // offset 0x87C
};
