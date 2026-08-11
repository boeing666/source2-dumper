#pragma once

class CDOTA_Modifier_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 outgoing_damage; // offset 0x1A78, size 0x4, align 4
    int32 outgoing_damage_structure; // offset 0x1A7C, size 0x4, align 4
    int32 outgoing_damage_roshan; // offset 0x1A80, size 0x4, align 4
    int32 incoming_damage; // offset 0x1A84, size 0x4, align 4
    int32 bounty_base; // offset 0x1A88, size 0x4, align 4
    int32 bounty_growth; // offset 0x1A8C, size 0x4, align 4
    int32 fixed_day_vision; // offset 0x1A90, size 0x4, align 4
    int32 fixed_night_vision; // offset 0x1A94, size 0x4, align 4
    CUtlString m_strIllusionType; // offset 0x1A98, size 0x8, align 8
    char[64] m_szIllusionLabel; // offset 0x1AA0, size 0x40, align 1
    bool m_bHidden; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x7]; // offset 0x1AE1
};
