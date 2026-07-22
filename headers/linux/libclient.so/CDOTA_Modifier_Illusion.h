#pragma once

class CDOTA_Modifier_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 outgoing_damage; // offset 0x1A58, size 0x4, align 4
    int32 outgoing_damage_structure; // offset 0x1A5C, size 0x4, align 4
    int32 outgoing_damage_roshan; // offset 0x1A60, size 0x4, align 4
    int32 incoming_damage; // offset 0x1A64, size 0x4, align 4
    int32 bounty_base; // offset 0x1A68, size 0x4, align 4
    int32 bounty_growth; // offset 0x1A6C, size 0x4, align 4
    int32 fixed_day_vision; // offset 0x1A70, size 0x4, align 4
    int32 fixed_night_vision; // offset 0x1A74, size 0x4, align 4
    CUtlString m_strIllusionType; // offset 0x1A78, size 0x8, align 8
    char[64] m_szIllusionLabel; // offset 0x1A80, size 0x40, align 1
    bool m_bHidden; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
