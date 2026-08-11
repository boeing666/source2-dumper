#pragma once

class CDOTA_Modifier_Rubick_FadeBolt : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 damage; // offset 0x1A7C, size 0x4, align 4
    int32 jump_damage_reduction_pct; // offset 0x1A80, size 0x4, align 4
    int32 attack_damage_reduction; // offset 0x1A84, size 0x4, align 4
    int32 attack_damage_reduction_creep_reduction_pct; // offset 0x1A88, size 0x4, align 4
    int32 steals_damage; // offset 0x1A8C, size 0x4, align 4
    float32 jump_delay; // offset 0x1A90, size 0x4, align 4
    int32 m_iCurJumpCount; // offset 0x1A94, size 0x4, align 4
    VectorWS m_vCurTargetLoc; // offset 0x1A98, size 0xC, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1AA8, size 0x18, align 8
};
