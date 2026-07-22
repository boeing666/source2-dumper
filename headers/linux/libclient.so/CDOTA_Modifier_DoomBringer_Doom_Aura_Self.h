#pragma once

class CDOTA_Modifier_DoomBringer_Doom_Aura_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 scepter_aura_radius; // offset 0x1A58, size 0x4, align 4
    int32 damage; // offset 0x1A5C, size 0x4, align 4
    bool applies_dispel_to_self; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
};
