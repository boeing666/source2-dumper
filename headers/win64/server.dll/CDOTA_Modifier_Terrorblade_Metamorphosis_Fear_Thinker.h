#pragma once

class CDOTA_Modifier_Terrorblade_Metamorphosis_Fear_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fLastRadius; // offset 0x1A78, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1A80, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1A84, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_EntitiesHit; // offset 0x1A88, size 0x18, align 8
    float32 scepter_speed; // offset 0x1AA0, size 0x4, align 4
    float32 scepter_radius; // offset 0x1AA4, size 0x4, align 4
    float32 damage; // offset 0x1AA8, size 0x4, align 4
    bool m_bFirstThink; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
};
