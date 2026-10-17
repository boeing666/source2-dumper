#pragma once

class CDOTA_Modifier_Huskar_Inner_Vitality : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 heal; // offset 0x1AA8, size 0x4, align 4
    float32 attrib_bonus; // offset 0x1AAC, size 0x4, align 4
    float32 hurt_attrib_bonus; // offset 0x1AB0, size 0x4, align 4
    float32 hurt_percent; // offset 0x1AB4, size 0x4, align 4
};
