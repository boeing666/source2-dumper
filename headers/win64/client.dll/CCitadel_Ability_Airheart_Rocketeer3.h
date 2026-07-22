#pragma once

class CCitadel_Ability_Airheart_Rocketeer3 : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1770, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1708]; // offset 0x0
    Vector m_vDebugVelocityIntentModelSpace; // offset 0x1708, size 0xC, align 4
    float32 m_flDebugCoeffFactor; // offset 0x1714, size 0x4, align 4
    bool m_bJetpackActive; // offset 0x1718, size 0x1, align 1 | MNetworkEnable
    char _pad_1719[0x3]; // offset 0x1719
    GameTime_t m_tJetpackInputDownTime; // offset 0x171C, size 0x4, align 255 | MNetworkEnable
    Vector m_vPreservedVelocity; // offset 0x1720, size 0xC, align 4 | MNetworkEnable
    bool m_bHasLeftGround; // offset 0x172C, size 0x1, align 1 | MNetworkEnable
    bool m_bOutOfFuelAndHaventTouchedGround; // offset 0x172D, size 0x1, align 1 | MNetworkEnable
    EJetpackMode_t m_eMode; // offset 0x172E, size 0x1, align 1 | MNetworkEnable
    char _pad_172F[0x1]; // offset 0x172F
    GameTime_t m_tModeBeginTime; // offset 0x1730, size 0x4, align 255 | MNetworkEnable
    Vector m_vJetpackInput; // offset 0x1734, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_tLastWallAttachTime; // offset 0x1740, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tLastGroundedTime; // offset 0x1744, size 0x4, align 255 | MNetworkEnable
    bool m_bQueueWallAttachJump; // offset 0x1748, size 0x1, align 1 | MNetworkEnable
    char _pad_1749[0x3]; // offset 0x1749
    GameTime_t m_tOverdriveBeginTime; // offset 0x174C, size 0x4, align 255 | MNetworkEnable
    Vector m_vIntentSpaceMPCVelocity; // offset 0x1750, size 0xC, align 4 | MNetworkEnable
    Vector m_vIntentSpaceMPCOrigin; // offset 0x175C, size 0xC, align 4 | MNetworkEnable
    float32 m_flIntentSpeedVerticalActual; // offset 0x1768, size 0x4, align 4 | MNetworkEnable
    float32 m_flIntentMultiplier; // offset 0x176C, size 0x4, align 4 | MNetworkEnable
};
