#pragma once

class CDOTA_Modifier_Holdout_StaticRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 static_remnant_radius; // offset 0x1AA8, size 0x4, align 4
    int32 static_remnant_damage_radius; // offset 0x1AAC, size 0x4, align 4
    int32 static_remnant_damage; // offset 0x1AB0, size 0x4, align 4
    float32 static_remnant_delay; // offset 0x1AB4, size 0x4, align 4
    float32 overload_duration; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
