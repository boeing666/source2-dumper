#pragma once

class CDOTA_Modifier_Tinker_Defensive_Matrix : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage_absorb; // offset 0x1A58, size 0x4, align 4
    int32 status_resistance; // offset 0x1A5C, size 0x4, align 4
    int32 cooldown_reduction; // offset 0x1A60, size 0x4, align 4
    int32 flicker_range; // offset 0x1A64, size 0x4, align 4
    int32 flicker_angle; // offset 0x1A68, size 0x4, align 4
    bool m_bStartedTimer; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    int32 m_nDamageAbsorbed; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
