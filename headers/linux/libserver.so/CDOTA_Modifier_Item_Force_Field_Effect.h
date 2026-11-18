#pragma once

class CDOTA_Modifier_Item_Force_Field_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_aoe_armor; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_aoe_ms; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_aoe_mres; // offset 0x1B00, size 0x4, align 4
    float32 self_mres; // offset 0x1B04, size 0x4, align 4
    float32 self_armor; // offset 0x1B08, size 0x4, align 4
    int32 active_reflection_pct; // offset 0x1B0C, size 0x4, align 4
};
