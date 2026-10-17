#pragma once

class CDOTA_Modifier_Ringmaster_FunhouseMirror_Phase : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 illusion_duration; // offset 0x1AA8, size 0x4, align 4
    int32 images_do_damage_percent_ranged; // offset 0x1AAC, size 0x4, align 4
    int32 images_do_damage_percent_melee; // offset 0x1AB0, size 0x4, align 4
    int32 images_take_damage_percent; // offset 0x1AB4, size 0x4, align 4
    int32 images_count; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
