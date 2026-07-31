#pragma once

class CDOTA_Modifier_Undying_Decay_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 str_steal; // offset 0x1A78, size 0x4, align 4
    int32 str_scale_up; // offset 0x1A7C, size 0x4, align 4
};
