#pragma once

class CSoundEventBoxEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x6A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x5A8]; // offset 0x0
    CUtlSymbolLarge[16] m_iszBoxEntities; // offset 0x5A8, size 0x80, align 8
    char _pad_0628[0x18]; // offset 0x628
    CNetworkUtlVectorBase< SoundeventBoxHelperNetworked_t > m_vecBoxHelpersNetworked; // offset 0x640, size 0x60, align 8 | MNotSaved
};
