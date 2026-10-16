#pragma once

class CCitadel_Ability_Deadpack_Rocketeer : public CCitadelBaseAbility /*0x0*/  // sizeof 0x24D8, align 0x8 [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x2460]; // offset 0x0
    Vector m_vIntentSpaceVelocities; // offset 0x2460, size 0xC, align 4
    Vector m_vIntentSpaceCurrent; // offset 0x246C, size 0xC, align 4
    Vector m_vIntentSpaceTarget; // offset 0x2478, size 0xC, align 4
    Vector m_vVelocity; // offset 0x2484, size 0xC, align 4
    GameTime_t m_tStateEnterTime; // offset 0x2490, size 0x4, align 255
    GameTime_t m_tGravityReductionStartTime; // offset 0x2494, size 0x4, align 255
    GameTime_t m_tGravityReductionEndTime; // offset 0x2498, size 0x4, align 255
    GameTime_t m_tJetpackInputHeldBeginTime; // offset 0x249C, size 0x4, align 255
    GameTime_t m_tLastDashJumpTime; // offset 0x24A0, size 0x4, align 255
    Vector m_vSputterIntents; // offset 0x24A4, size 0xC, align 4
    Vector m_vVTOLVel; // offset 0x24B0, size 0xC, align 4
    float32 m_flStartHeight; // offset 0x24BC, size 0x4, align 4
    float32 m_flInitialYaw; // offset 0x24C0, size 0x4, align 4
    bool m_bDiveStraightDown; // offset 0x24C4, size 0x1, align 1
    char _pad_24C5[0x3]; // offset 0x24C5
    float32 m_flCastDelayFrac; // offset 0x24C8, size 0x4, align 4
    GameTime_t m_tHeatDecayStartTime; // offset 0x24CC, size 0x4, align 255
    ERocketeerState m_eState; // offset 0x24D0, size 0x1, align 1
    char _pad_24D1[0x7]; // offset 0x24D1
};
