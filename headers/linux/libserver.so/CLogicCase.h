#pragma once

class CLogicCase : public CLogicalEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge[32] m_nCase; // offset 0x778, size 0x100, align 8
    int32 m_nShuffleCases; // offset 0x878, size 0x4, align 4
    int32 m_nLastShuffleCase; // offset 0x87C, size 0x4, align 4
    uint8[32] m_uchShuffleCaseMap; // offset 0x880, size 0x20, align 1
    CEntityIOOutput[32] m_OnCase; // offset 0x8A0, size 0x300, align 8
    CEntityOutputTemplate< CUtlString > m_OnDefault; // offset 0xBA0, size 0x20, align 8
};
