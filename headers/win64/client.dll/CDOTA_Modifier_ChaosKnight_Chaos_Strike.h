#pragma once

class CDOTA_Modifier_ChaosKnight_Chaos_Strike : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 creep_multiplier; // offset 0x1A78, size 0x4, align 4
    int32 crit_min; // offset 0x1A7C, size 0x4, align 4
    int32 crit_max; // offset 0x1A80, size 0x4, align 4
    int32 lifesteal; // offset 0x1A84, size 0x4, align 4
    float32 chance; // offset 0x1A88, size 0x4, align 4
    int32 m_nNextCrit; // offset 0x1A8C, size 0x4, align 4
};
