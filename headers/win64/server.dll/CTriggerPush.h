#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0x8E8, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0x8F4, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0x900, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0x901, size 0x1, align 1
    char _pad_0902[0x6]; // offset 0x902
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0x908, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0x910, size 0x4, align 4
    uint32 m_splinePushType; // offset 0x914, size 0x4, align 4
    float32 m_flSpeed; // offset 0x918, size 0x4, align 4
    char _pad_091C[0x4]; // offset 0x91C
};
