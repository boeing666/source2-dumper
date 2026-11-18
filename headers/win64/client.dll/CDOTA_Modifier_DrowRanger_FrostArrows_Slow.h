#pragma once

class CDOTA_Modifier_DrowRanger_FrostArrows_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 frost_arrows_movement_speed; // offset 0x1AF8, size 0x4, align 4
    int32 shard_max_stacks; // offset 0x1AFC, size 0x4, align 4
    float32 shard_stack_duration; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
