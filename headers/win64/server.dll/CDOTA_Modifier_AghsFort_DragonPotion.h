#pragma once

class CDOTA_Modifier_AghsFort_DragonPotion : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_iOriginalAttackCapabilities; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1B00, size 0x8, align 8
    int32 bonus_movement_speed; // offset 0x1B08, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1B0C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1B10, size 0x4, align 4
    int32 attack_projectile_speed; // offset 0x1B14, size 0x4, align 4
    int32 magic_resistance; // offset 0x1B18, size 0x4, align 4
    int32 model_scale; // offset 0x1B1C, size 0x4, align 4
    int32 skin_number; // offset 0x1B20, size 0x4, align 4
    bool flying_movement; // offset 0x1B24, size 0x1, align 1
    char _pad_1B25[0x3]; // offset 0x1B25
};
