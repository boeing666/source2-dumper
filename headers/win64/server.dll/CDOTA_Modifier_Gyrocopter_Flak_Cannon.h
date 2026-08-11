#pragma once

class CDOTA_Modifier_Gyrocopter_Flak_Cannon : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 max_attacks; // offset 0x1A78, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A7C, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1A80, size 0x4, align 4
    int32 projectile_speed; // offset 0x1A84, size 0x4, align 4
    int32 bonus_night_vision; // offset 0x1A88, size 0x4, align 4
    float32 radius; // offset 0x1A8C, size 0x4, align 4
};
