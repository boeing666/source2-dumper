#pragma once

class CDOTA_Modifier_Techies_RemoteMine : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 radius; // offset 0x1B08, size 0x4, align 4
    int32 damage; // offset 0x1B0C, size 0x4, align 4
    int32 radius_scepter; // offset 0x1B10, size 0x4, align 4
    int32 damage_scepter; // offset 0x1B14, size 0x4, align 4
    int32 vision_radius; // offset 0x1B18, size 0x4, align 4
    float32 vision_duration; // offset 0x1B1C, size 0x4, align 4
    int32 model_scale; // offset 0x1B20, size 0x4, align 4
    bool bExploding; // offset 0x1B24, size 0x1, align 1
    char _pad_1B25[0x3]; // offset 0x1B25
};
