#pragma once

class CLogicNPCCounterAABB : public CLogicNPCCounter /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F8]; // offset 0x0
    Vector m_vDistanceOuterMins; // offset 0x9F8, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0xA04, size 0xC, align 4
    VectorWS m_vOuterMins; // offset 0xA10, size 0xC, align 4
    VectorWS m_vOuterMaxs; // offset 0xA1C, size 0xC, align 4
};
