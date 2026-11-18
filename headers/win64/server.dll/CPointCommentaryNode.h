#pragma once

class CPointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x9B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0x8D8, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0x8E0, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x8E8, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0x8F0, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0x8F8, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0x8FC, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0x900, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0x908, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0x90C, size 0x4, align 4
    bool m_bPreventMovement; // offset 0x910, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0x911, size 0x1, align 1
    bool m_bUnstoppable; // offset 0x912, size 0x1, align 1
    char _pad_0913[0x1]; // offset 0x913
    GameTime_t m_flFinishedTime; // offset 0x914, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0x918, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0x924, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0x930, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0x93C, size 0x1, align 1
    bool m_bDisabled; // offset 0x93D, size 0x1, align 1
    char _pad_093E[0x2]; // offset 0x93E
    VectorWS m_vecTeleportOrigin; // offset 0x940, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0x94C, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0x950, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0x968, size 0x18, align 255
    bool m_bActive; // offset 0x980, size 0x1, align 1
    char _pad_0981[0x3]; // offset 0x981
    GameTime_t m_flStartTime; // offset 0x984, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0x988, size 0x4, align 4
    char _pad_098C[0x4]; // offset 0x98C
    CUtlSymbolLarge m_iszTitle; // offset 0x990, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0x998, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0x9A0, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0x9A4, size 0x4, align 4
    bool m_bListenedTo; // offset 0x9A8, size 0x1, align 1
    char _pad_09A9[0x7]; // offset 0x9A9
};
