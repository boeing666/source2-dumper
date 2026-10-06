#pragma once

class CCitadel_Modifier_FearedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flWallSlideProbeDistanceMeters; // offset 0x790, size 0x4, align 4
    float32 m_flWallSlideDirectionChangeCooldown; // offset 0x794, size 0x4, align 4
    float32 m_flJumpHeightPct; // offset 0x798, size 0x4, align 4
    float32 m_flMovementConeAngle; // offset 0x79C, size 0x4, align 4
    float32 m_flSteerTurnRate; // offset 0x7A0, size 0x4, align 4
    float32 m_flReturnTurnRate; // offset 0x7A4, size 0x4, align 4
};
