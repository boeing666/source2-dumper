#pragma once

class CTestDomainDerived_Cursor : public CPulseExecCursor /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (pulse_system)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_nCursorValueA; // offset 0xD0, size 0x4, align 4
    int32 m_nCursorValueB; // offset 0xD4, size 0x4, align 4
};
