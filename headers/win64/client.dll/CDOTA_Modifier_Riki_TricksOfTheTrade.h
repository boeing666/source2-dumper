#pragma once

class CDOTA_Modifier_Riki_TricksOfTheTrade : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 cd_per_kill; // offset 0x1A58, size 0x4, align 4
    float32 speed_per_attack; // offset 0x1A5C, size 0x4, align 4
};
