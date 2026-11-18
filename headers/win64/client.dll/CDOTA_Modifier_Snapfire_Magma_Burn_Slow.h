#pragma once

class CDOTA_Modifier_Snapfire_Magma_Burn_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_nMoveSlowPct; // offset 0x1AF8, size 0x4, align 4
    float32 m_fBurnDamagePerTick; // offset 0x1AFC, size 0x4, align 4
    int32 move_slow_pct; // offset 0x1B00, size 0x4, align 4
    float32 burn_interval; // offset 0x1B04, size 0x4, align 4
    int32 burn_damage; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
