#pragma once

class CDOTA_Modifier_Shredder_WhirlingDeath_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 stat_loss_pct; // offset 0x1AF8, size 0x4, align 4
    float32 stat_loss_univ; // offset 0x1AFC, size 0x4, align 4
    int32 iPrimaryAttribute; // offset 0x1B00, size 0x4, align 4
    float32 flStatLossStr; // offset 0x1B04, size 0x4, align 4
    float32 flStatLossAgi; // offset 0x1B08, size 0x4, align 4
    float32 flStatLossInt; // offset 0x1B0C, size 0x4, align 4
};
