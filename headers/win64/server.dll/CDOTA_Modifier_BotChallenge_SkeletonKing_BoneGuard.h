#pragma once

class CDOTA_Modifier_BotChallenge_SkeletonKing_BoneGuard : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 skeleton_duration; // offset 0x1A78, size 0x4, align 4
    int32 max_skeleton_charges; // offset 0x1A7C, size 0x4, align 4
    int32 skeleton_charges_per_hero_multiplier; // offset 0x1A80, size 0x4, align 4
    int32 m_iKillCounter; // offset 0x1A84, size 0x4, align 4
};
