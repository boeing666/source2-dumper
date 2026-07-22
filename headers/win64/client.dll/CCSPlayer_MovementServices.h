#pragma once

class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid /*0x0*/  // sizeof 0xFE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x310]; // offset 0x0
    CCSPlayerAnimationState m_AnimationState; // offset 0x310, size 0xE0, align 255
    bool m_bUsingGroundTopologyOffset; // offset 0x3F0, size 0x1, align 1
    char _pad_03F1[0x3]; // offset 0x3F1
    float32 m_flUsingGroundTopologyOffsetTransitionSmoothing; // offset 0x3F4, size 0x4, align 4
    Vector m_vecLadderNormal; // offset 0x3F8, size 0xC, align 4
    int32 m_nLadderSurfacePropIndex; // offset 0x404, size 0x4, align 4
    bool m_bDucked; // offset 0x408, size 0x1, align 1
    char _pad_0409[0x3]; // offset 0x409
    float32 m_flDuckAmount; // offset 0x40C, size 0x4, align 4
    float32 m_flDuckSpeed; // offset 0x410, size 0x4, align 4
    bool m_bDuckOverride; // offset 0x414, size 0x1, align 1
    bool m_bDesiresDuck; // offset 0x415, size 0x1, align 1
    bool m_bDucking; // offset 0x416, size 0x1, align 1
    char _pad_0417[0x1]; // offset 0x417
    float32 m_flDuckRootOffset; // offset 0x418, size 0x4, align 4
    float32 m_flDuckViewOffset; // offset 0x41C, size 0x4, align 4
    float32 m_flLastDuckTime; // offset 0x420, size 0x4, align 4
    float32 m_flBombPlantViewOffset; // offset 0x424, size 0x4, align 4
    char _pad_0428[0x8]; // offset 0x428
    Vector2D m_vecLastPositionAtFullCrouchSpeed; // offset 0x430, size 0x8, align 4
    bool m_duckUntilOnGround; // offset 0x438, size 0x1, align 1
    bool m_bHasWalkMovedSinceLastJump; // offset 0x439, size 0x1, align 1
    bool m_bInStuckTest; // offset 0x43A, size 0x1, align 1
    char _pad_043B[0x20D]; // offset 0x43B
    int32 m_nTraceCount; // offset 0x648, size 0x4, align 4
    int32 m_StuckLast; // offset 0x64C, size 0x4, align 4
    bool m_bSpeedCropped; // offset 0x650, size 0x1, align 1
    char _pad_0651[0x3]; // offset 0x651
    int32 m_nOldWaterLevel; // offset 0x654, size 0x4, align 4
    float32 m_flWaterEntryTime; // offset 0x658, size 0x4, align 4
    Vector m_vecForward; // offset 0x65C, size 0xC, align 4
    Vector m_vecLeft; // offset 0x668, size 0xC, align 4
    Vector m_vecUp; // offset 0x674, size 0xC, align 4
    int32 m_nGameCodeHasMovedPlayerAfterCommand; // offset 0x680, size 0x4, align 4
    GameTime_t m_fStashGrenadeParameterWhen; // offset 0x684, size 0x4, align 255
    bool m_bUseFrictionStashedSpeed; // offset 0x688, size 0x1, align 1
    char _pad_0689[0x3]; // offset 0x689
    float32 m_flUseFrictionStashedSpeedUntilFrac; // offset 0x68C, size 0x4, align 4
    float32 m_flFrictionStashedSpeed; // offset 0x690, size 0x4, align 4
    float32 m_flStamina; // offset 0x694, size 0x4, align 4
    float32 m_flHeightAtJumpStart; // offset 0x698, size 0x4, align 4
    float32 m_flMaxJumpHeightThisJump; // offset 0x69C, size 0x4, align 4
    float32 m_flMaxJumpHeightLastJump; // offset 0x6A0, size 0x4, align 4
    float32 m_flStaminaAtJumpStart; // offset 0x6A4, size 0x4, align 4
    float32 m_flVelMulAtJumpStart; // offset 0x6A8, size 0x4, align 4
    float32 m_flAccumulatedJumpError; // offset 0x6AC, size 0x4, align 4
    CCSPlayerLegacyJump m_LegacyJump; // offset 0x6B0, size 0x18, align 255
    CCSPlayerModernJump m_ModernJump; // offset 0x6C8, size 0x38, align 255
    GameTick_t m_nLastJumpTick; // offset 0x700, size 0x4, align 255
    float32 m_flLastJumpFrac; // offset 0x704, size 0x4, align 4
    float32 m_flLastJumpVelocityZ; // offset 0x708, size 0x4, align 4
    bool m_bJumpApexPending; // offset 0x70C, size 0x1, align 1
    char _pad_070D[0x3]; // offset 0x70D
    float32 m_flTicksSinceLastSurfingDetected; // offset 0x710, size 0x4, align 4
    bool m_bWasSurfing; // offset 0x714, size 0x1, align 1
    char _pad_0715[0x8F]; // offset 0x715
    Vector2D m_vecWalkWishVel; // offset 0x7A4, size 0x8, align 4
    char _pad_07AC[0x824]; // offset 0x7AC
    bool m_bHasEverProcessedCommand; // offset 0xFD0, size 0x1, align 1
    char _pad_0FD1[0xF]; // offset 0xFD1
};
