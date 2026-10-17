#pragma once

class CDOTA_Modifier_Tinker_Defensive_Matrix : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage_absorb; // offset 0x1AA8, size 0x4, align 4
    int32 status_resistance; // offset 0x1AAC, size 0x4, align 4
    int32 cooldown_reduction; // offset 0x1AB0, size 0x4, align 4
    int32 flicker_range; // offset 0x1AB4, size 0x4, align 4
    int32 flicker_angle; // offset 0x1AB8, size 0x4, align 4
    bool m_bStartedTimer; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    int32 m_nDamageAbsorbed; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
