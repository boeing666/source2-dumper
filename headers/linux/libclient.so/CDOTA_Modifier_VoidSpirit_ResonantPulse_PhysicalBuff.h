#pragma once

class CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 base_absorb_amount; // offset 0x1AF8, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1AFC, size 0x4, align 4
    int32 m_nMaxAbsorb; // offset 0x1B00, size 0x4, align 4
    bool is_all_barrier; // offset 0x1B04, size 0x1, align 1
    bool m_bAllDamageAbsorb; // offset 0x1B05, size 0x1, align 1
    char _pad_1B06[0x1A]; // offset 0x1B06
};
