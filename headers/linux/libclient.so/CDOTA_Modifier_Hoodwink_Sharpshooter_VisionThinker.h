#pragma once

class CDOTA_Modifier_Hoodwink_Sharpshooter_VisionThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 arrow_width; // offset 0x1AA8, size 0x4, align 4
    bool vision_along_indicator; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    float32 vision_radius_buffer; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
