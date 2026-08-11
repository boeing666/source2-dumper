#pragma once

class CDOTA_Modifier_Chen_Zealot_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage; // offset 0x1A78, size 0x4, align 4
    int32 bonus_hp; // offset 0x1A7C, size 0x4, align 4
    float32 zealot_respawn_time; // offset 0x1A80, size 0x4, align 4
    bool m_bInnateZealot; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
