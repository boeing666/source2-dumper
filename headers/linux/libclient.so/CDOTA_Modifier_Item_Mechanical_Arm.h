#pragma once

class CDOTA_Modifier_Item_Mechanical_Arm : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bAppliesToCreeps; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    float32 bat; // offset 0x1AFC, size 0x4, align 4
    float32 stun_duration; // offset 0x1B00, size 0x4, align 4
    int32 stun_chance; // offset 0x1B04, size 0x4, align 4
    int32 m_nAttack; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
