#pragma once

class CDOTA_Modifier_Undying_Decay_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 str_steal; // offset 0x1AF8, size 0x4, align 4
    int32 str_scale_up; // offset 0x1AFC, size 0x4, align 4
};
