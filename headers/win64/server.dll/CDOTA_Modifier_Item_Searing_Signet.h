#pragma once

class CDOTA_Modifier_Item_Searing_Signet : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_threshold; // offset 0x1AF8, size 0x4, align 4
    float32 burn_duration; // offset 0x1AFC, size 0x4, align 4
    float32 max_range; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
