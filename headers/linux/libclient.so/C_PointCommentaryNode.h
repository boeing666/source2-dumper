#pragma once

class C_PointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD48]; // offset 0x0
    bool m_bActive; // offset 0xD48, size 0x1, align 1
    bool m_bWasActive; // offset 0xD49, size 0x1, align 1
    char _pad_0D4A[0x2]; // offset 0xD4A
    GameTime_t m_flEndTime; // offset 0xD4C, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xD50, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xD54, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xD58, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0xD60, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xD68, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xD70, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xD74, size 0x4, align 4
    bool m_bListenedTo; // offset 0xD78, size 0x1, align 1
    char _pad_0D79[0x7]; // offset 0xD79
    CSoundPatch* m_sndCommentary; // offset 0xD80, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xD88, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0xD8C, size 0x1, align 1 | MNotSaved
    char _pad_0D8D[0x3]; // offset 0xD8D
};
