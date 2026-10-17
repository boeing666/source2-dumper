#pragma once

class CDOTA_Modifier_Tusk_FrozenSigil : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 aghs_shard_move_slow; // offset 0x1AA8, size 0x4, align 4
    int32 aghs_shard_damage; // offset 0x1AAC, size 0x4, align 4
    int32 attack_slow; // offset 0x1AB0, size 0x4, align 4
    int32 turn_rate_slow; // offset 0x1AB4, size 0x4, align 4
};
