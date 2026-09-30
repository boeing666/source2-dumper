#pragma once

class C_PointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xDF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    bool m_bActive; // offset 0xDB0, size 0x1, align 1
    bool m_bWasActive; // offset 0xDB1, size 0x1, align 1
    char _pad_0DB2[0x2]; // offset 0xDB2
    GameTime_t m_flEndTime; // offset 0xDB4, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xDB8, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xDBC, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xDC0, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0xDC8, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xDD0, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xDD8, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xDDC, size 0x4, align 4
    bool m_bListenedTo; // offset 0xDE0, size 0x1, align 1
    char _pad_0DE1[0x7]; // offset 0xDE1
    CSoundPatch* m_sndCommentary; // offset 0xDE8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xDF0, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0xDF4, size 0x1, align 1 | MNotSaved
    char _pad_0DF5[0x3]; // offset 0xDF5
};
