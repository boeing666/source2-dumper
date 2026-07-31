#pragma once

class CDOTA_Modifier_Nian_EruptionThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 explosion_radius; // offset 0x1A78, size 0x4, align 4
    float32 damage_interval; // offset 0x1A7C, size 0x4, align 4
    int32 damage; // offset 0x1A80, size 0x4, align 4
    int32 n_FXIndex; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x18]; // offset 0x1A88
};
