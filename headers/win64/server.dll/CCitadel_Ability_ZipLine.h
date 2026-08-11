#pragma once

class CCitadel_Ability_ZipLine : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1970]; // offset 0x0
    GameTime_t m_flActivatePressTime; // offset 0x1970, size 0x4, align 255
    bool m_bThinking; // offset 0x1974, size 0x1, align 1
    bool m_bMoveCollidedPushUp; // offset 0x1975, size 0x1, align 1
    bool m_bNoDelayNeeded; // offset 0x1976, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x1977, size 0x1, align 1
    EAttachState_t m_eCommittedAttachState; // offset 0x1978, size 0x4, align 4
    char _pad_197C[0x2C]; // offset 0x197C
    GameTime_t m_flTimeStartZipping; // offset 0x19A8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTimeForKnockdownProtection; // offset 0x19AC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTimeStopZipping; // offset 0x19B0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flCasterSpeed; // offset 0x19B4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CNetworkVelocityVector m_vecInitialVel; // offset 0x19B8, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_19E0[0x8]; // offset 0x19E0
    Vector m_vecAttachPoint; // offset 0x19E8, size 0xC, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_pPrevNode; // offset 0x19F4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< CBaseEntity > m_pNextNode; // offset 0x19F8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flTimeEnterState; // offset 0x19FC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flLatchTime; // offset 0x1A00, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flDamagedTime; // offset 0x1A04, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    EAttachState_t m_eAttachState; // offset 0x1A08, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_iAttachedZipLineLane; // offset 0x1A0C, size 0x4, align 4 | MNetworkEnable
    bool m_bDroppedFromZipline; // offset 0x1A10, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    AttachmentHandle_t m_hAttachZipLine; // offset 0x1A11, size 0x1, align 255
    char _pad_1A12[0x2]; // offset 0x1A12
    Vector m_vAttachZipLineOffset; // offset 0x1A14, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flZiplineAirDrag; // offset 0x1A20, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vPendulumVelocity; // offset 0x1A24, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vPendulumPosition; // offset 0x1A30, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vVelocityHistory1; // offset 0x1A3C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vVelocityHistory2; // offset 0x1A48, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_iDesiredLane; // offset 0x1A54, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
};
