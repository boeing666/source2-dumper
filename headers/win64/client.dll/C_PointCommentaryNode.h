#pragma once

class C_PointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xE50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE08]; // offset 0x0
    bool m_bActive; // offset 0xE08, size 0x1, align 1
    bool m_bWasActive; // offset 0xE09, size 0x1, align 1
    char _pad_0E0A[0x2]; // offset 0xE0A
    GameTime_t m_flEndTime; // offset 0xE0C, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xE10, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xE14, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xE18, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0xE20, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xE28, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xE30, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xE34, size 0x4, align 4
    bool m_bListenedTo; // offset 0xE38, size 0x1, align 1
    char _pad_0E39[0x7]; // offset 0xE39
    CSoundPatch* m_sndCommentary; // offset 0xE40, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xE48, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0xE4C, size 0x1, align 1 | MNotSaved
    char _pad_0E4D[0x3]; // offset 0xE4D
};
