#pragma once

class C_DOTA_Ability_StormSpirit_BallLightning : public C_DOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    bool m_bHasAutoRemnantTalent; // offset 0x824, size 0x1, align 1
    char _pad_0825[0x3]; // offset 0x825
    float32 m_fAutoRemnantInterval; // offset 0x828, size 0x4, align 4
    int32 ball_lightning_initial_mana_base; // offset 0x82C, size 0x4, align 4
    float32 ball_lightning_initial_mana_percentage; // offset 0x830, size 0x4, align 4
    int32 ball_lightning_travel_cost_base; // offset 0x834, size 0x4, align 4
    float32 ball_lightning_travel_cost_percent; // offset 0x838, size 0x4, align 4
    int32 m_iProjectileID; // offset 0x83C, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x840, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x84C, size 0xC, align 4
    float32 m_fDistanceAccumulator; // offset 0x858, size 0x4, align 4
    float32 m_fTalentDistanceAccumulator; // offset 0x85C, size 0x4, align 4
    int32 scepter_remnant_interval; // offset 0x860, size 0x4, align 4
    char _pad_0864[0x4]; // offset 0x864
};
