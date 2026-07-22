#pragma once

class CPlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xC40*/  // sizeof 0x1060, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    bool m_bBombTicking; // offset 0xC98, size 0x1, align 1
    char _pad_0C99[0x3]; // offset 0xC99
    GameTime_t m_flC4Blow; // offset 0xC9C, size 0x4, align 255
    int32 m_nBombSite; // offset 0xCA0, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0xCA4, size 0x4, align 4
    bool m_bAbortDetonationBecauseWorldIsFrozen; // offset 0xCA8, size 0x1, align 1
    char _pad_0CA9[0x7]; // offset 0xCA9
    CAttributeContainer m_AttributeManager; // offset 0xCB0, size 0x2F8, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0xFA8, size 0x18, align 255
    CEntityIOOutput m_OnBombBeginDefuse; // offset 0xFC0, size 0x18, align 255
    CEntityIOOutput m_OnBombDefuseAborted; // offset 0xFD8, size 0x18, align 255
    bool m_bCannotBeDefused; // offset 0xFF0, size 0x1, align 1
    char _pad_0FF1[0x7]; // offset 0xFF1
    EntitySpottedState_t m_entitySpottedState; // offset 0xFF8, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1010, size 0x4, align 4
    bool m_bHasExploded; // offset 0x1014, size 0x1, align 1
    bool m_bBombDefused; // offset 0x1015, size 0x1, align 1
    bool m_bTrainingPlacedByPlayer; // offset 0x1016, size 0x1, align 1
    char _pad_1017[0x1]; // offset 0x1017
    float32 m_flTimerLength; // offset 0x1018, size 0x4, align 4
    bool m_bBeingDefused; // offset 0x101C, size 0x1, align 1
    char _pad_101D[0x7]; // offset 0x101D
    GameTime_t m_fLastDefuseTime; // offset 0x1024, size 0x4, align 255
    char _pad_1028[0x4]; // offset 0x1028
    float32 m_flDefuseLength; // offset 0x102C, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0x1030, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hBombDefuser; // offset 0x1034, size 0x4, align 4
    int32 m_iProgressBarTime; // offset 0x1038, size 0x4, align 4
    bool m_bVoiceAlertFired; // offset 0x103C, size 0x1, align 1
    bool[4] m_bVoiceAlertPlayed; // offset 0x103D, size 0x4, align 1
    char _pad_1041[0x3]; // offset 0x1041
    GameTime_t m_flNextBotBeepTime; // offset 0x1044, size 0x4, align 255
    char _pad_1048[0x4]; // offset 0x1048
    QAngle m_angCatchUpToPlayerEye; // offset 0x104C, size 0xC, align 4
    GameTime_t m_flLastSpinDetectionTime; // offset 0x1058, size 0x4, align 255
    char _pad_105C[0x4]; // offset 0x105C
};
