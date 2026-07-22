#pragma once

class CPathKeyFrame : public CLogicalEntity /*0x0*/  // sizeof 0x4E0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    Vector m_Origin; // offset 0x498, size 0xC, align 4
    QAngle m_Angles; // offset 0x4A4, size 0xC, align 4
    Quaternion m_qAngle; // offset 0x4B0, size 0x10, align 16
    CUtlSymbolLarge m_iNextKey; // offset 0x4C0, size 0x8, align 8
    float32 m_flNextTime; // offset 0x4C8, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pNextKey; // offset 0x4CC, size 0x4, align 4
    CHandle< CPathKeyFrame > m_pPrevKey; // offset 0x4D0, size 0x4, align 4
    float32 m_flMoveSpeed; // offset 0x4D4, size 0x4, align 4
    char _pad_04D8[0x8]; // offset 0x4D8
};
