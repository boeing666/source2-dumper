#pragma once

class CDOTA_Modifier_Techies_RemoteMine : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A64]; // offset 0x0
    int32 radius; // offset 0x1A64, size 0x4, align 4
    int32 damage; // offset 0x1A68, size 0x4, align 4
    int32 radius_scepter; // offset 0x1A6C, size 0x4, align 4
    int32 damage_scepter; // offset 0x1A70, size 0x4, align 4
    int32 vision_radius; // offset 0x1A74, size 0x4, align 4
    float32 vision_duration; // offset 0x1A78, size 0x4, align 4
    int32 model_scale; // offset 0x1A7C, size 0x4, align 4
    bool bExploding; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
