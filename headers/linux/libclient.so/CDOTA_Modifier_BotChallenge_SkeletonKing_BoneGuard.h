#pragma once

class CDOTA_Modifier_BotChallenge_SkeletonKing_BoneGuard : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 skeleton_duration; // offset 0x1A58, size 0x4, align 4
    int32 max_skeleton_charges; // offset 0x1A5C, size 0x4, align 4
    int32 skeleton_charges_per_hero_multiplier; // offset 0x1A60, size 0x4, align 4
    int32 m_iKillCounter; // offset 0x1A64, size 0x4, align 4
};
