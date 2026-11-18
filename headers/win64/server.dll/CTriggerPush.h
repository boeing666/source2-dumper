#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0xA30, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0xA3C, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0xA48, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0xA49, size 0x1, align 1
    char _pad_0A4A[0x6]; // offset 0xA4A
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0xA50, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0xA58, size 0x4, align 4
    uint32 m_splinePushType; // offset 0xA5C, size 0x4, align 4
    float32 m_flSpeed; // offset 0xA60, size 0x4, align 4
    char _pad_0A64[0x4]; // offset 0xA64
};
