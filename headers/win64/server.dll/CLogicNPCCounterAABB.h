#pragma once

class CLogicNPCCounterAABB : public CLogicNPCCounter /*0x0*/  // sizeof 0x748, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x718]; // offset 0x0
    Vector m_vDistanceOuterMins; // offset 0x718, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x724, size 0xC, align 4
    VectorWS m_vOuterMins; // offset 0x730, size 0xC, align 4
    VectorWS m_vOuterMaxs; // offset 0x73C, size 0xC, align 4
};
