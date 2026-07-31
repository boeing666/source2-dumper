#pragma once

class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fDamage; // offset 0x1A78, size 0x4, align 4
    float32 m_fLastRadius; // offset 0x1A7C, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1A80, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1A84, size 0x4, align 255
    bool m_bContracting; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
    CountdownTimer m_ViewerTimer; // offset 0x1A90, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AA8, size 0x4, align 255
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CUtlVector< CHandle< C_BaseEntity > > m_EntitiesHit; // offset 0x1AB0, size 0x18, align 8
    int32 speed; // offset 0x1AC8, size 0x4, align 4
    int32 radius; // offset 0x1ACC, size 0x4, align 4
};
