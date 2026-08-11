#pragma once

class CDOTA_Modifier_Roshans_Banner_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 hp_bonus; // offset 0x1A7C, size 0x4, align 4
    int32 damage_bonus; // offset 0x1A80, size 0x4, align 4
    int32 model_scale; // offset 0x1A84, size 0x4, align 4
    float32 buff_linger_duration; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
