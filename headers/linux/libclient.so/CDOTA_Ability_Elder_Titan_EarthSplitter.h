#pragma once

class CDOTA_Ability_Elder_Titan_EarthSplitter : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 crack_width; // offset 0x824, size 0x4, align 4
    float32 crack_distance; // offset 0x828, size 0x4, align 4
    float32 speed; // offset 0x82C, size 0x4, align 4
    float32 vision_width; // offset 0x830, size 0x4, align 4
    float32 crack_time; // offset 0x834, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x838, size 0xC, align 4
    char _pad_0844[0x14]; // offset 0x844
};
