#pragma once

class CCitadel_Ability_Bull_Leap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bBraceParamTriggered; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x3]; // offset 0x14A1
    float32 m_flBoostYaw; // offset 0x14A4, size 0x4, align 4
    VectorWS m_vecCrashPosition; // offset 0x14A8, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x14B4, size 0xC, align 4
    ELeapState_t m_eLeapState; // offset 0x14C0, size 0x1, align 1
    char _pad_14C1[0x3]; // offset 0x14C1
    GameTime_t m_flStateEnterTime; // offset 0x14C4, size 0x4, align 255
    CCitadelAutoScaledTime m_flNextStateTime; // offset 0x14C8, size 0x18, align 255
    CCitadelAutoScaledTime m_flBoostEndTime; // offset 0x14E0, size 0x18, align 255
    char _pad_14F8[0x4D0]; // offset 0x14F8
    VectorWS m_vPrevPos; // offset 0x19C8, size 0xC, align 4
    char _pad_19D4[0x4]; // offset 0x19D4
    CUtlVector< CHandle< CBaseEntity > > m_vecDraggedEntities; // offset 0x19D8, size 0x18, align 8
    char _pad_19F0[0xC]; // offset 0x19F0
    Vector m_vecLastVel; // offset 0x19FC, size 0xC, align 4
    VectorWS m_vecCrashDownLastPos; // offset 0x1A08, size 0xC, align 4
    bool m_bInputBufferCrash; // offset 0x1A14, size 0x1, align 1
    char _pad_1A15[0xB]; // offset 0x1A15
};
