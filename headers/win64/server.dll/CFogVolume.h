#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0x8B8, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0x8C0, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0x8C8, size 0x8, align 8
    char _pad_08D0[0x8]; // offset 0x8D0
    bool m_bDisabled; // offset 0x8D8, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0x8D9, size 0x1, align 1 | MNotSaved
    char _pad_08DA[0x6]; // offset 0x8DA
};
