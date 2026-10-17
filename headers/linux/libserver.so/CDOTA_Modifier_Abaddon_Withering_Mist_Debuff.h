#pragma once

class CDOTA_Modifier_Abaddon_Withering_Mist_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 heal_reduction_pct; // offset 0x1AA8, size 0x4, align 4
    float32 hp_threshold_pct; // offset 0x1AAC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB0, size 0x4, align 255
    bool bUnderThreshold; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
};
