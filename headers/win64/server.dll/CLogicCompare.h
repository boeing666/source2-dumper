#pragma once

class CLogicCompare : public CLogicalEntity /*0x0*/  // sizeof 0x530, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_flInValue; // offset 0x4A8, size 0x4, align 4
    float32 m_flCompareValue; // offset 0x4AC, size 0x4, align 4
    CEntityOutputTemplate< float32 > m_OnLessThan; // offset 0x4B0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnEqualTo; // offset 0x4D0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnNotEqualTo; // offset 0x4F0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnGreaterThan; // offset 0x510, size 0x20, align 8
};
