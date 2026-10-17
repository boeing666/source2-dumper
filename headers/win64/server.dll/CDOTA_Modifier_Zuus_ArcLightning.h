#pragma once

class CDOTA_Modifier_Zuus_ArcLightning : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    int32 jump_count; // offset 0x1AAC, size 0x4, align 4
    int32 arc_damage; // offset 0x1AB0, size 0x4, align 4
    float32 jump_delay; // offset 0x1AB4, size 0x4, align 4
    int32 total_damage_pct; // offset 0x1AB8, size 0x4, align 4
    int32 m_iCurJumpCount; // offset 0x1ABC, size 0x4, align 4
    bool trigger_spell_absorb; // offset 0x1AC0, size 0x1, align 1
    bool has_unlimited_jumps; // offset 0x1AC1, size 0x1, align 1
    char _pad_1AC2[0x2]; // offset 0x1AC2
    VectorWS m_vCurTargetLoc; // offset 0x1AC4, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1AD0, size 0x18, align 8
};
