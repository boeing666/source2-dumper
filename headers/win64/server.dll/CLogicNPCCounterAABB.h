#pragma once

class CLogicNPCCounterAABB : public CLogicNPCCounter /*0x0*/  // sizeof 0x750, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x720]; // offset 0x0
    Vector m_vDistanceOuterMins; // offset 0x720, size 0xC, align 4
    Vector m_vDistanceOuterMaxs; // offset 0x72C, size 0xC, align 4
    Vector m_vOuterMins; // offset 0x738, size 0xC, align 4
    Vector m_vOuterMaxs; // offset 0x744, size 0xC, align 4
};
