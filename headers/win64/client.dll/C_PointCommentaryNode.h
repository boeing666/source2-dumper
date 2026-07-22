#pragma once

class C_PointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAD8]; // offset 0x0
    bool m_bActive; // offset 0xAD8, size 0x1, align 1
    bool m_bWasActive; // offset 0xAD9, size 0x1, align 1
    char _pad_0ADA[0x2]; // offset 0xADA
    GameTime_t m_flEndTime; // offset 0xADC, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xAE0, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xAE4, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xAE8, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0xAF0, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xAF8, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xB00, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xB04, size 0x4, align 4
    bool m_bListenedTo; // offset 0xB08, size 0x1, align 1
    char _pad_0B09[0x7]; // offset 0xB09
    CSoundPatch* m_sndCommentary; // offset 0xB10, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xB18, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0xB1C, size 0x1, align 1 | MNotSaved
    char _pad_0B1D[0x3]; // offset 0xB1D
};
