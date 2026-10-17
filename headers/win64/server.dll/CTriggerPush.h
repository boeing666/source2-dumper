#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0x9D0, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0x9DC, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0x9E8, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0x9E9, size 0x1, align 1
    char _pad_09EA[0x6]; // offset 0x9EA
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0x9F0, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0x9F8, size 0x4, align 4
    uint32 m_splinePushType; // offset 0x9FC, size 0x4, align 4
    float32 m_flSpeed; // offset 0xA00, size 0x4, align 4
    char _pad_0A04[0x4]; // offset 0xA04
};
