#pragma once

class CPlatTrigger : public CBaseModelEntity /*0x0*/  // sizeof 0xBA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    CHandle< CFuncPlat > m_pPlatform; // offset 0xB9C, size 0x4, align 4
};
