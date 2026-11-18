#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0xD40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD0C]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0xD0C, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0xD18, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0xD24, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0xD25, size 0x1, align 1
    char _pad_0D26[0x2]; // offset 0xD26
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0xD28, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0xD30, size 0x4, align 4
    uint32 m_splinePushType; // offset 0xD34, size 0x4, align 4
    float32 m_flSpeed; // offset 0xD38, size 0x4, align 4
    char _pad_0D3C[0x4]; // offset 0xD3C
};
