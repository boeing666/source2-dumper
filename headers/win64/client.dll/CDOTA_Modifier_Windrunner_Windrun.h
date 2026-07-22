#pragma once

class CDOTA_Modifier_Windrunner_Windrun : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    int32 scepter_radius; // offset 0x1A5C, size 0x4, align 4
    int32 movespeed_bonus_pct; // offset 0x1A60, size 0x4, align 4
    bool m_bDispellable; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    int32 physical_damage_pct; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
