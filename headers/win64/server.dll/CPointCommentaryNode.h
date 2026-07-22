#pragma once

class CPointCommentaryNode : public CBaseAnimGraph /*0x0*/  // sizeof 0xB70, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CUtlSymbolLarge m_iszPreCommands; // offset 0xA90, size 0x8, align 8
    CUtlSymbolLarge m_iszPostCommands; // offset 0xA98, size 0x8, align 8
    CUtlSymbolLarge m_iszCommentaryFile; // offset 0xAA0, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszViewTarget; // offset 0xAA8, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewTarget; // offset 0xAB0, size 0x4, align 4
    CHandle< CBaseEntity > m_hViewTargetAngles; // offset 0xAB4, size 0x4, align 4
    CUtlSymbolLarge m_iszViewPosition; // offset 0xAB8, size 0x8, align 8
    CHandle< CBaseEntity > m_hViewPosition; // offset 0xAC0, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hViewPositionMover; // offset 0xAC4, size 0x4, align 4
    bool m_bPreventMovement; // offset 0xAC8, size 0x1, align 1
    bool m_bUnderCrosshair; // offset 0xAC9, size 0x1, align 1
    bool m_bUnstoppable; // offset 0xACA, size 0x1, align 1
    char _pad_0ACB[0x1]; // offset 0xACB
    GameTime_t m_flFinishedTime; // offset 0xACC, size 0x4, align 255
    Vector m_vecFinishOrigin; // offset 0xAD0, size 0xC, align 4
    QAngle m_vecOriginalAngles; // offset 0xADC, size 0xC, align 4
    QAngle m_vecFinishAngles; // offset 0xAE8, size 0xC, align 4
    bool m_bPreventChangesWhileMoving; // offset 0xAF4, size 0x1, align 1
    bool m_bDisabled; // offset 0xAF5, size 0x1, align 1
    char _pad_0AF6[0x2]; // offset 0xAF6
    VectorWS m_vecTeleportOrigin; // offset 0xAF8, size 0xC, align 4
    GameTime_t m_flAbortedPlaybackAt; // offset 0xB04, size 0x4, align 255
    CEntityIOOutput m_pOnCommentaryStarted; // offset 0xB08, size 0x18, align 255
    CEntityIOOutput m_pOnCommentaryStopped; // offset 0xB20, size 0x18, align 255
    bool m_bActive; // offset 0xB38, size 0x1, align 1 | MNetworkEnable
    char _pad_0B39[0x3]; // offset 0xB39
    GameTime_t m_flStartTime; // offset 0xB3C, size 0x4, align 255 | MNetworkEnable
    float32 m_flStartTimeInCommentary; // offset 0xB40, size 0x4, align 4 | MNetworkEnable
    char _pad_0B44[0x4]; // offset 0xB44
    CUtlSymbolLarge m_iszTitle; // offset 0xB48, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_iszSpeakers; // offset 0xB50, size 0x8, align 8 | MNetworkEnable
    int32 m_iNodeNumber; // offset 0xB58, size 0x4, align 4 | MNetworkEnable
    int32 m_iNodeNumberMax; // offset 0xB5C, size 0x4, align 4 | MNetworkEnable
    bool m_bListenedTo; // offset 0xB60, size 0x1, align 1 | MNetworkEnable
    char _pad_0B61[0xF]; // offset 0xB61
};
