#pragma once

class CDOTA_Modifier_DoomBringer_Doom_Aura_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 scepter_aura_radius; // offset 0x1A78, size 0x4, align 4
    int32 damage; // offset 0x1A7C, size 0x4, align 4
    bool applies_dispel_to_self; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
