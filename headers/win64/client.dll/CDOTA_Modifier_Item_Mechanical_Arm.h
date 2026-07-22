#pragma once

class CDOTA_Modifier_Item_Mechanical_Arm : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bAppliesToCreeps; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    float32 bat; // offset 0x1A5C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A60, size 0x4, align 4
    int32 stun_chance; // offset 0x1A64, size 0x4, align 4
    int32 m_nAttack; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
