#pragma once

class CPointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xD20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xC40, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xC48, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xC50, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0xC58, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xC60, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xC64, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xC68, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xC70, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xC74, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xC78, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xC79, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xC7A, size 0x1, align 1
    char _pad_0C7B[0x1]; // offset 0xC7B
    GameTime_t m_flFinishedTime; // offset 0xC7C, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0xC80, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xC8C, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xC98, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xCA4, size 0x1, align 1
    bool m_bDisabled; // offset 0xCA5, size 0x1, align 1
    char _pad_0CA6[0x2]; // offset 0xCA6
    VectorWS m_vecTeleportOrigin; // offset 0xCA8, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xCB4, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xCB8, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xCD0, size 0x18, align 255
    bool m_bActive; // offset 0xCE8, size 0x1, align 1
    char _pad_0CE9[0x3]; // offset 0xCE9
    GameTime_t m_flStartTime; // offset 0xCEC, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xCF0, size 0x4, align 4
    char _pad_0CF4[0x4]; // offset 0xCF4
    CUtlSymbolLarge m_iszTitle; // offset 0xCF8, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xD00, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xD08, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xD0C, size 0x4, align 4
    bool m_bListenedTo; // offset 0xD10, size 0x1, align 1
    char _pad_0D11[0xF]; // offset 0xD11
};
