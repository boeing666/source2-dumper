#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0x850, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0x858, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0x860, size 0x8, align 8
    char _pad_0868[0x8]; // offset 0x868
    bool m_bDisabled; // offset 0x870, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0x871, size 0x1, align 1 | MNotSaved
    char _pad_0872[0x6]; // offset 0x872
};
