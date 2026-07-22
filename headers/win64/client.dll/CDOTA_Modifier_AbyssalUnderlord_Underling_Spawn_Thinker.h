#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 underling_search_radius; // offset 0x1A58, size 0x4, align 4
    int32 warrior_health; // offset 0x1A5C, size 0x4, align 4
    int32 warrior_damage; // offset 0x1A60, size 0x4, align 4
    int32 archer_health; // offset 0x1A64, size 0x4, align 4
    int32 archer_damage; // offset 0x1A68, size 0x4, align 4
    int32 hull_radius; // offset 0x1A6C, size 0x4, align 4
    int32 gold_bounty; // offset 0x1A70, size 0x4, align 4
    int32 xp_bounty; // offset 0x1A74, size 0x4, align 4
};
