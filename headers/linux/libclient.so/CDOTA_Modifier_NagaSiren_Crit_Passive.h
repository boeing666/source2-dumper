#pragma once

class CDOTA_Modifier_NagaSiren_Crit_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 chance; // offset 0x1AA8, size 0x4, align 4
    int32 crit; // offset 0x1AAC, size 0x4, align 4
};
