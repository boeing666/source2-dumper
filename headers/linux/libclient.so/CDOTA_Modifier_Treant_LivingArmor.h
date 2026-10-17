#pragma once

class CDOTA_Modifier_Treant_LivingArmor : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 heal_per_second; // offset 0x1AA8, size 0x4, align 4
    float32 damage_block_base; // offset 0x1AAC, size 0x4, align 4
    float32 damage_block_loss; // offset 0x1AB0, size 0x4, align 4
    float32 damage_block_threshold; // offset 0x1AB4, size 0x4, align 4
    float32 passive_reset_cd; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x14]; // offset 0x1ABC
};
