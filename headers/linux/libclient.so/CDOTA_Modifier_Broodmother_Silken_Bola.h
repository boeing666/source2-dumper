#pragma once

class CDOTA_Modifier_Broodmother_Silken_Bola : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 attack_damage; // offset 0x1A78, size 0x4, align 4
    int32 movement_speed; // offset 0x1A7C, size 0x4, align 4
    int32 miss_chance; // offset 0x1A80, size 0x4, align 4
    int32 shard_miss_chance; // offset 0x1A84, size 0x4, align 4
    int32 roots; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
