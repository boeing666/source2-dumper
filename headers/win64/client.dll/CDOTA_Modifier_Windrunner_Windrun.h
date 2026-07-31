#pragma once

class CDOTA_Modifier_Windrunner_Windrun : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 scepter_radius; // offset 0x1A7C, size 0x4, align 4
    int32 movespeed_bonus_pct; // offset 0x1A80, size 0x4, align 4
    bool m_bDispellable; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    int32 physical_damage_pct; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
