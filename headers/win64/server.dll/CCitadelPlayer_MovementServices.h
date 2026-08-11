#pragma once

class CCitadelPlayer_MovementServices : public CPlayer_MovementServices_Humanoid /*0x0*/  // sizeof 0x2F8, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x278]; // offset 0x0
    CNetworkVelocityVector m_vPositionDeltaVelocity; // offset 0x278, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    char _pad_02A0[0x8]; // offset 0x2A0
    bool m_bToggleDuckActive; // offset 0x2A8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    bool m_bDucked; // offset 0x2A9, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bInPortalEnvironment; // offset 0x2AA, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_02AB[0x1]; // offset 0x2AB
    Vector m_vecPogoVelocity; // offset 0x2AC, size 0xC, align 4
    Vector m_vecSupport; // offset 0x2B8, size 0xC, align 4
    bool m_bColliding; // offset 0x2C4, size 0x1, align 1
    bool m_bLandedOnGround; // offset 0x2C5, size 0x1, align 1
    bool m_bHasFreeCursor; // offset 0x2C6, size 0x1, align 1
    char _pad_02C7[0x1]; // offset 0x2C7
    float32 m_flTurnSpringSpeed; // offset 0x2C8, size 0x4, align 4
    float32 m_flInputDirectionCommitment; // offset 0x2CC, size 0x4, align 4
    int8 m_nSuccessiveDirChanges; // offset 0x2D0, size 0x1, align 1
    char _pad_02D1[0x3]; // offset 0x2D1
    GameTime_t m_flLastDirChange; // offset 0x2D4, size 0x4, align 255
    Vector2D m_vLastWishDir; // offset 0x2D8, size 0x8, align 4
    char _pad_02E0[0x18]; // offset 0x2E0
};
