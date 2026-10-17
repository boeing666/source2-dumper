#pragma once

class C_PointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    bool m_bActive; // offset 0xBC0, size 0x1, align 1
    bool m_bWasActive; // offset 0xBC1, size 0x1, align 1
    char _pad_0BC2[0x2]; // offset 0xBC2
    GameTime_t m_flEndTime; // offset 0xBC4, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xBC8, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xBCC, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xBD0, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0xBD8, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xBE0, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xBE8, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xBEC, size 0x4, align 4
    bool m_bListenedTo; // offset 0xBF0, size 0x1, align 1
    char _pad_0BF1[0x7]; // offset 0xBF1
    CSoundPatch* m_sndCommentary; // offset 0xBF8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xC00, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0xC04, size 0x1, align 1 | MNotSaved
    char _pad_0C05[0x3]; // offset 0xC05
};
