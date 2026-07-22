#pragma once

class CDOTA_Modifier_BotChallenge_SkeletonKing_BoneGuard_Summon : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    int32 talent_skeleton_damage; // offset 0x1A5C, size 0x4, align 4
    bool m_bRespawnReady; // offset 0x1A60, size 0x1, align 1
    bool m_bRespawnConsumed; // offset 0x1A61, size 0x1, align 1
    bool m_bKillParentOnDestroy; // offset 0x1A62, size 0x1, align 1
    char _pad_1A63[0x1]; // offset 0x1A63
    GameTime_t m_flRespawnTime; // offset 0x1A64, size 0x4, align 255
    int32 vampiric_aura; // offset 0x1A68, size 0x4, align 4
    int32 gold_bounty; // offset 0x1A6C, size 0x4, align 4
    int32 xp_bounty; // offset 0x1A70, size 0x4, align 4
    int32 skeleton_building_damage_reduction; // offset 0x1A74, size 0x4, align 4
    int32 skeleton_bonus_hero_damage; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
