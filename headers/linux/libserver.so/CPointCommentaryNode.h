#pragma once

class CPointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xB50, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xB58, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xB60, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0xB68, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xB70, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xB74, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xB78, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xB80, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xB84, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xB88, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xB89, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xB8A, size 0x1, align 1
    char _pad_0B8B[0x1]; // offset 0xB8B
    GameTime_t m_flFinishedTime; // offset 0xB8C, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0xB90, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xB9C, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xBA8, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xBB4, size 0x1, align 1
    bool m_bDisabled; // offset 0xBB5, size 0x1, align 1
    char _pad_0BB6[0x2]; // offset 0xBB6
    VectorWS m_vecTeleportOrigin; // offset 0xBB8, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xBC4, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xBC8, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xBE0, size 0x18, align 255
    bool m_bActive; // offset 0xBF8, size 0x1, align 1
    char _pad_0BF9[0x3]; // offset 0xBF9
    GameTime_t m_flStartTime; // offset 0xBFC, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xC00, size 0x4, align 4
    char _pad_0C04[0x4]; // offset 0xC04
    CUtlSymbolLarge m_iszTitle; // offset 0xC08, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xC10, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xC18, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xC1C, size 0x4, align 4
    bool m_bListenedTo; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0x7]; // offset 0xC21
};
