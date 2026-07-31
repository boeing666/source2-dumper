#pragma once

class CDOTA_Modifier_TemplarAssassin_Trap_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 movement_speed_min; // offset 0x1A78, size 0x4, align 4
    int32 movement_speed_max; // offset 0x1A7C, size 0x4, align 4
    int32 extra_damage; // offset 0x1A80, size 0x4, align 4
    float32 trap_max_charge_duration; // offset 0x1A84, size 0x4, align 4
    float32 min_silence_duration; // offset 0x1A88, size 0x4, align 4
    float32 max_silence_duration; // offset 0x1A8C, size 0x4, align 4
    float32 stage; // offset 0x1A90, size 0x4, align 4
    float32 flDamagePerTick; // offset 0x1A94, size 0x4, align 4
    bool bExtraDamage; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x7]; // offset 0x1A99
};
