#pragma once

class CTriggerLook : public CTriggerOnce /*0x0*/  // sizeof 0xD90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD28]; // offset 0x0
    CHandle< CBaseEntity > m_hLookTarget; // offset 0xD28, size 0x4, align 4
    float32 m_flFieldOfView; // offset 0xD2C, size 0x4, align 4
    float32 m_flLookTime; // offset 0xD30, size 0x4, align 4
    float32 m_flLookTimeTotal; // offset 0xD34, size 0x4, align 4
    GameTime_t m_flLookTimeLast; // offset 0xD38, size 0x4, align 255
    float32 m_flTimeoutDuration; // offset 0xD3C, size 0x4, align 4
    bool m_bTimeoutFired; // offset 0xD40, size 0x1, align 1
    bool m_bIsLooking; // offset 0xD41, size 0x1, align 1
    bool m_b2DFOV; // offset 0xD42, size 0x1, align 1
    bool m_bUseVelocity; // offset 0xD43, size 0x1, align 1
    bool m_bTestOcclusion; // offset 0xD44, size 0x1, align 1
    bool m_bTestAllVisibleOcclusion; // offset 0xD45, size 0x1, align 1
    char _pad_0D46[0x2]; // offset 0xD46
    CEntityIOOutput m_OnTimeout; // offset 0xD48, size 0x18, align 255
    CEntityIOOutput m_OnStartLook; // offset 0xD60, size 0x18, align 255
    CEntityIOOutput m_OnEndLook; // offset 0xD78, size 0x18, align 255
};
