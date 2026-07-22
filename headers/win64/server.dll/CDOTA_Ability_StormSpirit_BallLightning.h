#pragma once

class CDOTA_Ability_StormSpirit_BallLightning : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    bool m_bHasAutoRemnantTalent; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x3]; // offset 0x591
    float32 m_fAutoRemnantInterval; // offset 0x594, size 0x4, align 4
    int32 ball_lightning_initial_mana_base; // offset 0x598, size 0x4, align 4
    float32 ball_lightning_initial_mana_percentage; // offset 0x59C, size 0x4, align 4
    int32 ball_lightning_travel_cost_base; // offset 0x5A0, size 0x4, align 4
    float32 ball_lightning_travel_cost_percent; // offset 0x5A4, size 0x4, align 4
    int32 m_iProjectileID; // offset 0x5A8, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x5AC, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x5B8, size 0xC, align 4
    float32 m_fDistanceAccumulator; // offset 0x5C4, size 0x4, align 4
    float32 m_fTalentDistanceAccumulator; // offset 0x5C8, size 0x4, align 4
    int32 scepter_remnant_interval; // offset 0x5CC, size 0x4, align 4
};
