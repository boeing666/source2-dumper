#pragma once

class CTriggerLook : public CTriggerOnce /*0x0*/  // sizeof 0xC40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    CHandle< CBaseEntity > m_hLookTarget; // offset 0xBD8, size 0x4, align 4
    float32 m_flFieldOfView; // offset 0xBDC, size 0x4, align 4
    float32 m_flLookTime; // offset 0xBE0, size 0x4, align 4
    float32 m_flLookTimeTotal; // offset 0xBE4, size 0x4, align 4
    GameTime_t m_flLookTimeLast; // offset 0xBE8, size 0x4, align 255
    float32 m_flTimeoutDuration; // offset 0xBEC, size 0x4, align 4
    bool m_bTimeoutFired; // offset 0xBF0, size 0x1, align 1
    bool m_bIsLooking; // offset 0xBF1, size 0x1, align 1
    bool m_b2DFOV; // offset 0xBF2, size 0x1, align 1
    bool m_bUseVelocity; // offset 0xBF3, size 0x1, align 1
    bool m_bTestOcclusion; // offset 0xBF4, size 0x1, align 1
    bool m_bTestAllVisibleOcclusion; // offset 0xBF5, size 0x1, align 1
    char _pad_0BF6[0x2]; // offset 0xBF6
    CEntityIOOutput m_OnTimeout; // offset 0xBF8, size 0x18, align 255
    CEntityIOOutput m_OnStartLook; // offset 0xC10, size 0x18, align 255
    CEntityIOOutput m_OnEndLook; // offset 0xC28, size 0x18, align 255
};
