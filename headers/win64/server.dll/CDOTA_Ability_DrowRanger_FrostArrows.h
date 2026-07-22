#pragma once

class CDOTA_Ability_DrowRanger_FrostArrows : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 shard_burst_damage_per_stack; // offset 0x580, size 0x4, align 4
    float32 shard_burst_slow_duration; // offset 0x584, size 0x4, align 4
};
