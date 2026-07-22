#pragma once

class CPlatTrigger : public CBaseModelEntity /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CHandle< CFuncPlat > m_pPlatform; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
};
