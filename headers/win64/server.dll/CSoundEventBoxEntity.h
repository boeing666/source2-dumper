#pragma once

class CSoundEventBoxEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x688, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    CUtlSymbolLarge[16] m_iszBoxEntities; // offset 0x590, size 0x80, align 8
    char _pad_0610[0x18]; // offset 0x610
    CNetworkUtlVectorBase< SoundeventBoxHelperNetworked_t > m_vecBoxHelpersNetworked; // offset 0x628, size 0x60, align 8 | MNotSaved
};
