#pragma once

class CDOTA_Modifier_Filler_Heal : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 hp_heal; // offset 0x1A78, size 0x4, align 4
    int32 mp_heal; // offset 0x1A7C, size 0x4, align 4
    int32 hp_heal_growth; // offset 0x1A80, size 0x4, align 4
    float32 mp_heal_growth; // offset 0x1A84, size 0x4, align 4
    int32 hp_heal_pct; // offset 0x1A88, size 0x4, align 4
    int32 mp_heal_pct; // offset 0x1A8C, size 0x4, align 4
    int32 tota_hp_per_second; // offset 0x1A90, size 0x4, align 4
    int32 tota_mp_per_second; // offset 0x1A94, size 0x4, align 4
};
