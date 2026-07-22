#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0x8F0, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0x8FC, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0x908, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0x909, size 0x1, align 1
    char _pad_090A[0x6]; // offset 0x90A
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0x910, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0x918, size 0x4, align 4
    uint32 m_splinePushType; // offset 0x91C, size 0x4, align 4
    float32 m_flSpeed; // offset 0x920, size 0x4, align 4
    char _pad_0924[0x4]; // offset 0x924
};
