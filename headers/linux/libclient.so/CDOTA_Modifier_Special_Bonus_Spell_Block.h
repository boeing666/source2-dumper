#pragma once

class CDOTA_Modifier_Special_Bonus_Spell_Block : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 block_cooldown; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
    CountdownTimer m_CooldownTimer; // offset 0x1A60, size 0x18, align 8
};
