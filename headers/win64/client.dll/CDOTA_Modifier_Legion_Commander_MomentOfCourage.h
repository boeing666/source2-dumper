#pragma once

class CDOTA_Modifier_Legion_Commander_MomentOfCourage : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 trigger_attacks; // offset 0x1AA8, size 0x4, align 4
    float32 buff_duration; // offset 0x1AAC, size 0x4, align 4
};
