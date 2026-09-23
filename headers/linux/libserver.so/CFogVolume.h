#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0xB30, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0xB38, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0xB40, size 0x8, align 8
    char _pad_0B48[0x8]; // offset 0xB48
    bool m_bDisabled; // offset 0xB50, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0xB51, size 0x1, align 1 | MNotSaved
    char _pad_0B52[0x6]; // offset 0xB52
};
