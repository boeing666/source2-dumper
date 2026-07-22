#pragma once

class C_PointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0x1168, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1120]; // offset 0x0
    bool m_bActive; // offset 0x1120, size 0x1, align 1
    bool m_bWasActive; // offset 0x1121, size 0x1, align 1
    char _pad_1122[0x2]; // offset 0x1122
    GameTime_t m_flEndTime; // offset 0x1124, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x1128, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0x112C, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x1130, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0x1138, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0x1140, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0x1148, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0x114C, size 0x4, align 4
    bool m_bListenedTo; // offset 0x1150, size 0x1, align 1
    char _pad_1151[0x7]; // offset 0x1151
    CSoundPatch* m_sndCommentary; // offset 0x1158, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0x1160, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0x1164, size 0x1, align 1 | MNotSaved
    char _pad_1165[0x3]; // offset 0x1165
};
