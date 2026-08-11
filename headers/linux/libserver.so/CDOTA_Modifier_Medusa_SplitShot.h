#pragma once

class CDOTA_Modifier_Medusa_SplitShot : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage_modifier; // offset 0x1A78, size 0x4, align 4
    int32 range; // offset 0x1A7C, size 0x4, align 4
    int32 arrow_count; // offset 0x1A80, size 0x4, align 4
    int32 projectile_speed; // offset 0x1A84, size 0x4, align 4
    ParticleIndex_t m_nSplitShotBowFXIndex; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x3C]; // offset 0x1A8C
};
