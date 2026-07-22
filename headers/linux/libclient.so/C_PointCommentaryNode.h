#pragma once

class C_PointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    bool m_bActive; // offset 0xC60, size 0x1, align 1
    bool m_bWasActive; // offset 0xC61, size 0x1, align 1
    char _pad_0C62[0x2]; // offset 0xC62
    GameTime_t m_flEndTime; // offset 0xC64, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xC68, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xC6C, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xC70, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0xC78, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xC80, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xC88, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xC8C, size 0x4, align 4
    bool m_bListenedTo; // offset 0xC90, size 0x1, align 1
    char _pad_0C91[0x7]; // offset 0xC91
    CSoundPatch* m_sndCommentary; // offset 0xC98, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xCA0, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0xCA4, size 0x1, align 1 | MNotSaved
    char _pad_0CA5[0x3]; // offset 0xCA5
};
