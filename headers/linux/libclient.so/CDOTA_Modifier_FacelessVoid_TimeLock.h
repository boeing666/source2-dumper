#pragma once

class CDOTA_Modifier_FacelessVoid_TimeLock : public CDOTA_Buff /*0x0*/  // sizeof 0x1B58, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 duration; // offset 0x1AF8, size 0x4, align 4
    float32 duration_creep; // offset 0x1AFC, size 0x4, align 4
    float32 delay; // offset 0x1B00, size 0x4, align 4
    int32 chance_pct; // offset 0x1B04, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B08, size 0x4, align 4
    GameTime_t last_attack_time; // offset 0x1B0C, size 0x4, align 255
    CUtlVector< AttackRecord_t > m_ProcAttackRecords; // offset 0x1B10, size 0x18, align 8
    GameTime_t apply_activity_modifier_until; // offset 0x1B28, size 0x4, align 255
    GameTime_t disable_activity_modifier_until; // offset 0x1B2C, size 0x4, align 255
    CUtlOrderedMap< CHandle< C_DOTA_BaseNPC >, int32 > m_mapTargets; // offset 0x1B30, size 0x28, align 8
};
