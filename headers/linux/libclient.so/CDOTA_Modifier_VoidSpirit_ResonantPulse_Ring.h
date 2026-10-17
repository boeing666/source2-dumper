#pragma once

class CDOTA_Modifier_VoidSpirit_ResonantPulse_Ring : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fLastRadius; // offset 0x1AA8, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AB0, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_EntitiesHit; // offset 0x1AB8, size 0x18, align 8
    float32 speed; // offset 0x1AD0, size 0x4, align 4
    float32 radius; // offset 0x1AD4, size 0x4, align 4
    float32 damage; // offset 0x1AD8, size 0x4, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
