#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0xA58, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0xA60, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0xA68, size 0x8, align 8
    char _pad_0A70[0x8]; // offset 0xA70
    bool m_bDisabled; // offset 0xA78, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0xA79, size 0x1, align 1 | MNotSaved
    char _pad_0A7A[0x6]; // offset 0xA7A
};
