#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0xB38, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0xB40, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0xB48, size 0x8, align 8
    char _pad_0B50[0x8]; // offset 0xB50
    bool m_bDisabled; // offset 0xB58, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0xB59, size 0x1, align 1 | MNotSaved
    char _pad_0B5A[0x6]; // offset 0xB5A
};
