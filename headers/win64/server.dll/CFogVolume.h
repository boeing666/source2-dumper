#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0x770, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0x780, size 0x8, align 8
    char _pad_0788[0x8]; // offset 0x788
    bool m_bDisabled; // offset 0x790, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0x791, size 0x1, align 1 | MNotSaved
    char _pad_0792[0x6]; // offset 0x792
};
