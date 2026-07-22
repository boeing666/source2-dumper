#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0x8E0, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0x8EC, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0x8F8, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0x8F9, size 0x1, align 1
    char _pad_08FA[0x6]; // offset 0x8FA
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0x900, size 0x8, align 8
    CPathSimple* m_PathSimple; // offset 0x908, size 0x8, align 8 | MClassPtr
    uint32 m_splinePushType; // offset 0x910, size 0x4, align 4
    char _pad_0914[0x4]; // offset 0x914
};
