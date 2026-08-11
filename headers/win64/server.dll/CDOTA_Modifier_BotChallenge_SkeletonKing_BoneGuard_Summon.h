#pragma once

class CDOTA_Modifier_BotChallenge_SkeletonKing_BoneGuard_Summon : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    int32 talent_skeleton_damage; // offset 0x1A7C, size 0x4, align 4
    bool m_bRespawnReady; // offset 0x1A80, size 0x1, align 1
    bool m_bRespawnConsumed; // offset 0x1A81, size 0x1, align 1
    bool m_bKillParentOnDestroy; // offset 0x1A82, size 0x1, align 1
    char _pad_1A83[0x1]; // offset 0x1A83
    GameTime_t m_flRespawnTime; // offset 0x1A84, size 0x4, align 255
    int32 vampiric_aura; // offset 0x1A88, size 0x4, align 4
    int32 gold_bounty; // offset 0x1A8C, size 0x4, align 4
    int32 xp_bounty; // offset 0x1A90, size 0x4, align 4
    int32 skeleton_building_damage_reduction; // offset 0x1A94, size 0x4, align 4
    int32 skeleton_bonus_hero_damage; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
