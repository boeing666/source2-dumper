#pragma once

class CPlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xA40*/  // sizeof 0xFA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA98]; // offset 0x0
    bool m_bBombTicking; // offset 0xA98, size 0x1, align 1
    char _pad_0A99[0x3]; // offset 0xA99
    GameTime_t m_flC4Blow; // offset 0xA9C, size 0x4, align 255
    int32 m_nBombSite; // offset 0xAA0, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0xAA4, size 0x4, align 4
    bool m_bAbortDetonationBecauseWorldIsFrozen; // offset 0xAA8, size 0x1, align 1
    char _pad_0AA9[0x7]; // offset 0xAA9
    CAttributeContainer m_AttributeManager; // offset 0xAB0, size 0x438, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0xEE8, size 0x18, align 255
    CEntityIOOutput m_OnBombBeginDefuse; // offset 0xF00, size 0x18, align 255
    CEntityIOOutput m_OnBombDefuseAborted; // offset 0xF18, size 0x18, align 255
    bool m_bCannotBeDefused; // offset 0xF30, size 0x1, align 1
    char _pad_0F31[0x7]; // offset 0xF31
    EntitySpottedState_t m_entitySpottedState; // offset 0xF38, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xF50, size 0x4, align 4
    bool m_bHasExploded; // offset 0xF54, size 0x1, align 1
    bool m_bBombDefused; // offset 0xF55, size 0x1, align 1
    bool m_bTrainingPlacedByPlayer; // offset 0xF56, size 0x1, align 1
    char _pad_0F57[0x1]; // offset 0xF57
    float32 m_flTimerLength; // offset 0xF58, size 0x4, align 4
    bool m_bBeingDefused; // offset 0xF5C, size 0x1, align 1
    char _pad_0F5D[0x7]; // offset 0xF5D
    GameTime_t m_fLastDefuseTime; // offset 0xF64, size 0x4, align 255
    char _pad_0F68[0x4]; // offset 0xF68
    float32 m_flDefuseLength; // offset 0xF6C, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0xF70, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hBombDefuser; // offset 0xF74, size 0x4, align 4
    int32 m_iProgressBarTime; // offset 0xF78, size 0x4, align 4
    bool m_bVoiceAlertFired; // offset 0xF7C, size 0x1, align 1
    bool[4] m_bVoiceAlertPlayed; // offset 0xF7D, size 0x4, align 1
    char _pad_0F81[0x3]; // offset 0xF81
    GameTime_t m_flNextBotBeepTime; // offset 0xF84, size 0x4, align 255
    char _pad_0F88[0x4]; // offset 0xF88
    QAngle m_angCatchUpToPlayerEye; // offset 0xF8C, size 0xC, align 4
    GameTime_t m_flLastSpinDetectionTime; // offset 0xF98, size 0x4, align 255
    char _pad_0F9C[0x4]; // offset 0xF9C
};
