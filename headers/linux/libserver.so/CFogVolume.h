#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0xBA0, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0xBA8, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0xBB0, size 0x8, align 8
    char _pad_0BB8[0x8]; // offset 0xBB8
    bool m_bDisabled; // offset 0xBC0, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0xBC1, size 0x1, align 1 | MNotSaved
    char _pad_0BC2[0x6]; // offset 0xBC2
};
