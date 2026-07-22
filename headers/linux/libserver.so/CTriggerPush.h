#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC4]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0xBC4, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0xBD0, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0xBDC, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0xBDD, size 0x1, align 1
    char _pad_0BDE[0x2]; // offset 0xBDE
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0xBE0, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0xBE8, size 0x4, align 4
    uint32 m_splinePushType; // offset 0xBEC, size 0x4, align 4
    float32 m_flSpeed; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
};
