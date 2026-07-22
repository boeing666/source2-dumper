#pragma once

class CFogVolume : public CServerOnlyModelEntity /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CUtlSymbolLarge m_fogName; // offset 0xA50, size 0x8, align 8
    CUtlSymbolLarge m_postProcessName; // offset 0xA58, size 0x8, align 8
    CUtlSymbolLarge m_colorCorrectionName; // offset 0xA60, size 0x8, align 8
    char _pad_0A68[0x8]; // offset 0xA68
    bool m_bDisabled; // offset 0xA70, size 0x1, align 1
    bool m_bInFogVolumesList; // offset 0xA71, size 0x1, align 1 | MNotSaved
    char _pad_0A72[0x6]; // offset 0xA72
};
