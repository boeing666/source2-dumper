#pragma once

class CTriggerLook : public CTriggerOnce /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9E8]; // offset 0x0
    CHandle< CBaseEntity > m_hLookTarget; // offset 0x9E8, size 0x4, align 4
    float32 m_flFieldOfView; // offset 0x9EC, size 0x4, align 4
    float32 m_flLookTime; // offset 0x9F0, size 0x4, align 4
    float32 m_flLookTimeTotal; // offset 0x9F4, size 0x4, align 4
    GameTime_t m_flLookTimeLast; // offset 0x9F8, size 0x4, align 255
    float32 m_flTimeoutDuration; // offset 0x9FC, size 0x4, align 4
    bool m_bTimeoutFired; // offset 0xA00, size 0x1, align 1
    bool m_bIsLooking; // offset 0xA01, size 0x1, align 1
    bool m_b2DFOV; // offset 0xA02, size 0x1, align 1
    bool m_bUseVelocity; // offset 0xA03, size 0x1, align 1
    bool m_bTestOcclusion; // offset 0xA04, size 0x1, align 1
    bool m_bTestAllVisibleOcclusion; // offset 0xA05, size 0x1, align 1
    char _pad_0A06[0x2]; // offset 0xA06
    CEntityIOOutput m_OnTimeout; // offset 0xA08, size 0x18, align 255
    CEntityIOOutput m_OnStartLook; // offset 0xA20, size 0x18, align 255
    CEntityIOOutput m_OnEndLook; // offset 0xA38, size 0x18, align 255
};
