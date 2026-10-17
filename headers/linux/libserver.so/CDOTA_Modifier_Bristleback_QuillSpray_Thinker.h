#pragma once

class CDOTA_Modifier_Bristleback_QuillSpray_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1AA8, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AAC, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_entitiesHit; // offset 0x1AB0, size 0x18, align 8
    CountdownTimer m_ViewerTimer; // offset 0x1AC8, size 0x18, align 8
    int32 projectile_speed; // offset 0x1AE0, size 0x4, align 4
    float32 radius; // offset 0x1AE4, size 0x4, align 4
    bool m_bTriggeredByBristleback; // offset 0x1AE8, size 0x1, align 1
    bool m_bDelayed; // offset 0x1AE9, size 0x1, align 1
    char _pad_1AEA[0x2]; // offset 0x1AEA
    int32 m_nAngleRestriction; // offset 0x1AEC, size 0x4, align 4
    Vector m_vFacing; // offset 0x1AF0, size 0xC, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
