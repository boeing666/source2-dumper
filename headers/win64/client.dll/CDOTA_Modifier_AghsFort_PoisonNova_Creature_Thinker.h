#pragma once

class CDOTA_Modifier_AghsFort_PoisonNova_Creature_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1AA8, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AAC, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit; // offset 0x1AB0, size 0x18, align 8
    int32 speed; // offset 0x1AC8, size 0x4, align 4
    int32 radius; // offset 0x1ACC, size 0x4, align 4
    int32 start_radius; // offset 0x1AD0, size 0x4, align 4
    float32 duration; // offset 0x1AD4, size 0x4, align 4
};
