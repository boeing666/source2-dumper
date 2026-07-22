#pragma once

class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x618]; // offset 0x0
    Vector m_vDistanceInnerMins; // offset 0x618, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x624, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x630, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x63C, size 0xC, align 4
    int32 m_nAABBDirection; // offset 0x648, size 0x4, align 4
    Vector m_vInnerMins; // offset 0x64C, size 0xC, align 4
    Vector m_vInnerMaxs; // offset 0x658, size 0xC, align 4
    Vector m_vOuterMins; // offset 0x664, size 0xC, align 4
    Vector m_vOuterMaxs; // offset 0x670, size 0xC, align 4
    char _pad_067C[0x4]; // offset 0x67C
};
