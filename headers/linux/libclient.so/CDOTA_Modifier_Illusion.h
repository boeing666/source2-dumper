#pragma once

class CDOTA_Modifier_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1B70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 outgoing_damage; // offset 0x1AF8, size 0x4, align 4
    int32 outgoing_damage_structure; // offset 0x1AFC, size 0x4, align 4
    int32 outgoing_damage_roshan; // offset 0x1B00, size 0x4, align 4
    int32 incoming_damage; // offset 0x1B04, size 0x4, align 4
    float32 illusion_effectiveness; // offset 0x1B08, size 0x4, align 4
    int32 bounty_base; // offset 0x1B0C, size 0x4, align 4
    int32 bounty_growth; // offset 0x1B10, size 0x4, align 4
    int32 fixed_day_vision; // offset 0x1B14, size 0x4, align 4
    int32 fixed_night_vision; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
    CUtlString m_strIllusionType; // offset 0x1B20, size 0x8, align 8
    char[64] m_szIllusionLabel; // offset 0x1B28, size 0x40, align 1
    bool m_bHidden; // offset 0x1B68, size 0x1, align 1
    char _pad_1B69[0x7]; // offset 0x1B69
};
