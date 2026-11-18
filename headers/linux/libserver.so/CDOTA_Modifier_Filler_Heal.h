#pragma once

class CDOTA_Modifier_Filler_Heal : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 hp_heal; // offset 0x1AF8, size 0x4, align 4
    int32 mp_heal; // offset 0x1AFC, size 0x4, align 4
    int32 hp_heal_growth; // offset 0x1B00, size 0x4, align 4
    float32 mp_heal_growth; // offset 0x1B04, size 0x4, align 4
    int32 hp_heal_pct; // offset 0x1B08, size 0x4, align 4
    int32 mp_heal_pct; // offset 0x1B0C, size 0x4, align 4
    int32 tota_hp_per_second; // offset 0x1B10, size 0x4, align 4
    int32 tota_mp_per_second; // offset 0x1B14, size 0x4, align 4
};
