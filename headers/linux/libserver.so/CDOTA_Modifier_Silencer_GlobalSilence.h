#pragma once

class CDOTA_Modifier_Silencer_GlobalSilence : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool apply_twice; // offset 0x1AA8, size 0x1, align 1
    bool undispellable; // offset 0x1AA9, size 0x1, align 1
    char _pad_1AAA[0x6]; // offset 0x1AAA
};
