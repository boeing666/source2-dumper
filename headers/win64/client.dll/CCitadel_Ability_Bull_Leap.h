#pragma once

class CCitadel_Ability_Bull_Leap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bBraceParamTriggered; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    float32 m_flBoostYaw; // offset 0x16E4, size 0x4, align 4
    VectorWS m_vecCrashPosition; // offset 0x16E8, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x16F4, size 0xC, align 4
    ELeapState_t m_eLeapState; // offset 0x1700, size 0x1, align 1
    char _pad_1701[0x3]; // offset 0x1701
    GameTime_t m_flStateEnterTime; // offset 0x1704, size 0x4, align 255
    CCitadelAutoScaledTime m_flNextStateTime; // offset 0x1708, size 0x18, align 255
    CCitadelAutoScaledTime m_flBoostEndTime; // offset 0x1720, size 0x18, align 255
    char _pad_1738[0x4D0]; // offset 0x1738
    VectorWS m_vPrevPos; // offset 0x1C08, size 0xC, align 4
    char _pad_1C14[0x4]; // offset 0x1C14
    CUtlVector< CHandle< C_BaseEntity > > m_vecDraggedEntities; // offset 0x1C18, size 0x18, align 8
    char _pad_1C30[0xC]; // offset 0x1C30
    Vector m_vecLastVel; // offset 0x1C3C, size 0xC, align 4
    VectorWS m_vecCrashDownLastPos; // offset 0x1C48, size 0xC, align 4
    bool m_bInputBufferCrash; // offset 0x1C54, size 0x1, align 1
    char _pad_1C55[0xB]; // offset 0x1C55
};
