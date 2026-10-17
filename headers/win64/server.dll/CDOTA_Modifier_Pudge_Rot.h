#pragma once

class CDOTA_Modifier_Pudge_Rot : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 rot_damage; // offset 0x1AA8, size 0x4, align 4
    int32 rot_slow; // offset 0x1AAC, size 0x4, align 4
    int32 scepter_rot_regen_reduction_pct; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x14]; // offset 0x1AB4
    GameTime_t m_flLastRotTime; // offset 0x1AC8, size 0x4, align 255
    bool m_bQualifiesAsPotentionalDeny; // offset 0x1ACC, size 0x1, align 1
    char _pad_1ACD[0x3]; // offset 0x1ACD
    int32 max_total_stacks; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
