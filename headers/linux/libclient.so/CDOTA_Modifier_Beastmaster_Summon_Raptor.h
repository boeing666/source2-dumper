#pragma once

class CDOTA_Modifier_Beastmaster_Summon_Raptor : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hOwner; // offset 0x1A78, size 0x4, align 4
    float32 attack_radius; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_flLastAttack; // offset 0x1A80, size 0x4, align 255
    float32 roaming_seconds_per_rotation; // offset 0x1A84, size 0x4, align 4
    float32 roaming_radius; // offset 0x1A88, size 0x4, align 4
    float32 attack_interval; // offset 0x1A8C, size 0x4, align 4
    float32 min_move_speed; // offset 0x1A90, size 0x4, align 4
    float32 max_move_speed; // offset 0x1A94, size 0x4, align 4
    int32 m_iPreviousHawkCount; // offset 0x1A98, size 0x4, align 4
    float32 m_flRotation; // offset 0x1A9C, size 0x4, align 4
    bool m_bCanAttack; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
};
