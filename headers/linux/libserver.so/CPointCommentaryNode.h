#pragma once

class CPointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xE00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xD20, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xD28, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xD30, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0xD38, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xD40, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xD44, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xD48, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xD50, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xD54, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xD58, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xD59, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xD5A, size 0x1, align 1
    char _pad_0D5B[0x1]; // offset 0xD5B
    GameTime_t m_flFinishedTime; // offset 0xD5C, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0xD60, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xD6C, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xD78, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xD84, size 0x1, align 1
    bool m_bDisabled; // offset 0xD85, size 0x1, align 1
    char _pad_0D86[0x2]; // offset 0xD86
    VectorWS m_vecTeleportOrigin; // offset 0xD88, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xD94, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xD98, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xDB0, size 0x18, align 255
    bool m_bActive; // offset 0xDC8, size 0x1, align 1
    char _pad_0DC9[0x3]; // offset 0xDC9
    GameTime_t m_flStartTime; // offset 0xDCC, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xDD0, size 0x4, align 4
    char _pad_0DD4[0x4]; // offset 0xDD4
    CUtlSymbolLarge m_iszTitle; // offset 0xDD8, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xDE0, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xDE8, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xDEC, size 0x4, align 4
    bool m_bListenedTo; // offset 0xDF0, size 0x1, align 1
    char _pad_0DF1[0xF]; // offset 0xDF1
};
