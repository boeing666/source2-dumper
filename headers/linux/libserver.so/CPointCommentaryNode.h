#pragma once

class CPointCommentaryNode : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xA70, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xA78, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xA80, size 0x8, align 8
    CUtlSymbolLarge m_iszViewTarget; // offset 0xA88, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xA90, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xA94, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xA98, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xAA0, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xAA4, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xAA8, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xAA9, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xAAA, size 0x1, align 1
    char _pad_0AAB[0x1]; // offset 0xAAB
    GameTime_t m_flFinishedTime; // offset 0xAAC, size 0x4, align 255
    VectorWS m_vecFinishOrigin; // offset 0xAB0, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xABC, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xAC8, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xAD4, size 0x1, align 1
    bool m_bDisabled; // offset 0xAD5, size 0x1, align 1
    char _pad_0AD6[0x2]; // offset 0xAD6
    VectorWS m_vecTeleportOrigin; // offset 0xAD8, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xAE4, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xB00, size 0x18, align 255
    bool m_bActive; // offset 0xB18, size 0x1, align 1
    char _pad_0B19[0x3]; // offset 0xB19
    GameTime_t m_flStartTime; // offset 0xB1C, size 0x4, align 255
    float32 m_flStartTimeInCommentary; // offset 0xB20, size 0x4, align 4
    char _pad_0B24[0x4]; // offset 0xB24
    CUtlSymbolLarge m_iszTitle; // offset 0xB28, size 0x8, align 8
    CUtlSymbolLarge m_iszSpeakers; // offset 0xB30, size 0x8, align 8
    int32 m_iNodeNumber; // offset 0xB38, size 0x4, align 4
    int32 m_iNodeNumberMax; // offset 0xB3C, size 0x4, align 4
    bool m_bListenedTo; // offset 0xB40, size 0x1, align 1
    char _pad_0B41[0x7]; // offset 0xB41
};
