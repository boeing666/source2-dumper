#pragma once

class CDOTA_Modifier_Item_Force_Field : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bAppliesToCreeps; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    float32 bonus_aoe_radius; // offset 0x1AFC, size 0x4, align 4
    int32 self_armor; // offset 0x1B00, size 0x4, align 4
    int32 self_mres; // offset 0x1B04, size 0x4, align 4
};
