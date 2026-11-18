#pragma once

class CDOTA_Modifier_Pudge_Rot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 rot_damage; // offset 0x1AF8, size 0x4, align 4
    int32 rot_slow; // offset 0x1AFC, size 0x4, align 4
    int32 scepter_rot_regen_reduction_pct; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x14]; // offset 0x1B04
    GameTime_t m_flLastRotTime; // offset 0x1B18, size 0x4, align 255
    bool m_bQualifiesAsPotentionalDeny; // offset 0x1B1C, size 0x1, align 1
    char _pad_1B1D[0x3]; // offset 0x1B1D
    int32 max_total_stacks; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
