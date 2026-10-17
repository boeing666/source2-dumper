#pragma once

class CSoundOpvarSetBoxEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x978, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x914]; // offset 0x0
    Vector m_vDistanceInnerMins; // offset 0x914, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x920, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x92C, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x938, size 0xC, align 4
    int32 m_nBoxDirection; // offset 0x944, size 0x4, align 4
    Vector m_vInnerMins; // offset 0x948, size 0xC, align 4
    Vector m_vInnerMaxs; // offset 0x954, size 0xC, align 4
    Vector m_vOuterMins; // offset 0x960, size 0xC, align 4
    Vector m_vOuterMaxs; // offset 0x96C, size 0xC, align 4
};
