#pragma once

class CDOTA_Modifier_Ringmaster_StrongmanTonic_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 model_scale; // offset 0x1AA8, size 0x4, align 4
    float32 effect_strength_max_duration; // offset 0x1AAC, size 0x4, align 4
    float32 strength_bonus; // offset 0x1AB0, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1AB4, size 0x4, align 255
};
