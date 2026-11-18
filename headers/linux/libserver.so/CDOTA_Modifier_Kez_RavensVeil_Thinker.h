#pragma once

class CDOTA_Modifier_Kez_RavensVeil_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1AF8, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AFC, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_entitiesHit; // offset 0x1B00, size 0x18, align 8
    CountdownTimer m_ViewerTimer; // offset 0x1B18, size 0x18, align 8
    float32 blast_radius; // offset 0x1B30, size 0x4, align 4
    float32 blast_speed; // offset 0x1B34, size 0x4, align 4
    int32 apply_parry_bonus; // offset 0x1B38, size 0x4, align 4
    float32 blind_duration; // offset 0x1B3C, size 0x4, align 4
    float32 vuln_duration; // offset 0x1B40, size 0x4, align 4
    bool mark_only_heroes; // offset 0x1B44, size 0x1, align 1
    bool buff_allies; // offset 0x1B45, size 0x1, align 1
    char _pad_1B46[0x2]; // offset 0x1B46
    float32 buff_duration; // offset 0x1B48, size 0x4, align 4
    char _pad_1B4C[0x4]; // offset 0x1B4C
    CUtlVector< CHandle< CBaseEntity > > m_alliesBuffed; // offset 0x1B50, size 0x18, align 8
    VectorWS m_vStartLoc; // offset 0x1B68, size 0xC, align 4
    char _pad_1B74[0x4]; // offset 0x1B74
};
