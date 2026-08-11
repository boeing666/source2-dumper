#pragma once

class CCitadel_Ability_Airheart_Rocketeer3 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1470]; // offset 0x0
    ParticleIndex_t m_nJetpackFireFX; // offset 0x1470, size 0x4, align 255
    char _pad_1474[0x28]; // offset 0x1474
    Vector m_vDebugVelocityIntentModelSpace; // offset 0x149C, size 0xC, align 4
    float32 m_flDebugCoeffFactor; // offset 0x14A8, size 0x4, align 4
    bool m_bJetpackActive; // offset 0x14AC, size 0x1, align 1 | MNetworkEnable
    char _pad_14AD[0x3]; // offset 0x14AD
    GameTime_t m_tJetpackInputDownTime; // offset 0x14B0, size 0x4, align 255 | MNetworkEnable
    Vector m_vPreservedVelocity; // offset 0x14B4, size 0xC, align 4 | MNetworkEnable
    bool m_bHasLeftGround; // offset 0x14C0, size 0x1, align 1 | MNetworkEnable
    bool m_bOutOfFuelAndHaventTouchedGround; // offset 0x14C1, size 0x1, align 1 | MNetworkEnable
    EJetpackMode_t m_eMode; // offset 0x14C2, size 0x1, align 1 | MNetworkEnable
    char _pad_14C3[0x1]; // offset 0x14C3
    GameTime_t m_tModeBeginTime; // offset 0x14C4, size 0x4, align 255 | MNetworkEnable
    Vector m_vJetpackInput; // offset 0x14C8, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_tLastWallAttachTime; // offset 0x14D4, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tLastGroundedTime; // offset 0x14D8, size 0x4, align 255 | MNetworkEnable
    bool m_bQueueWallAttachJump; // offset 0x14DC, size 0x1, align 1 | MNetworkEnable
    char _pad_14DD[0x3]; // offset 0x14DD
    GameTime_t m_tOverdriveBeginTime; // offset 0x14E0, size 0x4, align 255 | MNetworkEnable
    Vector m_vIntentSpaceMPCVelocity; // offset 0x14E4, size 0xC, align 4 | MNetworkEnable
    Vector m_vIntentSpaceMPCOrigin; // offset 0x14F0, size 0xC, align 4 | MNetworkEnable
    float32 m_flIntentSpeedVerticalActual; // offset 0x14FC, size 0x4, align 4 | MNetworkEnable
    float32 m_flIntentMultiplier; // offset 0x1500, size 0x4, align 4 | MNetworkEnable
    char _pad_1504[0x4]; // offset 0x1504
};
