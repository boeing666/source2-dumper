#pragma once

class CCSPlayerAnimationState  // sizeof 0xE0, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CCSPlayerAnimationState::MoveType_t m_currentMoveType; // offset 0x10, size 0x1, align 1
    CCSPlayerAnimationState::GroundMoveState_t m_groundMoveState; // offset 0x11, size 0x1, align 1
    CCSPlayerAnimationState::Direction_t m_groundActionDirection; // offset 0x12, size 0x1, align 1
    CCSPlayerAnimationState::AirAction_t m_airAction; // offset 0x13, size 0x1, align 1
    bool m_bWasOnGroundLastUpdate; // offset 0x14, size 0x1, align 1
    bool m_bWasStationaryLastUpdate; // offset 0x15, size 0x1, align 1
    char _pad_0016[0x2]; // offset 0x16
    GameTick_t m_actionStartTick; // offset 0x18, size 0x4, align 255
    GameTick_t m_staticAimTimerStartTick; // offset 0x1C, size 0x4, align 255
    GameTick_t m_plantAndTurnStartTick; // offset 0x20, size 0x4, align 255
    float32 m_flTurnOnSpotAngle; // offset 0x24, size 0x4, align 4
    float32 m_flPreviousAimYaw; // offset 0x28, size 0x4, align 4
    float32 m_flPreviousHorizontalSpeed; // offset 0x2C, size 0x4, align 4
    float32 m_flFootIKOffsetLeft; // offset 0x30, size 0x4, align 4
    float32 m_flFootIKOffsetRight; // offset 0x34, size 0x4, align 4
    float32 m_flWeaponDropPercentageDueToMovement; // offset 0x38, size 0x4, align 4
    float32 m_flWeaponDropSmoothDampVelocity; // offset 0x3C, size 0x4, align 4
    char _pad_0040[0xA0]; // offset 0x40
};
