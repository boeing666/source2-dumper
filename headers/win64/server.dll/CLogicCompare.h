#pragma once

class CLogicCompare : public CLogicalEntity /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flInValue; // offset 0x498, size 0x4, align 4
    float32 m_flCompareValue; // offset 0x49C, size 0x4, align 4
    CEntityOutputTemplate< float32 > m_OnLessThan; // offset 0x4A0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnEqualTo; // offset 0x4C0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnNotEqualTo; // offset 0x4E0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnGreaterThan; // offset 0x500, size 0x20, align 8
};
