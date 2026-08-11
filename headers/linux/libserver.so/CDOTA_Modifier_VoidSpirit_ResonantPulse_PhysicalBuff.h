#pragma once

class CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 base_absorb_amount; // offset 0x1A78, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1A7C, size 0x4, align 4
    int32 m_nMaxAbsorb; // offset 0x1A80, size 0x4, align 4
    bool is_all_barrier; // offset 0x1A84, size 0x1, align 1
    bool m_bAllDamageAbsorb; // offset 0x1A85, size 0x1, align 1
    char _pad_1A86[0x1A]; // offset 0x1A86
};
