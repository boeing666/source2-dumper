#pragma once

class CLogicCase : public CLogicalEntity /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge[32] m_nCase; // offset 0x498, size 0x100, align 8
    int32 m_nShuffleCases; // offset 0x598, size 0x4, align 4
    int32 m_nLastShuffleCase; // offset 0x59C, size 0x4, align 4
    uint8[32] m_uchShuffleCaseMap; // offset 0x5A0, size 0x20, align 1
    CEntityIOOutput[32] m_OnCase; // offset 0x5C0, size 0x300, align 8
    CEntityOutputTemplate< CUtlString > m_OnDefault; // offset 0x8C0, size 0x20, align 8
};
