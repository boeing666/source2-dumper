#pragma once

class CDOTA_Modifier_Snapfire_Scatterblast_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bIsPointBlank; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    int32 movement_slow_pct; // offset 0x1AAC, size 0x4, align 4
    int32 attack_slow_pct; // offset 0x1AB0, size 0x4, align 4
    int32 point_blank_debuff_duration_pct; // offset 0x1AB4, size 0x4, align 4
};
