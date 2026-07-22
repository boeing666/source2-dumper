#pragma once

class CPathKeyFrame : public CLogicalEntity /*0x0*/  // sizeof 0x7C0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    Vector m_Origin; // offset 0x778, size 0xC, align 4
    QAngle m_Angles; // offset 0x784, size 0xC, align 4
    Quaternion m_qAngle; // offset 0x790, size 0x10, align 16
    CUtlSymbolLarge m_iNextKey; // offset 0x7A0, size 0x8, align 8
    float32 m_flNextTime; // offset 0x7A8, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pNextKey; // offset 0x7AC, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pPrevKey; // offset 0x7B0, size 0x4, align 4
    float32 m_flMoveSpeed; // offset 0x7B4, size 0x4, align 4
    char _pad_07B8[0x8]; // offset 0x7B8
};
