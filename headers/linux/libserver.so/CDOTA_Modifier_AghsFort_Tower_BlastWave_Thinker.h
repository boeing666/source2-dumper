#pragma once

class CDOTA_Modifier_AghsFort_Tower_BlastWave_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_pct; // offset 0x1AA8, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AB0, size 0x4, align 255
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CountdownTimer m_ViewerTimer; // offset 0x1AB8, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AD0, size 0x4, align 255
    char _pad_1AD4[0x4]; // offset 0x1AD4
    CUtlVector< CHandle< CBaseEntity > > m_EntitiesHit; // offset 0x1AD8, size 0x18, align 8
    int32 speed; // offset 0x1AF0, size 0x4, align 4
    int32 radius; // offset 0x1AF4, size 0x4, align 4
};
