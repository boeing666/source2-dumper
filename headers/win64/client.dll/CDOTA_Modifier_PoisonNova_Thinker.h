#pragma once

class CDOTA_Modifier_PoisonNova_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fCurRadius; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1A7C, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit; // offset 0x1A80, size 0x18, align 8
    float32 speed; // offset 0x1A98, size 0x4, align 4
    float32 radius; // offset 0x1A9C, size 0x4, align 4
    float32 start_radius; // offset 0x1AA0, size 0x4, align 4
    float32 duration; // offset 0x1AA4, size 0x4, align 4
};
