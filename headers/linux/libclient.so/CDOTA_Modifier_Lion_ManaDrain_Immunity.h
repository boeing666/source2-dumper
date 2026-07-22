#pragma once

class CDOTA_Modifier_Lion_ManaDrain_Immunity : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 magic_resist; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
};
