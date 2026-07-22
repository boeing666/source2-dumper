#pragma once

class C_PointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0x11E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1198]; // offset 0x0
    bool m_bActive; // offset 0x1198, size 0x1, align 1
    bool m_bWasActive; // offset 0x1199, size 0x1, align 1
    char _pad_119A[0x2]; // offset 0x119A
    GameTime_t m_flEndTime; // offset 0x119C, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x11A0, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0x11A4, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x11A8, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0x11B0, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0x11B8, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0x11C0, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0x11C4, size 0x4, align 4
    bool m_bListenedTo; // offset 0x11C8, size 0x1, align 1
    char _pad_11C9[0x7]; // offset 0x11C9
    CSoundPatch* m_sndCommentary; // offset 0x11D0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0x11D8, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0x11DC, size 0x1, align 1 | MNotSaved
    char _pad_11DD[0x3]; // offset 0x11DD
};
