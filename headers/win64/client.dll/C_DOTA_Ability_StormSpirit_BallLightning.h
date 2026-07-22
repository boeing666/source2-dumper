#pragma once

class C_DOTA_Ability_StormSpirit_BallLightning : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    bool m_bHasAutoRemnantTalent; // offset 0x6A8, size 0x1, align 1
    char _pad_06A9[0x3]; // offset 0x6A9
    float32 m_fAutoRemnantInterval; // offset 0x6AC, size 0x4, align 4
    int32 ball_lightning_initial_mana_base; // offset 0x6B0, size 0x4, align 4
    float32 ball_lightning_initial_mana_percentage; // offset 0x6B4, size 0x4, align 4
    int32 ball_lightning_travel_cost_base; // offset 0x6B8, size 0x4, align 4
    float32 ball_lightning_travel_cost_percent; // offset 0x6BC, size 0x4, align 4
    int32 m_iProjectileID; // offset 0x6C0, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x6C4, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x6D0, size 0xC, align 4
    float32 m_fDistanceAccumulator; // offset 0x6DC, size 0x4, align 4
    float32 m_fTalentDistanceAccumulator; // offset 0x6E0, size 0x4, align 4
    int32 scepter_remnant_interval; // offset 0x6E4, size 0x4, align 4
};
