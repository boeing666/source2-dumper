#pragma once

class CCitadel_Ability_Dash : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14D8, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    float32 m_flDashAngle; // offset 0x14A0, size 0x4, align 4
    GameTime_t m_GroundDashExecuteTime; // offset 0x14A4, size 0x4, align 255
    GameTime_t m_GroundDashCancelExecuteTime; // offset 0x14A8, size 0x4, align 255
    int32 m_nLastGroundDashTick; // offset 0x14AC, size 0x4, align 4
    bool m_bAnglesControlActive; // offset 0x14B0, size 0x1, align 1
    char _pad_14B1[0x3]; // offset 0x14B1
    GameTime_t m_flAirDashCastTime; // offset 0x14B4, size 0x4, align 255
    VectorWS m_flAirDashStartPos; // offset 0x14B8, size 0xC, align 4
    GameTime_t m_flAirDashDragStartTime; // offset 0x14C4, size 0x4, align 255
    GameTime_t m_flParryCancelSlideEndTime; // offset 0x14C8, size 0x4, align 255
    GameTime_t m_flParryCancelAirGlideStartTime; // offset 0x14CC, size 0x4, align 255
    int8 m_nConsecutiveAirDashes; // offset 0x14D0, size 0x1, align 1
    int8 m_nConsecutiveDownDashes; // offset 0x14D1, size 0x1, align 1
    bool m_bDownAirDash; // offset 0x14D2, size 0x1, align 1
    char _pad_14D3[0x1]; // offset 0x14D3
    GameTime_t m_flAirDashDelayedEffectsTime; // offset 0x14D4, size 0x4, align 255
};
