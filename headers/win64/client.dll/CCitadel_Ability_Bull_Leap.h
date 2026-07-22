#pragma once

class CCitadel_Ability_Bull_Leap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1608, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bBraceParamTriggered; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11D9[0x3]; // offset 0x11D9
    float32 m_flBoostYaw; // offset 0x11DC, size 0x4, align 4 | MNetworkEnable
    Vector m_vecCrashPosition; // offset 0x11E0, size 0xC, align 4 | MNetworkEnable
    Vector m_vecCrashDirection; // offset 0x11EC, size 0xC, align 4 | MNetworkEnable
    ELeapState_t m_eLeapState; // offset 0x11F8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_11F9[0x3]; // offset 0x11F9
    GameTime_t m_flStateEnterTime; // offset 0x11FC, size 0x4, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flNextStateTime; // offset 0x1200, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flBoostEndTime; // offset 0x1218, size 0x18, align 255 | MNetworkEnable
    char _pad_1230[0x380]; // offset 0x1230
    Vector m_vPrevPos; // offset 0x15B0, size 0xC, align 4
    char _pad_15BC[0x4]; // offset 0x15BC
    CUtlVector< CHandle< C_BaseEntity > > m_vecDraggedEntities; // offset 0x15C0, size 0x18, align 8
    char _pad_15D8[0xC]; // offset 0x15D8
    Vector m_vecLastVel; // offset 0x15E4, size 0xC, align 4
    Vector m_vecCrashDownLastPos; // offset 0x15F0, size 0xC, align 4
    bool m_bInputBufferCrash; // offset 0x15FC, size 0x1, align 1
    char _pad_15FD[0xB]; // offset 0x15FD
};
