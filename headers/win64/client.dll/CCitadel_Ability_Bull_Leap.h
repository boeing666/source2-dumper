#pragma once

class CCitadel_Ability_Bull_Leap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bBraceParamTriggered; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    float32 m_flBoostYaw; // offset 0x16DC, size 0x4, align 4
    VectorWS m_vecCrashPosition; // offset 0x16E0, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x16EC, size 0xC, align 4
    ELeapState_t m_eLeapState; // offset 0x16F8, size 0x1, align 1
    char _pad_16F9[0x3]; // offset 0x16F9
    GameTime_t m_flStateEnterTime; // offset 0x16FC, size 0x4, align 255
    CCitadelAutoScaledTime m_flNextStateTime; // offset 0x1700, size 0x18, align 255
    CCitadelAutoScaledTime m_flBoostEndTime; // offset 0x1718, size 0x18, align 255
    char _pad_1730[0x4D0]; // offset 0x1730
    VectorWS m_vPrevPos; // offset 0x1C00, size 0xC, align 4
    char _pad_1C0C[0x4]; // offset 0x1C0C
    CUtlVector< CHandle< C_BaseEntity > > m_vecDraggedEntities; // offset 0x1C10, size 0x18, align 8
    char _pad_1C28[0xC]; // offset 0x1C28
    Vector m_vecLastVel; // offset 0x1C34, size 0xC, align 4
    VectorWS m_vecCrashDownLastPos; // offset 0x1C40, size 0xC, align 4
    bool m_bInputBufferCrash; // offset 0x1C4C, size 0x1, align 1
    char _pad_1C4D[0xB]; // offset 0x1C4D
};
