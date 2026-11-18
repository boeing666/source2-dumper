#pragma once

class CDOTA_Modifier_Item_Shivas_Guard_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1AF8, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AFC, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit; // offset 0x1B00, size 0x18, align 8
    CountdownTimer m_ViewerTimer; // offset 0x1B18, size 0x18, align 8
    int32 blast_speed; // offset 0x1B30, size 0x4, align 4
    float32 blast_radius; // offset 0x1B34, size 0x4, align 4
    int32 blast_damage; // offset 0x1B38, size 0x4, align 4
    float32 blast_debuff_duration; // offset 0x1B3C, size 0x4, align 4
};
