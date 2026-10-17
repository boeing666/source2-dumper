#pragma once

class CDOTA_Modifier_Techies_RemoteMine : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    int32 radius; // offset 0x1AB8, size 0x4, align 4
    int32 damage; // offset 0x1ABC, size 0x4, align 4
    int32 radius_scepter; // offset 0x1AC0, size 0x4, align 4
    int32 damage_scepter; // offset 0x1AC4, size 0x4, align 4
    int32 vision_radius; // offset 0x1AC8, size 0x4, align 4
    float32 vision_duration; // offset 0x1ACC, size 0x4, align 4
    int32 model_scale; // offset 0x1AD0, size 0x4, align 4
    bool bExploding; // offset 0x1AD4, size 0x1, align 1
    char _pad_1AD5[0x3]; // offset 0x1AD5
};
