#pragma once

class CDOTA_Modifier_Rubick_FadeBolt : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 damage; // offset 0x1AFC, size 0x4, align 4
    int32 jump_damage_reduction_pct; // offset 0x1B00, size 0x4, align 4
    int32 attack_damage_reduction; // offset 0x1B04, size 0x4, align 4
    int32 attack_damage_reduction_creep_reduction_pct; // offset 0x1B08, size 0x4, align 4
    int32 steals_damage; // offset 0x1B0C, size 0x4, align 4
    float32 jump_delay; // offset 0x1B10, size 0x4, align 4
    int32 m_iCurJumpCount; // offset 0x1B14, size 0x4, align 4
    VectorWS m_vCurTargetLoc; // offset 0x1B18, size 0xC, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1B28, size 0x18, align 8
};
