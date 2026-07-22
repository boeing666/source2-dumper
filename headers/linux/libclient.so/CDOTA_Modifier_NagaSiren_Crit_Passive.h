#pragma once

class CDOTA_Modifier_NagaSiren_Crit_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 chance; // offset 0x1A58, size 0x4, align 4
    int32 crit; // offset 0x1A5C, size 0x4, align 4
};
