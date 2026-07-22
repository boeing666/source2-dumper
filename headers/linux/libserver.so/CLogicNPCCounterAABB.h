#pragma once

class CLogicNPCCounterAABB : public CLogicNPCCounter /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA08]; // offset 0x0
    Vector m_vDistanceOuterMins; // offset 0xA08, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0xA14, size 0xC, align 4
    VectorWS m_vOuterMins; // offset 0xA20, size 0xC, align 4
    VectorWS m_vOuterMaxs; // offset 0xA2C, size 0xC, align 4
};
