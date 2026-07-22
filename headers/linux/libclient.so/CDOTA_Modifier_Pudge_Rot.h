#pragma once

class CDOTA_Modifier_Pudge_Rot : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 rot_damage; // offset 0x1A58, size 0x4, align 4
    int32 rot_slow; // offset 0x1A5C, size 0x4, align 4
    int32 scepter_rot_regen_reduction_pct; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x14]; // offset 0x1A64
    GameTime_t m_flLastRotTime; // offset 0x1A78, size 0x4, align 255
    bool m_bQualifiesAsPotentionalDeny; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    int32 max_total_stacks; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
