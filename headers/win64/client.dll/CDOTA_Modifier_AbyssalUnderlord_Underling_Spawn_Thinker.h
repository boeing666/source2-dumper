#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 underling_search_radius; // offset 0x1A78, size 0x4, align 4
    int32 warrior_health; // offset 0x1A7C, size 0x4, align 4
    int32 warrior_damage; // offset 0x1A80, size 0x4, align 4
    int32 archer_health; // offset 0x1A84, size 0x4, align 4
    int32 archer_damage; // offset 0x1A88, size 0x4, align 4
    int32 hull_radius; // offset 0x1A8C, size 0x4, align 4
    int32 gold_bounty; // offset 0x1A90, size 0x4, align 4
    int32 xp_bounty; // offset 0x1A94, size 0x4, align 4
};
