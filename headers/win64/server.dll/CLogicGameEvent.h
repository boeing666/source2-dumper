#pragma once

class CLogicGameEvent : public CLogicalEntity /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge m_iszEventName; // offset 0x498, size 0x8, align 8
};
