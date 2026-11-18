#pragma once

class CDOTA_Modifier_Riki_TricksOfTheTrade : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 cd_per_kill; // offset 0x1AF8, size 0x4, align 4
    float32 speed_per_attack; // offset 0x1AFC, size 0x4, align 4
};
