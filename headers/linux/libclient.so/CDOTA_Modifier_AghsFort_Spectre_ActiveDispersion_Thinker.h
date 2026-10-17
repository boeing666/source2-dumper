#pragma once

class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fDamage; // offset 0x1AA8, size 0x4, align 4
    float32 m_fLastRadius; // offset 0x1AAC, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1AB0, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AB4, size 0x4, align 255
    bool m_bContracting; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
    CountdownTimer m_ViewerTimer; // offset 0x1AC0, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AD8, size 0x4, align 255
    char _pad_1ADC[0x4]; // offset 0x1ADC
    CUtlVector< CHandle< C_BaseEntity > > m_EntitiesHit; // offset 0x1AE0, size 0x18, align 8
    int32 speed; // offset 0x1AF8, size 0x4, align 4
    int32 radius; // offset 0x1AFC, size 0x4, align 4
};
