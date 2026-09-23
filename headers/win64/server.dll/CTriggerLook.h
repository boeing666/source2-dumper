#pragma once

class CTriggerLook : public CTriggerOnce /*0x0*/  // sizeof 0xA48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9E0]; // offset 0x0
    CHandle< CBaseEntity > m_hLookTarget; // offset 0x9E0, size 0x4, align 4
    float32 m_flFieldOfView; // offset 0x9E4, size 0x4, align 4
    float32 m_flLookTime; // offset 0x9E8, size 0x4, align 4
    float32 m_flLookTimeTotal; // offset 0x9EC, size 0x4, align 4
    GameTime_t m_flLookTimeLast; // offset 0x9F0, size 0x4, align 255
    float32 m_flTimeoutDuration; // offset 0x9F4, size 0x4, align 4
    bool m_bTimeoutFired; // offset 0x9F8, size 0x1, align 1
    bool m_bIsLooking; // offset 0x9F9, size 0x1, align 1
    bool m_b2DFOV; // offset 0x9FA, size 0x1, align 1
    bool m_bUseVelocity; // offset 0x9FB, size 0x1, align 1
    bool m_bTestOcclusion; // offset 0x9FC, size 0x1, align 1
    bool m_bTestAllVisibleOcclusion; // offset 0x9FD, size 0x1, align 1
    char _pad_09FE[0x2]; // offset 0x9FE
    CEntityIOOutput m_OnTimeout; // offset 0xA00, size 0x18, align 255
    CEntityIOOutput m_OnStartLook; // offset 0xA18, size 0x18, align 255
    CEntityIOOutput m_OnEndLook; // offset 0xA30, size 0x18, align 255
};
