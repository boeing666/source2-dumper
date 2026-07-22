#pragma once

class CPlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x960*/  // sizeof 0xD80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x9B8]; // offset 0x0
    bool m_bBombTicking; // offset 0x9B8, size 0x1, align 1
    char _pad_09B9[0x3]; // offset 0x9B9
    GameTime_t m_flC4Blow; // offset 0x9BC, size 0x4, align 255
    int32 m_nBombSite; // offset 0x9C0, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0x9C4, size 0x4, align 4
    bool m_bAbortDetonationBecauseWorldIsFrozen; // offset 0x9C8, size 0x1, align 1
    char _pad_09C9[0x7]; // offset 0x9C9
    CAttributeContainer m_AttributeManager; // offset 0x9D0, size 0x2F8, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0xCC8, size 0x18, align 255
    CEntityIOOutput m_OnBombBeginDefuse; // offset 0xCE0, size 0x18, align 255
    CEntityIOOutput m_OnBombDefuseAborted; // offset 0xCF8, size 0x18, align 255
    bool m_bCannotBeDefused; // offset 0xD10, size 0x1, align 1
    char _pad_0D11[0x7]; // offset 0xD11
    EntitySpottedState_t m_entitySpottedState; // offset 0xD18, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xD30, size 0x4, align 4
    bool m_bHasExploded; // offset 0xD34, size 0x1, align 1
    bool m_bBombDefused; // offset 0xD35, size 0x1, align 1
    bool m_bTrainingPlacedByPlayer; // offset 0xD36, size 0x1, align 1
    char _pad_0D37[0x1]; // offset 0xD37
    float32 m_flTimerLength; // offset 0xD38, size 0x4, align 4
    bool m_bBeingDefused; // offset 0xD3C, size 0x1, align 1
    char _pad_0D3D[0x7]; // offset 0xD3D
    GameTime_t m_fLastDefuseTime; // offset 0xD44, size 0x4, align 255
    char _pad_0D48[0x4]; // offset 0xD48
    float32 m_flDefuseLength; // offset 0xD4C, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0xD50, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hBombDefuser; // offset 0xD54, size 0x4, align 4
    int32 m_iProgressBarTime; // offset 0xD58, size 0x4, align 4
    bool m_bVoiceAlertFired; // offset 0xD5C, size 0x1, align 1
    bool[4] m_bVoiceAlertPlayed; // offset 0xD5D, size 0x4, align 1
    char _pad_0D61[0x3]; // offset 0xD61
    GameTime_t m_flNextBotBeepTime; // offset 0xD64, size 0x4, align 255
    char _pad_0D68[0x4]; // offset 0xD68
    QAngle m_angCatchUpToPlayerEye; // offset 0xD6C, size 0xC, align 4
    GameTime_t m_flLastSpinDetectionTime; // offset 0xD78, size 0x4, align 255
    char _pad_0D7C[0x4]; // offset 0xD7C
};
