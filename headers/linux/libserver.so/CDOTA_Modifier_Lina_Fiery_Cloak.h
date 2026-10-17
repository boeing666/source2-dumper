#pragma once

class CDOTA_Modifier_Lina_Fiery_Cloak : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 magic_resistance; // offset 0x1AA8, size 0x4, align 4
    int32 spell_amp; // offset 0x1AAC, size 0x4, align 4
    float32 visualzdelta; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x14]; // offset 0x1AB4
};
