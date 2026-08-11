#pragma once

class CDOTA_Modifier_Special_Bonus_Spell_Block : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 block_cooldown; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CountdownTimer m_CooldownTimer; // offset 0x1A80, size 0x18, align 8
};
