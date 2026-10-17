#pragma once

class CDOTA_Modifier_Windrunner_Windrun : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    int32 scepter_radius; // offset 0x1AAC, size 0x4, align 4
    int32 movespeed_bonus_pct; // offset 0x1AB0, size 0x4, align 4
    bool m_bDispellable; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    int32 physical_damage_pct; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
