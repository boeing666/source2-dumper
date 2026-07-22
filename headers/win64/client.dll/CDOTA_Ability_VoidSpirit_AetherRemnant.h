#pragma once

class CDOTA_Ability_VoidSpirit_AetherRemnant : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 start_radius; // offset 0x6A8, size 0x4, align 4
    float32 end_radius; // offset 0x6AC, size 0x4, align 4
    float32 remnant_watch_distance; // offset 0x6B0, size 0x4, align 4
    float32 projectile_speed; // offset 0x6B4, size 0x4, align 4
};
