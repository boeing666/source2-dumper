#pragma once

class CDOTA_Modifier_Hoodwink_Sharpshooter_VisionThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 arrow_width; // offset 0x1AF8, size 0x4, align 4
    bool vision_along_indicator; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    float32 vision_radius_buffer; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
