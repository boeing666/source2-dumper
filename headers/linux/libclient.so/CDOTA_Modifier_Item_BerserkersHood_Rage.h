#pragma once

class CDOTA_Modifier_Item_BerserkersHood_Rage : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 view_angle_restriction; // offset 0x1AF8, size 0x4, align 4
    int32 status_resistance; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
