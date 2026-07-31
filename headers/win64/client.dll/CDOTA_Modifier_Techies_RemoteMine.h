#pragma once

class CDOTA_Modifier_Techies_RemoteMine : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A88]; // offset 0x0
    int32 radius; // offset 0x1A88, size 0x4, align 4
    int32 damage; // offset 0x1A8C, size 0x4, align 4
    int32 radius_scepter; // offset 0x1A90, size 0x4, align 4
    int32 damage_scepter; // offset 0x1A94, size 0x4, align 4
    int32 vision_radius; // offset 0x1A98, size 0x4, align 4
    float32 vision_duration; // offset 0x1A9C, size 0x4, align 4
    int32 model_scale; // offset 0x1AA0, size 0x4, align 4
    bool bExploding; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
};
