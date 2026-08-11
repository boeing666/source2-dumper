#pragma once

class CDOTA_Modifier_Item_Mechanical_Arm : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bAppliesToCreeps; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    float32 bat; // offset 0x1A7C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A80, size 0x4, align 4
    int32 stun_chance; // offset 0x1A84, size 0x4, align 4
    int32 m_nAttack; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
