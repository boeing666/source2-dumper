#pragma once

class CDOTA_Modifier_BotChallenge_SkeletonKing_BoneGuard_Summon : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    int32 talent_skeleton_damage; // offset 0x1AAC, size 0x4, align 4
    bool m_bRespawnReady; // offset 0x1AB0, size 0x1, align 1
    bool m_bRespawnConsumed; // offset 0x1AB1, size 0x1, align 1
    bool m_bKillParentOnDestroy; // offset 0x1AB2, size 0x1, align 1
    char _pad_1AB3[0x1]; // offset 0x1AB3
    GameTime_t m_flRespawnTime; // offset 0x1AB4, size 0x4, align 255
    int32 vampiric_aura; // offset 0x1AB8, size 0x4, align 4
    int32 gold_bounty; // offset 0x1ABC, size 0x4, align 4
    int32 xp_bounty; // offset 0x1AC0, size 0x4, align 4
    int32 skeleton_building_damage_reduction; // offset 0x1AC4, size 0x4, align 4
    int32 skeleton_bonus_hero_damage; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
