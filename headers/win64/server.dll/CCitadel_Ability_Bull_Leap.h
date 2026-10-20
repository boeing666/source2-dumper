#pragma once

class CCitadel_Ability_Bull_Leap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bBraceParamTriggered; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0x3]; // offset 0x14A9
    float32 m_flBoostYaw; // offset 0x14AC, size 0x4, align 4
    VectorWS m_vecCrashPosition; // offset 0x14B0, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x14BC, size 0xC, align 4
    ELeapState_t m_eLeapState; // offset 0x14C8, size 0x1, align 1
    char _pad_14C9[0x3]; // offset 0x14C9
    GameTime_t m_flStateEnterTime; // offset 0x14CC, size 0x4, align 255
    CCitadelAutoScaledTime m_flNextStateTime; // offset 0x14D0, size 0x18, align 255
    CCitadelAutoScaledTime m_flBoostEndTime; // offset 0x14E8, size 0x18, align 255
    char _pad_1500[0x4D0]; // offset 0x1500
    VectorWS m_vPrevPos; // offset 0x19D0, size 0xC, align 4
    char _pad_19DC[0x4]; // offset 0x19DC
    CUtlVector< CHandle< CBaseEntity > > m_vecDraggedEntities; // offset 0x19E0, size 0x18, align 8
    char _pad_19F8[0xC]; // offset 0x19F8
    Vector m_vecLastVel; // offset 0x1A04, size 0xC, align 4
    VectorWS m_vecCrashDownLastPos; // offset 0x1A10, size 0xC, align 4
    bool m_bInputBufferCrash; // offset 0x1A1C, size 0x1, align 1
    char _pad_1A1D[0xB]; // offset 0x1A1D
};
