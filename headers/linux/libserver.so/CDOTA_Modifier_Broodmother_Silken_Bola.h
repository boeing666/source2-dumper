#pragma once

class CDOTA_Modifier_Broodmother_Silken_Bola : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 attack_damage; // offset 0x1AF8, size 0x4, align 4
    int32 movement_speed; // offset 0x1AFC, size 0x4, align 4
    int32 miss_chance; // offset 0x1B00, size 0x4, align 4
    int32 shard_miss_chance; // offset 0x1B04, size 0x4, align 4
    int32 roots; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
