#pragma once

class CDOTA_Modifier_Muerta_Supernatural : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 stack_collection_range; // offset 0x1AA8, size 0x4, align 4
    float32 spell_amp_per_stack; // offset 0x1AAC, size 0x4, align 4
};
