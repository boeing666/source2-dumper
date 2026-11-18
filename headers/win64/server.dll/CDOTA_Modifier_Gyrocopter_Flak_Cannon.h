#pragma once

class CDOTA_Modifier_Gyrocopter_Flak_Cannon : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 max_attacks; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AFC, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1B00, size 0x4, align 4
    int32 projectile_speed; // offset 0x1B04, size 0x4, align 4
    int32 bonus_night_vision; // offset 0x1B08, size 0x4, align 4
    float32 radius; // offset 0x1B0C, size 0x4, align 4
    float32 attack_effectiveness; // offset 0x1B10, size 0x4, align 4
    int32 additional_targets; // offset 0x1B14, size 0x4, align 4
};
