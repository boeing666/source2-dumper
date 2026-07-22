#pragma once

class CCitadel_Ability_ZipLine : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1CD8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BE0]; // offset 0x0
    GameTime_t m_flActivatePressTime; // offset 0x1BE0, size 0x4, align 255
    bool m_bThinking; // offset 0x1BE4, size 0x1, align 1
    bool m_bMoveCollidedPushUp; // offset 0x1BE5, size 0x1, align 1
    bool m_bNoDelayNeeded; // offset 0x1BE6, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x1BE7, size 0x1, align 1
    EAttachState_t m_eCommittedAttachState; // offset 0x1BE8, size 0x4, align 4
    char _pad_1BEC[0x38]; // offset 0x1BEC
    GameTime_t m_flTimeStartZipping; // offset 0x1C24, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTimeForKnockdownProtection; // offset 0x1C28, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flTimeStopZipping; // offset 0x1C2C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flCasterSpeed; // offset 0x1C30, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CNetworkVelocityVector m_vecInitialVel; // offset 0x1C34, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1C5C[0xC]; // offset 0x1C5C
    Vector m_vecAttachPoint; // offset 0x1C68, size 0xC, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_pPrevNode; // offset 0x1C74, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< C_BaseEntity > m_pNextNode; // offset 0x1C78, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flTimeEnterState; // offset 0x1C7C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flLatchTime; // offset 0x1C80, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flDamagedTime; // offset 0x1C84, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    EAttachState_t m_eAttachState; // offset 0x1C88, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_iAttachedZipLineLane; // offset 0x1C8C, size 0x4, align 4 | MNetworkEnable
    bool m_bDroppedFromZipline; // offset 0x1C90, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    AttachmentHandle_t m_hAttachZipLine; // offset 0x1C91, size 0x1, align 255
    char _pad_1C92[0x2]; // offset 0x1C92
    Vector m_vAttachZipLineOffset; // offset 0x1C94, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flZiplineAirDrag; // offset 0x1CA0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vPendulumVelocity; // offset 0x1CA4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vPendulumPosition; // offset 0x1CB0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vVelocityHistory1; // offset 0x1CBC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vVelocityHistory2; // offset 0x1CC8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_iDesiredLane; // offset 0x1CD4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkChangeCallback
};
