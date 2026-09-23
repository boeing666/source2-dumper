#pragma once

class CPlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xD20*/  // sizeof 0x1280, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD78]; // offset 0x0
    bool m_bBombTicking; // offset 0xD78, size 0x1, align 1
    char _pad_0D79[0x3]; // offset 0xD79
    GameTime_t m_flC4Blow; // offset 0xD7C, size 0x4, align 255
    int32 m_nBombSite; // offset 0xD80, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0xD84, size 0x4, align 4
    bool m_bAbortDetonationBecauseWorldIsFrozen; // offset 0xD88, size 0x1, align 1
    char _pad_0D89[0x7]; // offset 0xD89
    CAttributeContainer m_AttributeManager; // offset 0xD90, size 0x438, align 255
    CEntityIOOutput m_OnBombDefused; // offset 0x11C8, size 0x18, align 255
    CEntityIOOutput m_OnBombBeginDefuse; // offset 0x11E0, size 0x18, align 255
    CEntityIOOutput m_OnBombDefuseAborted; // offset 0x11F8, size 0x18, align 255
    bool m_bCannotBeDefused; // offset 0x1210, size 0x1, align 1
    char _pad_1211[0x7]; // offset 0x1211
    EntitySpottedState_t m_entitySpottedState; // offset 0x1218, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1230, size 0x4, align 4
    bool m_bHasExploded; // offset 0x1234, size 0x1, align 1
    bool m_bBombDefused; // offset 0x1235, size 0x1, align 1
    bool m_bTrainingPlacedByPlayer; // offset 0x1236, size 0x1, align 1
    char _pad_1237[0x1]; // offset 0x1237
    float32 m_flTimerLength; // offset 0x1238, size 0x4, align 4
    bool m_bBeingDefused; // offset 0x123C, size 0x1, align 1
    char _pad_123D[0x7]; // offset 0x123D
    GameTime_t m_fLastDefuseTime; // offset 0x1244, size 0x4, align 255
    char _pad_1248[0x4]; // offset 0x1248
    float32 m_flDefuseLength; // offset 0x124C, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0x1250, size 0x4, align 255
    CHandle< CCSPlayerPawn > m_hBombDefuser; // offset 0x1254, size 0x4, align 4
    int32 m_iProgressBarTime; // offset 0x1258, size 0x4, align 4
    bool m_bVoiceAlertFired; // offset 0x125C, size 0x1, align 1
    bool[4] m_bVoiceAlertPlayed; // offset 0x125D, size 0x4, align 1
    char _pad_1261[0x3]; // offset 0x1261
    GameTime_t m_flNextBotBeepTime; // offset 0x1264, size 0x4, align 255
    char _pad_1268[0x4]; // offset 0x1268
    QAngle m_angCatchUpToPlayerEye; // offset 0x126C, size 0xC, align 4
    GameTime_t m_flLastSpinDetectionTime; // offset 0x1278, size 0x4, align 255
    char _pad_127C[0x4]; // offset 0x127C
};
