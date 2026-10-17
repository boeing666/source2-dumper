#pragma once

class CPointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0x878, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x888, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0x890, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0x898, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0x89C, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0x8A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0x8A8, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0x8AC, size 0x4, align 4
    bool m_bPreventMovement; // offset 0x8B0, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0x8B1, size 0x1, align 1
    bool m_bUnstoppable; // offset 0x8B2, size 0x1, align 1
    char _pad_08B3[0x1]; // offset 0x8B3
    GameTime_t m_flFinishedTime; // offset 0x8B4, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0x8B8, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0x8C4, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0x8D0, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0x8DC, size 0x1, align 1
    bool m_bDisabled; // offset 0x8DD, size 0x1, align 1
    char _pad_08DE[0x2]; // offset 0x8DE
    VectorWS m_vecTeleportOrigin; // offset 0x8E0, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0x8EC, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0x8F0, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0x908, size 0x18, align 255
    bool m_bActive; // offset 0x920, size 0x1, align 1
    char _pad_0921[0x3]; // offset 0x921
    GameTime_t m_flStartTime; // offset 0x924, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0x928, size 0x4, align 4
    char _pad_092C[0x4]; // offset 0x92C
    CUtlSymbolLarge m_iszTitle; // offset 0x930, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0x938, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0x940, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0x944, size 0x4, align 4
    bool m_bListenedTo; // offset 0x948, size 0x1, align 1
    char _pad_0949[0x7]; // offset 0x949
};
