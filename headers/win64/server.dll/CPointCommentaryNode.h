#pragma once

class CPointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0x798, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0x7A0, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x7A8, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0x7B0, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0x7B8, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0x7BC, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0x7C0, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0x7C8, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0x7CC, size 0x4, align 4
    bool m_bPreventMovement; // offset 0x7D0, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0x7D1, size 0x1, align 1
    bool m_bUnstoppable; // offset 0x7D2, size 0x1, align 1
    char _pad_07D3[0x1]; // offset 0x7D3
    GameTime_t m_flFinishedTime; // offset 0x7D4, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0x7D8, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0x7E4, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0x7F0, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0x7FC, size 0x1, align 1
    bool m_bDisabled; // offset 0x7FD, size 0x1, align 1
    char _pad_07FE[0x2]; // offset 0x7FE
    VectorWS m_vecTeleportOrigin; // offset 0x800, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0x80C, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0x810, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0x828, size 0x18, align 255
    bool m_bActive; // offset 0x840, size 0x1, align 1
    char _pad_0841[0x3]; // offset 0x841
    GameTime_t m_flStartTime; // offset 0x844, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
    CUtlSymbolLarge m_iszTitle; // offset 0x850, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0x858, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0x860, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0x864, size 0x4, align 4
    bool m_bListenedTo; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x7]; // offset 0x869
};
