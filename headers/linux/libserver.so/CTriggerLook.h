#pragma once

class CTriggerLook : public CTriggerOnce /*0x0*/  // sizeof 0xD20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    CHandle< CBaseEntity > m_hLookTarget; // offset 0xCB8, size 0x4, align 4
    float32 m_flFieldOfView; // offset 0xCBC, size 0x4, align 4
    float32 m_flLookTime; // offset 0xCC0, size 0x4, align 4
    float32 m_flLookTimeTotal; // offset 0xCC4, size 0x4, align 4
    GameTime_t m_flLookTimeLast; // offset 0xCC8, size 0x4, align 255
    float32 m_flTimeoutDuration; // offset 0xCCC, size 0x4, align 4
    bool m_bTimeoutFired; // offset 0xCD0, size 0x1, align 1
    bool m_bIsLooking; // offset 0xCD1, size 0x1, align 1
    bool m_b2DFOV; // offset 0xCD2, size 0x1, align 1
    bool m_bUseVelocity; // offset 0xCD3, size 0x1, align 1
    bool m_bTestOcclusion; // offset 0xCD4, size 0x1, align 1
    bool m_bTestAllVisibleOcclusion; // offset 0xCD5, size 0x1, align 1
    char _pad_0CD6[0x2]; // offset 0xCD6
    CEntityIOOutput m_OnTimeout; // offset 0xCD8, size 0x18, align 255
    CEntityIOOutput m_OnStartLook; // offset 0xCF0, size 0x18, align 255
    CEntityIOOutput m_OnEndLook; // offset 0xD08, size 0x18, align 255
};
