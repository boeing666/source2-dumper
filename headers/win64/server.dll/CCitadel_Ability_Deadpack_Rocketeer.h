#pragma once

class CCitadel_Ability_Deadpack_Rocketeer : public CCitadelBaseAbility /*0x0*/  // sizeof 0x24F0, align 0x8 [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x2478]; // offset 0x0
    Vector m_vIntentSpaceVelocities; // offset 0x2478, size 0xC, align 4
    Vector m_vIntentSpaceCurrent; // offset 0x2484, size 0xC, align 4
    Vector m_vIntentSpaceTarget; // offset 0x2490, size 0xC, align 4
    Vector m_vVelocity; // offset 0x249C, size 0xC, align 4
    GameTime_t m_tStateEnterTime; // offset 0x24A8, size 0x4, align 255
    GameTime_t m_tGravityReductionStartTime; // offset 0x24AC, size 0x4, align 255
    GameTime_t m_tGravityReductionEndTime; // offset 0x24B0, size 0x4, align 255
    GameTime_t m_tJetpackInputHeldBeginTime; // offset 0x24B4, size 0x4, align 255
    GameTime_t m_tLastDashJumpTime; // offset 0x24B8, size 0x4, align 255
    Vector m_vSputterIntents; // offset 0x24BC, size 0xC, align 4
    Vector m_vVTOLVel; // offset 0x24C8, size 0xC, align 4
    float32 m_flStartHeight; // offset 0x24D4, size 0x4, align 4
    float32 m_flInitialYaw; // offset 0x24D8, size 0x4, align 4
    bool m_bDiveStraightDown; // offset 0x24DC, size 0x1, align 1
    char _pad_24DD[0x3]; // offset 0x24DD
    float32 m_flCastDelayFrac; // offset 0x24E0, size 0x4, align 4
    GameTime_t m_tHeatDecayStartTime; // offset 0x24E4, size 0x4, align 255
    ERocketeerState m_eState; // offset 0x24E8, size 0x1, align 1
    char _pad_24E9[0x7]; // offset 0x24E9
};
