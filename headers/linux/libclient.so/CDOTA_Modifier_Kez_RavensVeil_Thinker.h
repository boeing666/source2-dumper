#pragma once

class CDOTA_Modifier_Kez_RavensVeil_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1A7C, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit; // offset 0x1A80, size 0x18, align 8
    CountdownTimer m_ViewerTimer; // offset 0x1A98, size 0x18, align 8
    float32 blast_radius; // offset 0x1AB0, size 0x4, align 4
    float32 blast_speed; // offset 0x1AB4, size 0x4, align 4
    int32 apply_parry_bonus; // offset 0x1AB8, size 0x4, align 4
    float32 blind_duration; // offset 0x1ABC, size 0x4, align 4
    float32 vuln_duration; // offset 0x1AC0, size 0x4, align 4
    VectorWS m_vStartLoc; // offset 0x1AC4, size 0xC, align 4
};
