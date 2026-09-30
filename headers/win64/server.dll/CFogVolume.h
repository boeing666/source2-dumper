#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0x878, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0x888, size 0x8, align 8
    char _pad_0890[0x8]; // offset 0x890
    bool m_bDisabled; // offset 0x898, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0x899, size 0x1, align 1 | MNotSaved
    char _pad_089A[0x6]; // offset 0x89A
};
