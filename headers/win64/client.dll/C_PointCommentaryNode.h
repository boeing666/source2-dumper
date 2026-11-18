#pragma once

class C_PointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC20]; // offset 0x0
    bool m_bActive; // offset 0xC20, size 0x1, align 1
    bool m_bWasActive; // offset 0xC21, size 0x1, align 1
    char _pad_0C22[0x2]; // offset 0xC22
    GameTime_t m_flEndTime; // offset 0xC24, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xC28, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xC2C, size 0x4, align 4
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xC30, size 0x8, align 8
    CUtlSymbolLarge m_iszTitle; // offset 0xC38, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xC40, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xC48, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xC4C, size 0x4, align 4
    bool m_bListenedTo; // offset 0xC50, size 0x1, align 1
    char _pad_0C51[0x7]; // offset 0xC51
    CSoundPatch* m_sndCommentary; // offset 0xC58, size 0x8, align 8
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xC60, size 0x4, align 4
    bool m_bRestartAfterRestore; // offset 0xC64, size 0x1, align 1 | MNotSaved
    char _pad_0C65[0x3]; // offset 0xC65
};
