#pragma once

class CPointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xA40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x960]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0x960, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0x968, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0x970, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0x978, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0x980, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0x984, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0x988, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0x990, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0x994, size 0x4, align 4
    bool m_bPreventMovement; // offset 0x998, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0x999, size 0x1, align 1
    bool m_bUnstoppable; // offset 0x99A, size 0x1, align 1
    char _pad_099B[0x1]; // offset 0x99B
    GameTime_t m_flFinishedTime; // offset 0x99C, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0x9A0, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0x9AC, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0x9B8, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0x9C4, size 0x1, align 1
    bool m_bDisabled; // offset 0x9C5, size 0x1, align 1
    char _pad_09C6[0x2]; // offset 0x9C6
    VectorWS m_vecTeleportOrigin; // offset 0x9C8, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0x9D4, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0x9D8, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0x9F0, size 0x18, align 255
    bool m_bActive; // offset 0xA08, size 0x1, align 1
    char _pad_0A09[0x3]; // offset 0xA09
    GameTime_t m_flStartTime; // offset 0xA0C, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xA10, size 0x4, align 4
    char _pad_0A14[0x4]; // offset 0xA14
    CUtlSymbolLarge m_iszTitle; // offset 0xA18, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xA20, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xA28, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xA2C, size 0x4, align 4
    bool m_bListenedTo; // offset 0xA30, size 0x1, align 1
    char _pad_0A31[0xF]; // offset 0xA31
};
