#pragma once

class CDOTA_Modifier_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 outgoing_damage; // offset 0x1AA8, size 0x4, align 4
    int32 outgoing_damage_structure; // offset 0x1AAC, size 0x4, align 4
    int32 outgoing_damage_roshan; // offset 0x1AB0, size 0x4, align 4
    int32 incoming_damage; // offset 0x1AB4, size 0x4, align 4
    int32 bounty_base; // offset 0x1AB8, size 0x4, align 4
    int32 bounty_growth; // offset 0x1ABC, size 0x4, align 4
    int32 fixed_day_vision; // offset 0x1AC0, size 0x4, align 4
    int32 fixed_night_vision; // offset 0x1AC4, size 0x4, align 4
    CUtlString m_strIllusionType; // offset 0x1AC8, size 0x8, align 8
    char[64] m_szIllusionLabel; // offset 0x1AD0, size 0x40, align 1
    bool m_bHidden; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
