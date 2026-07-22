#pragma once

class CDOTA_Ability_Elder_Titan_EarthSplitter : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 crack_width; // offset 0x6A8, size 0x4, align 4
    float32 crack_distance; // offset 0x6AC, size 0x4, align 4
    float32 speed; // offset 0x6B0, size 0x4, align 4
    float32 vision_width; // offset 0x6B4, size 0x4, align 4
    float32 crack_time; // offset 0x6B8, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x6BC, size 0xC, align 4
    char _pad_06C8[0x18]; // offset 0x6C8
};
