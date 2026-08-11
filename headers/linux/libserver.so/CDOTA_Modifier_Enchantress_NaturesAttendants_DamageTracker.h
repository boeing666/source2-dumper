#pragma once

class CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_iDamageTaken; // offset 0x1A78, size 0x4, align 4
    int32 overprotective_damage_threshold; // offset 0x1A7C, size 0x4, align 4
    float32 overprotective_damage_reset_interval; // offset 0x1A80, size 0x4, align 4
    float32 overprotective_wisp_duration; // offset 0x1A84, size 0x4, align 4
    int32 overprotective_wisp_count; // offset 0x1A88, size 0x4, align 4
    float32 heal_interval; // offset 0x1A8C, size 0x4, align 4
    int32 overprotective_max_wisps; // offset 0x1A90, size 0x4, align 4
    int32 heal; // offset 0x1A94, size 0x4, align 4
    float32 heal_duration; // offset 0x1A98, size 0x4, align 4
    int32 wisp_count; // offset 0x1A9C, size 0x4, align 4
};
