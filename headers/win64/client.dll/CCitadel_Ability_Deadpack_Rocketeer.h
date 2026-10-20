#pragma once

class CCitadel_Ability_Deadpack_Rocketeer : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2730, align 0x8 [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x26B8]; // offset 0x0
    Vector m_vIntentSpaceVelocities; // offset 0x26B8, size 0xC, align 4
    Vector m_vIntentSpaceCurrent; // offset 0x26C4, size 0xC, align 4
    Vector m_vIntentSpaceTarget; // offset 0x26D0, size 0xC, align 4
    Vector m_vVelocity; // offset 0x26DC, size 0xC, align 4
    GameTime_t m_tStateEnterTime; // offset 0x26E8, size 0x4, align 255
    GameTime_t m_tGravityReductionStartTime; // offset 0x26EC, size 0x4, align 255
    GameTime_t m_tGravityReductionEndTime; // offset 0x26F0, size 0x4, align 255
    GameTime_t m_tJetpackInputHeldBeginTime; // offset 0x26F4, size 0x4, align 255
    GameTime_t m_tLastDashJumpTime; // offset 0x26F8, size 0x4, align 255
    Vector m_vSputterIntents; // offset 0x26FC, size 0xC, align 4
    Vector m_vVTOLVel; // offset 0x2708, size 0xC, align 4
    float32 m_flStartHeight; // offset 0x2714, size 0x4, align 4
    float32 m_flInitialYaw; // offset 0x2718, size 0x4, align 4
    bool m_bDiveStraightDown; // offset 0x271C, size 0x1, align 1
    char _pad_271D[0x3]; // offset 0x271D
    float32 m_flCastDelayFrac; // offset 0x2720, size 0x4, align 4
    GameTime_t m_tHeatDecayStartTime; // offset 0x2724, size 0x4, align 255
    ERocketeerState m_eState; // offset 0x2728, size 0x1, align 1
    char _pad_2729[0x7]; // offset 0x2729
};
