#pragma once

class CCitadel_Ability_Bull_Leap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x13A0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bBraceParamTriggered; // offset 0xF70, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F71[0x3]; // offset 0xF71
    float32 m_flBoostYaw; // offset 0xF74, size 0x4, align 4 | MNetworkEnable
    Vector m_vecCrashPosition; // offset 0xF78, size 0xC, align 4 | MNetworkEnable
    Vector m_vecCrashDirection; // offset 0xF84, size 0xC, align 4 | MNetworkEnable
    ELeapState_t m_eLeapState; // offset 0xF90, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0F91[0x3]; // offset 0xF91
    GameTime_t m_flStateEnterTime; // offset 0xF94, size 0x4, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flNextStateTime; // offset 0xF98, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flBoostEndTime; // offset 0xFB0, size 0x18, align 255 | MNetworkEnable
    char _pad_0FC8[0x380]; // offset 0xFC8
    Vector m_vPrevPos; // offset 0x1348, size 0xC, align 4
    char _pad_1354[0x4]; // offset 0x1354
    CUtlVector< CHandle< CBaseEntity > > m_vecDraggedEntities; // offset 0x1358, size 0x18, align 8
    char _pad_1370[0xC]; // offset 0x1370
    Vector m_vecLastVel; // offset 0x137C, size 0xC, align 4
    Vector m_vecCrashDownLastPos; // offset 0x1388, size 0xC, align 4
    bool m_bInputBufferCrash; // offset 0x1394, size 0x1, align 1
    char _pad_1395[0xB]; // offset 0x1395
};
