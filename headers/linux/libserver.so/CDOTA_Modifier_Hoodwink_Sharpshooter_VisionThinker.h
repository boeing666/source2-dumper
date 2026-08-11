#pragma once

class CDOTA_Modifier_Hoodwink_Sharpshooter_VisionThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 arrow_width; // offset 0x1A78, size 0x4, align 4
    bool vision_along_indicator; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    float32 vision_radius_buffer; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
