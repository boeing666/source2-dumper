#pragma once

class CDOTA_Modifier_Kez_RavensVeil_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1AA8, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AAC, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_entitiesHit; // offset 0x1AB0, size 0x18, align 8
    CountdownTimer m_ViewerTimer; // offset 0x1AC8, size 0x18, align 8
    float32 blast_radius; // offset 0x1AE0, size 0x4, align 4
    float32 blast_speed; // offset 0x1AE4, size 0x4, align 4
    int32 apply_parry_bonus; // offset 0x1AE8, size 0x4, align 4
    float32 blind_duration; // offset 0x1AEC, size 0x4, align 4
    float32 vuln_duration; // offset 0x1AF0, size 0x4, align 4
    bool mark_only_heroes; // offset 0x1AF4, size 0x1, align 1
    char _pad_1AF5[0x3]; // offset 0x1AF5
    VectorWS m_vStartLoc; // offset 0x1AF8, size 0xC, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
