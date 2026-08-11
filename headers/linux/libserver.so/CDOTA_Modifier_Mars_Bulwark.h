#pragma once

class CDOTA_Modifier_Mars_Bulwark : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 physical_damage_reduction; // offset 0x1A78, size 0x4, align 4
    float32 physical_damage_reduction_side; // offset 0x1A7C, size 0x4, align 4
    float32 forward_angle; // offset 0x1A80, size 0x4, align 4
    float32 side_angle; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x18]; // offset 0x1A88
    float32 m_flRecentDamage; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
