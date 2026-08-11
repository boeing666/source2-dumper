#pragma once

class CSoundOpvarSetBoxEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x6A8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x640]; // offset 0x0
    Vector m_vDistanceInnerMins; // offset 0x640, size 0xC, align 4
    Vector m_vDistanceInnerMaxs; // offset 0x64C, size 0xC, align 4
    Vector m_vDistanceOuterMins; // offset 0x658, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x664, size 0xC, align 4
    int32 m_nBoxDirection; // offset 0x670, size 0x4, align 4
    Vector m_vInnerMins; // offset 0x674, size 0xC, align 4
    Vector m_vInnerMaxs; // offset 0x680, size 0xC, align 4
    Vector m_vOuterMins; // offset 0x68C, size 0xC, align 4
    Vector m_vOuterMaxs; // offset 0x698, size 0xC, align 4
    char _pad_06A4[0x4]; // offset 0x6A4
};
