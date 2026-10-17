#pragma once

class CDOTA_Modifier_Gyrocopter_Flak_Cannon : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_attacks; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AAC, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1AB0, size 0x4, align 4
    int32 projectile_speed; // offset 0x1AB4, size 0x4, align 4
    int32 bonus_night_vision; // offset 0x1AB8, size 0x4, align 4
    int32 additional_targets; // offset 0x1ABC, size 0x4, align 4
    int32 proc_attack_modifiers; // offset 0x1AC0, size 0x4, align 4
    float32 radius; // offset 0x1AC4, size 0x4, align 4
};
