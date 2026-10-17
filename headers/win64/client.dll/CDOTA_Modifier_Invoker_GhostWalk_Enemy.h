#pragma once

class CDOTA_Modifier_Invoker_GhostWalk_Enemy : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 enemy_slow; // offset 0x1AA8, size 0x4, align 4
    int32 apply_ice_wall_debuff; // offset 0x1AAC, size 0x4, align 4
};
