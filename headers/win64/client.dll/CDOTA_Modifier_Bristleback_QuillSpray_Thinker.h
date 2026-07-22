#pragma once

class CDOTA_Modifier_Bristleback_QuillSpray_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1A5C, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit; // offset 0x1A60, size 0x18, align 8
    CountdownTimer m_ViewerTimer; // offset 0x1A78, size 0x18, align 8
    int32 projectile_speed; // offset 0x1A90, size 0x4, align 4
    float32 radius; // offset 0x1A94, size 0x4, align 4
};
