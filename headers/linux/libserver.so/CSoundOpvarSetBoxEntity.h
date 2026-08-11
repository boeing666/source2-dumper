#pragma once

class CSoundOpvarSetBoxEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x980, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x91C]; // offset 0x0
    Vector m_vDistanceInnerMins; // offset 0x91C, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x928, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x934, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x940, size 0xC, align 4
    int32 m_nBoxDirection; // offset 0x94C, size 0x4, align 4
    Vector m_vInnerMins; // offset 0x950, size 0xC, align 4
    Vector m_vInnerMaxs; // offset 0x95C, size 0xC, align 4
    Vector m_vOuterMins; // offset 0x968, size 0xC, align 4
    Vector m_vOuterMaxs; // offset 0x974, size 0xC, align 4
};
