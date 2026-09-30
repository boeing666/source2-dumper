#pragma once

class CCitadel_Ability_Dash : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1718, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    float32 m_flDashAngle; // offset 0x16D8, size 0x4, align 4
    GameTime_t m_GroundDashExecuteTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_GroundDashCancelExecuteTime; // offset 0x16E0, size 0x4, align 255
    int32 m_nLastGroundDashTick; // offset 0x16E4, size 0x4, align 4
    bool m_bAnglesControlActive; // offset 0x16E8, size 0x1, align 1
    char _pad_16E9[0x3]; // offset 0x16E9
    GameTime_t m_flAirDashCastTime; // offset 0x16EC, size 0x4, align 255
    VectorWS m_flAirDashStartPos; // offset 0x16F0, size 0xC, align 4
    GameTime_t m_flAirDashDragStartTime; // offset 0x16FC, size 0x4, align 255
    GameTime_t m_flParryCancelSlideEndTime; // offset 0x1700, size 0x4, align 255
    GameTime_t m_flParryCancelAirGlideStartTime; // offset 0x1704, size 0x4, align 255
    int8 m_nConsecutiveAirDashes; // offset 0x1708, size 0x1, align 1
    int8 m_nConsecutiveDownDashes; // offset 0x1709, size 0x1, align 1
    bool m_bDownAirDash; // offset 0x170A, size 0x1, align 1
    char _pad_170B[0x1]; // offset 0x170B
    CHandle< CCitadel_Ability_Jump > m_hJumpAbility; // offset 0x170C, size 0x4, align 4
    GameTime_t m_flAirDashDelayedEffectsTime; // offset 0x1710, size 0x4, align 255
    char _pad_1714[0x4]; // offset 0x1714
};
