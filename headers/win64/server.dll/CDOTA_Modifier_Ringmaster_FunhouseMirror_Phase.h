#pragma once

class CDOTA_Modifier_Ringmaster_FunhouseMirror_Phase : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 illusion_duration; // offset 0x1A78, size 0x4, align 4
    int32 images_do_damage_percent_ranged; // offset 0x1A7C, size 0x4, align 4
    int32 images_do_damage_percent_melee; // offset 0x1A80, size 0x4, align 4
    int32 images_take_damage_percent; // offset 0x1A84, size 0x4, align 4
    int32 images_count; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
