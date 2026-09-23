#pragma once

class CSoundEventBoxEntity : public CSoundEventMultiPointEntity /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge[16] m_iszBoxEntities; // offset 0x878, size 0x80, align 8
    char _pad_08F8[0x18]; // offset 0x8F8
    CNetworkUtlVectorBase< SoundeventBoxHelperNetworked_t > m_vecBoxHelpersNetworked; // offset 0x910, size 0x60, align 8 | MNotSaved
};
