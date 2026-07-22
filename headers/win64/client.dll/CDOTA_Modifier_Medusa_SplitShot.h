#pragma once

class CDOTA_Modifier_Medusa_SplitShot : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage_modifier; // offset 0x1A58, size 0x4, align 4
    int32 range; // offset 0x1A5C, size 0x4, align 4
    int32 arrow_count; // offset 0x1A60, size 0x4, align 4
    int32 projectile_speed; // offset 0x1A64, size 0x4, align 4
    ParticleIndex_t m_nSplitShotBowFXIndex; // offset 0x1A68, size 0x4, align 255
    char _pad_1A6C[0x3C]; // offset 0x1A6C
};
