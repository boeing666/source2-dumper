#pragma once

class CDOTA_Modifier_Legion_Commander_PressTheAttack_Immunity : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 immunity_resist; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
