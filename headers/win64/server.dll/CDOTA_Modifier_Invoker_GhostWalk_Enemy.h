#pragma once

class CDOTA_Modifier_Invoker_GhostWalk_Enemy : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 enemy_slow; // offset 0x1AF8, size 0x4, align 4
    int32 apply_ice_wall_debuff; // offset 0x1AFC, size 0x4, align 4
};
