#pragma once

class CLogicCompare : public CLogicalEntity /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flInValue; // offset 0x778, size 0x4, align 4
    float32 m_flCompareValue; // offset 0x77C, size 0x4, align 4
    CEntityOutputTemplate< float32 > m_OnLessThan; // offset 0x780, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnEqualTo; // offset 0x7A0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnNotEqualTo; // offset 0x7C0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnGreaterThan; // offset 0x7E0, size 0x20, align 8
};
