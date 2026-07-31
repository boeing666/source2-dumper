#pragma once

class CDOTA_Modifier_Warlock_Shadow_Word : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 tick_interval; // offset 0x1A78, size 0x4, align 4
    float32 damage; // offset 0x1A7C, size 0x4, align 4
    int32 shard_movement_speed_pct; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x14]; // offset 0x1A84
};
