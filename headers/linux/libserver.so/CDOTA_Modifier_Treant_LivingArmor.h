#pragma once

class CDOTA_Modifier_Treant_LivingArmor : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 heal_per_second; // offset 0x1A78, size 0x4, align 4
    float32 damage_block_base; // offset 0x1A7C, size 0x4, align 4
    float32 damage_block_loss; // offset 0x1A80, size 0x4, align 4
    float32 damage_block_threshold; // offset 0x1A84, size 0x4, align 4
    float32 passive_reset_cd; // offset 0x1A88, size 0x4, align 4
    float32 m_flCurrentDamageBlock; // offset 0x1A8C, size 0x4, align 4
    CountdownTimer m_flPassiveResetCountdown; // offset 0x1A90, size 0x18, align 8
    char _pad_1AA8[0x18]; // offset 0x1AA8
};
