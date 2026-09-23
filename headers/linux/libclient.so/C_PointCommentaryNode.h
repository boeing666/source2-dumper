#pragma once

class C_PointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0x1250, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1208]; // offset 0x0
    bool m_bActive; // offset 0x1208, size 0x1, align 1
    bool m_bWasActive; // offset 0x1209, size 0x1, align 1
    char _pad_120A[0x2]; // offset 0x120A
    GameTime_t m_flEndTime; // offset 0x120C, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x1210, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0x1214, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x1218, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0x1220, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0x1228, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0x1230, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0x1234, size 0x4, align 4
    bool m_bListenedTo; // offset 0x1238, size 0x1, align 1
    char _pad_1239[0x7]; // offset 0x1239
    CSoundPatch* m_sndCommentary; // offset 0x1240, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0x1248, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0x124C, size 0x1, align 1 | MNotSaved
    char _pad_124D[0x3]; // offset 0x124D
};
