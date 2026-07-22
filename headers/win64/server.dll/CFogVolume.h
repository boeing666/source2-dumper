#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0x780, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0x788, size 0x8, align 8
    char _pad_0790[0x8]; // offset 0x790
    bool m_bDisabled; // offset 0x798, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0x799, size 0x1, align 1 | MNotSaved
    char _pad_079A[0x6]; // offset 0x79A
};
