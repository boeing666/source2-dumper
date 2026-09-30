#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0x9F0, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0x9FC, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0xA08, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0xA09, size 0x1, align 1
    char _pad_0A0A[0x6]; // offset 0xA0A
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0xA10, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0xA18, size 0x4, align 4
    uint32 m_splinePushType; // offset 0xA1C, size 0x4, align 4
    float32 m_flSpeed; // offset 0xA20, size 0x4, align 4
    char _pad_0A24[0x4]; // offset 0xA24
};
