#pragma once

class C_PointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xD08, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    bool m_bActive; // offset 0xCC0, size 0x1, align 1 | MNetworkEnable
    bool m_bWasActive; // offset 0xCC1, size 0x1, align 1
    char _pad_0CC2[0x2]; // offset 0xCC2
    GameTime_t m_flEndTime; // offset 0xCC4, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0xCC8, size 0x4, align 255 | MNetworkEnable
    float32 m_flStartTimeInCommentary; // offset 0xCCC, size 0x4, align 4 | MNetworkEnable
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xCD0, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszTitle; // offset 0xCD8, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszSpeakers; // offset 0xCE0, size 0x8, align 8 | MNetworkEnable
    int32 m_iNodeNumber; // offset 0xCE8, size 0x4, align 4 | MNetworkEnable
    int32 m_iNodeNumberMax; // offset 0xCEC, size 0x4, align 4 | MNetworkEnable
    bool m_bListenedTo; // offset 0xCF0, size 0x1, align 1 | MNetworkEnable
    char _pad_0CF1[0x7]; // offset 0xCF1
    CSoundPatch* m_sndCommentary; // offset 0xCF8, size 0x8, align 8 | MSaveOpsForField
    CHandle< C_BaseEntity > m_hViewPosition; // offset 0xD00, size 0x4, align 4 | MNetworkEnable
    bool m_bRestartAfterRestore; // offset 0xD04, size 0x1, align 1 | MNotSaved
    char _pad_0D05[0x3]; // offset 0xD05
};
