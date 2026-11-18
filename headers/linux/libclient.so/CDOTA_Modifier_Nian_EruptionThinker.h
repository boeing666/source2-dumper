#pragma once

class CDOTA_Modifier_Nian_EruptionThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 explosion_radius; // offset 0x1AF8, size 0x4, align 4
    float32 damage_interval; // offset 0x1AFC, size 0x4, align 4
    int32 damage; // offset 0x1B00, size 0x4, align 4
    int32 n_FXIndex; // offset 0x1B04, size 0x4, align 4
    char _pad_1B08[0x18]; // offset 0x1B08
};
