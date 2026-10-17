#pragma once

class CPlatTrigger : public CBaseModelEntity /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    CHandle< CFuncPlat > m_pPlatform; // offset 0xB34, size 0x4, align 4
};
