#pragma once

class CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 base_absorb_amount; // offset 0x1A58, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1A5C, size 0x4, align 4
    int32 m_nMaxAbsorb; // offset 0x1A60, size 0x4, align 4
    bool is_all_barrier; // offset 0x1A64, size 0x1, align 1
    bool m_bAllDamageAbsorb; // offset 0x1A65, size 0x1, align 1
    char _pad_1A66[0x1A]; // offset 0x1A66
};
