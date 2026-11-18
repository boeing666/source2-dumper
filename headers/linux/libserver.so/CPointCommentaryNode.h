#pragma once

class CPointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xBB8, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xBC0, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xBC8, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0xBD0, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xBD8, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xBDC, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xBE0, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xBE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xBEC, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xBF0, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xBF1, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xBF2, size 0x1, align 1
    char _pad_0BF3[0x1]; // offset 0xBF3
    GameTime_t m_flFinishedTime; // offset 0xBF4, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0xBF8, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xC04, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xC10, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xC1C, size 0x1, align 1
    bool m_bDisabled; // offset 0xC1D, size 0x1, align 1
    char _pad_0C1E[0x2]; // offset 0xC1E
    VectorWS m_vecTeleportOrigin; // offset 0xC20, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xC2C, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xC30, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xC48, size 0x18, align 255
    bool m_bActive; // offset 0xC60, size 0x1, align 1
    char _pad_0C61[0x3]; // offset 0xC61
    GameTime_t m_flStartTime; // offset 0xC64, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xC68, size 0x4, align 4
    char _pad_0C6C[0x4]; // offset 0xC6C
    CUtlSymbolLarge m_iszTitle; // offset 0xC70, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xC78, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xC80, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xC84, size 0x4, align 4
    bool m_bListenedTo; // offset 0xC88, size 0x1, align 1
    char _pad_0C89[0x7]; // offset 0xC89
};
