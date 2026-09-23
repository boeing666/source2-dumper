#pragma once

class C_PointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0x12C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1280]; // offset 0x0
    bool m_bActive; // offset 0x1280, size 0x1, align 1
    bool m_bWasActive; // offset 0x1281, size 0x1, align 1
    char _pad_1282[0x2]; // offset 0x1282
    GameTime_t m_flEndTime; // offset 0x1284, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x1288, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0x128C, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x1290, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0x1298, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0x12A0, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0x12A8, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0x12AC, size 0x4, align 4
    bool m_bListenedTo; // offset 0x12B0, size 0x1, align 1
    char _pad_12B1[0x7]; // offset 0x12B1
    CSoundPatch* m_sndCommentary; // offset 0x12B8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0x12C0, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0x12C4, size 0x1, align 1 | MNotSaved
    char _pad_12C5[0x3]; // offset 0x12C5
};
