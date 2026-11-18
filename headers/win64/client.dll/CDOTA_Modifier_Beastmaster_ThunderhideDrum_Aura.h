#pragma once

class CDOTA_Modifier_Beastmaster_ThunderhideDrum_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_pct_per_stack; // offset 0x1AF8, size 0x4, align 4
    float32 stack_decay_time; // offset 0x1AFC, size 0x4, align 4
};
