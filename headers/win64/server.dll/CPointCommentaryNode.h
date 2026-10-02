#pragma once

class CPointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xBC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xAE0, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xAE8, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xAF0, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0xAF8, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xB00, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xB04, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xB08, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xB10, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xB14, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xB18, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xB19, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xB1A, size 0x1, align 1
    char _pad_0B1B[0x1]; // offset 0xB1B
    GameTime_t m_flFinishedTime; // offset 0xB1C, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0xB20, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xB2C, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xB38, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xB44, size 0x1, align 1
    bool m_bDisabled; // offset 0xB45, size 0x1, align 1
    char _pad_0B46[0x2]; // offset 0xB46
    VectorWS m_vecTeleportOrigin; // offset 0xB48, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xB54, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xB58, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xB70, size 0x18, align 255
    bool m_bActive; // offset 0xB88, size 0x1, align 1
    char _pad_0B89[0x3]; // offset 0xB89
    GameTime_t m_flStartTime; // offset 0xB8C, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xB90, size 0x4, align 4
    char _pad_0B94[0x4]; // offset 0xB94
    CUtlSymbolLarge m_iszTitle; // offset 0xB98, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xBA0, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xBA8, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xBAC, size 0x4, align 4
    bool m_bListenedTo; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0xF]; // offset 0xBB1
};
