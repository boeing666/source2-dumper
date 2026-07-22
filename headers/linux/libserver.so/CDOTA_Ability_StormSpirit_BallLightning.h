#pragma once

class CDOTA_Ability_StormSpirit_BallLightning : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    bool m_bHasAutoRemnantTalent; // offset 0x86C, size 0x1, align 1
    char _pad_086D[0x3]; // offset 0x86D
    float32 m_fAutoRemnantInterval; // offset 0x870, size 0x4, align 4
    int32 ball_lightning_initial_mana_base; // offset 0x874, size 0x4, align 4
    float32 ball_lightning_initial_mana_percentage; // offset 0x878, size 0x4, align 4
    int32 ball_lightning_travel_cost_base; // offset 0x87C, size 0x4, align 4
    float32 ball_lightning_travel_cost_percent; // offset 0x880, size 0x4, align 4
    int32 m_iProjectileID; // offset 0x884, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x888, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x894, size 0xC, align 4
    float32 m_fDistanceAccumulator; // offset 0x8A0, size 0x4, align 4
    float32 m_fTalentDistanceAccumulator; // offset 0x8A4, size 0x4, align 4
    int32 scepter_remnant_interval; // offset 0x8A8, size 0x4, align 4
    char _pad_08AC[0x4]; // offset 0x8AC
};
