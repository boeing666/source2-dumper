#pragma once

class CDOTA_Modifier_Terrorblade_Metamorphosis : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 base_attack_time; // offset 0x1A58, size 0x4, align 4
    int32 bonus_range; // offset 0x1A5C, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1A60, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A64, size 0x4, align 4
    int32 speed_loss; // offset 0x1A68, size 0x4, align 4
    int32 attack_projectile_speed_bonus; // offset 0x1A6C, size 0x4, align 4
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1A70, size 0x8, align 8
    CUtlSymbolLarge m_iszOriginalRangedAttackEffect; // offset 0x1A78, size 0x8, align 8
};
