#pragma once

class CDOTA_Modifier_Warlock_Rain_of_Chaos_Leash : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flMaxMovespeed; // offset 0x1AF8, size 0x4, align 4
    float32 leash_start_radius; // offset 0x1AFC, size 0x4, align 4
    float32 leash_radius; // offset 0x1B00, size 0x4, align 4
    float32 leashed_movespeed; // offset 0x1B04, size 0x4, align 4
    Vector2D m_vStartLoc; // offset 0x1B08, size 0x8, align 4
    float32 m_flLastMaxMovespeed; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
