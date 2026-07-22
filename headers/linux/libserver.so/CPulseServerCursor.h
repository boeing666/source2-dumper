#pragma once

class CPulseServerCursor : public CPulseExecCursor /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xE8]; // offset 0x0
    CHandle< CBaseEntity > m_hActivator; // offset 0xE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hCaller; // offset 0xEC, size 0x4, align 4
};
