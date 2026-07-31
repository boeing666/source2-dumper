#pragma once

class CDOTA_Modifier_Zuus_ArcLightning : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 jump_count; // offset 0x1A7C, size 0x4, align 4
    int32 arc_damage; // offset 0x1A80, size 0x4, align 4
    float32 jump_delay; // offset 0x1A84, size 0x4, align 4
    int32 total_damage_pct; // offset 0x1A88, size 0x4, align 4
    int32 m_iCurJumpCount; // offset 0x1A8C, size 0x4, align 4
    bool trigger_spell_absorb; // offset 0x1A90, size 0x1, align 1
    bool has_unlimited_jumps; // offset 0x1A91, size 0x1, align 1
    char _pad_1A92[0x2]; // offset 0x1A92
    VectorWS m_vCurTargetLoc; // offset 0x1A94, size 0xC, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1AA0, size 0x18, align 8
};
