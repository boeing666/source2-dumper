#pragma once

class CDOTA_Modifier_SkeletonKing_BoneGuard : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 skeleton_duration; // offset 0x1AF8, size 0x4, align 4
    int32 max_skeleton_charges; // offset 0x1AFC, size 0x4, align 4
    int32 skeleton_charges_per_hero_multiplier; // offset 0x1B00, size 0x4, align 4
    int32 m_iKillCounter; // offset 0x1B04, size 0x4, align 4
};
