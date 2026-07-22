#pragma once

class CDOTA_Modifier_DarkWillow_ShadowRealm_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage; // offset 0x1A58, size 0x4, align 4
    float32 max_damage_duration; // offset 0x1A5C, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A68, size 0x18, align 8
    bool bAttackRange; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    GameTime_t m_flStartTime; // offset 0x1A84, size 0x4, align 255
    GameTime_t m_flFadeTime; // offset 0x1A88, size 0x4, align 255
    float32 m_flDamageScale; // offset 0x1A8C, size 0x4, align 4
    float32 duration; // offset 0x1A90, size 0x4, align 4
    float32 aura_radius; // offset 0x1A94, size 0x4, align 4
};
