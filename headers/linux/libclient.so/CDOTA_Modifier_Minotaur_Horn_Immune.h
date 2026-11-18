#pragma once

class CDOTA_Modifier_Minotaur_Horn_Immune : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 model_scale; // offset 0x1AF8, size 0x4, align 4
    float32 magic_resist; // offset 0x1AFC, size 0x4, align 4
};
