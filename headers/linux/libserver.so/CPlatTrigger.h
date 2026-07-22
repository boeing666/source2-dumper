#pragma once

class CPlatTrigger : public CBaseModelEntity /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    CHandle< CFuncPlat > m_pPlatform; // offset 0xA4C, size 0x4, align 4
};
