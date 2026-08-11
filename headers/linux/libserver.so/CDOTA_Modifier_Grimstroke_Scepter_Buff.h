#pragma once

class CDOTA_Modifier_Grimstroke_Scepter_Buff : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 images_movespeed_bonus; // offset 0x1A78, size 0x4, align 4
    float32 immunity_resist; // offset 0x1A7C, size 0x4, align 4
};
