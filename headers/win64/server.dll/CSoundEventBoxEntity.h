#pragma once

class CSoundEventBoxEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x698, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x5A0]; // offset 0x0
    CUtlSymbolLarge[16] m_iszBoxEntities; // offset 0x5A0, size 0x80, align 8
    char _pad_0620[0x18]; // offset 0x620
    CNetworkUtlVectorBase< SoundeventBoxHelperNetworked_t > m_vecBoxHelpersNetworked; // offset 0x638, size 0x60, align 8 | MNotSaved
};
