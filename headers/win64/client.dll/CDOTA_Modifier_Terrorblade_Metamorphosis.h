#pragma once

class CDOTA_Modifier_Terrorblade_Metamorphosis : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 base_attack_time; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_range; // offset 0x1AFC, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1B00, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B04, size 0x4, align 4
    int32 speed_loss; // offset 0x1B08, size 0x4, align 4
    int32 attack_projectile_speed_bonus; // offset 0x1B0C, size 0x4, align 4
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1B10, size 0x8, align 8
    CUtlSymbolLarge m_iszOriginalRangedAttackEffect; // offset 0x1B18, size 0x8, align 8
};
