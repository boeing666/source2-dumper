#pragma once

class CPointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xB20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA40]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xA40, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xA48, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xA50, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0xA58, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xA60, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xA64, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xA68, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xA70, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xA74, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xA78, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xA79, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xA7A, size 0x1, align 1
    char _pad_0A7B[0x1]; // offset 0xA7B
    GameTime_t m_flFinishedTime; // offset 0xA7C, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0xA80, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xA8C, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xA98, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xAA4, size 0x1, align 1
    bool m_bDisabled; // offset 0xAA5, size 0x1, align 1
    char _pad_0AA6[0x2]; // offset 0xAA6
    VectorWS m_vecTeleportOrigin; // offset 0xAA8, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xAB4, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xAD0, size 0x18, align 255
    bool m_bActive; // offset 0xAE8, size 0x1, align 1
    char _pad_0AE9[0x3]; // offset 0xAE9
    GameTime_t m_flStartTime; // offset 0xAEC, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xAF0, size 0x4, align 4
    char _pad_0AF4[0x4]; // offset 0xAF4
    CUtlSymbolLarge m_iszTitle; // offset 0xAF8, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xB00, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xB08, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xB0C, size 0x4, align 4
    bool m_bListenedTo; // offset 0xB10, size 0x1, align 1
    char _pad_0B11[0xF]; // offset 0xB11
};
