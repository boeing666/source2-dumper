#pragma once

class CDOTA_Modifier_BotChallenge_SkeletonKing_BoneGuard_Summon : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    int32 talent_skeleton_damage; // offset 0x1AFC, size 0x4, align 4
    bool m_bRespawnReady; // offset 0x1B00, size 0x1, align 1
    bool m_bRespawnConsumed; // offset 0x1B01, size 0x1, align 1
    bool m_bKillParentOnDestroy; // offset 0x1B02, size 0x1, align 1
    char _pad_1B03[0x1]; // offset 0x1B03
    GameTime_t m_flRespawnTime; // offset 0x1B04, size 0x4, align 255
    int32 vampiric_aura; // offset 0x1B08, size 0x4, align 4
    int32 gold_bounty; // offset 0x1B0C, size 0x4, align 4
    int32 xp_bounty; // offset 0x1B10, size 0x4, align 4
    int32 skeleton_building_damage_reduction; // offset 0x1B14, size 0x4, align 4
    int32 skeleton_bonus_hero_damage; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
