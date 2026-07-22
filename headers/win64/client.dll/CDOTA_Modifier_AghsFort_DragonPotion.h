#pragma once

class CDOTA_Modifier_AghsFort_DragonPotion : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iOriginalAttackCapabilities; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1A60, size 0x8, align 8
    int32 bonus_movement_speed; // offset 0x1A68, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1A6C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1A70, size 0x4, align 4
    int32 attack_projectile_speed; // offset 0x1A74, size 0x4, align 4
    int32 magic_resistance; // offset 0x1A78, size 0x4, align 4
    int32 model_scale; // offset 0x1A7C, size 0x4, align 4
    int32 skin_number; // offset 0x1A80, size 0x4, align 4
    bool flying_movement; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
