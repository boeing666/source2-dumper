#pragma once

class CTriggerLook : public CTriggerOnce /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x908]; // offset 0x0
    CHandle< CBaseEntity > m_hLookTarget; // offset 0x908, size 0x4, align 4
    float32 m_flFieldOfView; // offset 0x90C, size 0x4, align 4
    float32 m_flLookTime; // offset 0x910, size 0x4, align 4
    float32 m_flLookTimeTotal; // offset 0x914, size 0x4, align 4
    GameTime_t m_flLookTimeLast; // offset 0x918, size 0x4, align 255
    float32 m_flTimeoutDuration; // offset 0x91C, size 0x4, align 4
    bool m_bTimeoutFired; // offset 0x920, size 0x1, align 1
    bool m_bIsLooking; // offset 0x921, size 0x1, align 1
    bool m_b2DFOV; // offset 0x922, size 0x1, align 1
    bool m_bUseVelocity; // offset 0x923, size 0x1, align 1
    bool m_bTestOcclusion; // offset 0x924, size 0x1, align 1
    bool m_bTestAllVisibleOcclusion; // offset 0x925, size 0x1, align 1
    char _pad_0926[0x2]; // offset 0x926
    CEntityIOOutput m_OnTimeout; // offset 0x928, size 0x18, align 255
    CEntityIOOutput m_OnStartLook; // offset 0x940, size 0x18, align 255
    CEntityIOOutput m_OnEndLook; // offset 0x958, size 0x18, align 255
};
