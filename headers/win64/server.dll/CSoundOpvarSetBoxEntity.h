#pragma once

class CSoundOpvarSetBoxEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x6A0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x638]; // offset 0x0
    Vector m_vDistanceInnerMins; // offset 0x638, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x644, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x650, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x65C, size 0xC, align 4
    int32 m_nBoxDirection; // offset 0x668, size 0x4, align 4
    Vector m_vInnerMins; // offset 0x66C, size 0xC, align 4
    Vector m_vInnerMaxs; // offset 0x678, size 0xC, align 4
    Vector m_vOuterMins; // offset 0x684, size 0xC, align 4
    Vector m_vOuterMaxs; // offset 0x690, size 0xC, align 4
    char _pad_069C[0x4]; // offset 0x69C
};
