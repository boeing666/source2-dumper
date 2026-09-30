#pragma once

class CCitadelPlayer_MovementServices : public CPlayer_MovementServices_Humanoid /*0x0*/  // sizeof 0x320, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x290]; // offset 0x0
    CNetworkVelocityVector m_vPositionDeltaVelocity; // offset 0x290, size 0x28, align 255
    char _pad_02B8[0x8]; // offset 0x2B8
    bool m_bToggleDuckActive; // offset 0x2C0, size 0x1, align 1
    bool m_bDucked; // offset 0x2C1, size 0x1, align 1
    bool m_bInPortalEnvironment; // offset 0x2C2, size 0x1, align 1
    char _pad_02C3[0x1]; // offset 0x2C3
    Vector m_vecPogoVelocity; // offset 0x2C4, size 0xC, align 4
    float32 m_flSkyclipVelocityZ; // offset 0x2D0, size 0x4, align 4
    VectorWS m_vecSupport; // offset 0x2D4, size 0xC, align 4
    bool m_bColliding; // offset 0x2E0, size 0x1, align 1
    bool m_bLandedOnGround; // offset 0x2E1, size 0x1, align 1
    bool m_bHasFreeCursor; // offset 0x2E2, size 0x1, align 1
    char _pad_02E3[0x1]; // offset 0x2E3
    float32 m_flPawnTurnSpringSpeed; // offset 0x2E4, size 0x4, align 4
    float32 m_flAG2TurnSpeed; // offset 0x2E8, size 0x4, align 4
    float32 m_flAG2TurnSpeedSpringSpeed; // offset 0x2EC, size 0x4, align 4
    float32 m_flInputDirectionCommitment; // offset 0x2F0, size 0x4, align 4
    int8 m_nSuccessiveDirChanges; // offset 0x2F4, size 0x1, align 1
    char _pad_02F5[0x3]; // offset 0x2F5
    GameTime_t m_flLastDirChange; // offset 0x2F8, size 0x4, align 255
    Vector2D m_vLastWishDir; // offset 0x2FC, size 0x8, align 4
    char _pad_0304[0x1C]; // offset 0x304
};
