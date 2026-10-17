#pragma once

class CDOTA_Modifier_Black_King_Bar_Immune : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 model_scale; // offset 0x1AA8, size 0x4, align 4
    float32 spell_reduce; // offset 0x1AAC, size 0x4, align 4
};
