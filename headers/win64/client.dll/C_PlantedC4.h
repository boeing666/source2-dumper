#pragma once

class C_PlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x1180*/  // sizeof 0x1730, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11A0]; // offset 0x0
    bool m_bBombTicking; // offset 0x11A0, size 0x1, align 1
    char _pad_11A1[0x3]; // offset 0x11A1
    int32 m_nBombSite; // offset 0x11A4, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0x11A8, size 0x4, align 4
    char _pad_11AC[0x4]; // offset 0x11AC
    EntitySpottedState_t m_entitySpottedState; // offset 0x11B0, size 0x18, align 255
    GameTime_t m_flNextGlow; // offset 0x11C8, size 0x4, align 255
    GameTime_t m_flNextBeep; // offset 0x11CC, size 0x4, align 255
    GameTime_t m_flC4Blow; // offset 0x11D0, size 0x4, align 255
    bool m_bCannotBeDefused; // offset 0x11D4, size 0x1, align 1
    bool m_bHasExploded; // offset 0x11D5, size 0x1, align 1
    char _pad_11D6[0x2]; // offset 0x11D6
    float32 m_flTimerLength; // offset 0x11D8, size 0x4, align 4
    bool m_bBeingDefused; // offset 0x11DC, size 0x1, align 1
    char _pad_11DD[0x3]; // offset 0x11DD
    float32 m_bTriggerWarning; // offset 0x11E0, size 0x4, align 4
    float32 m_bExplodeWarning; // offset 0x11E4, size 0x4, align 4
    bool m_bC4Activated; // offset 0x11E8, size 0x1, align 1
    bool m_bTenSecWarning; // offset 0x11E9, size 0x1, align 1
    char _pad_11EA[0x2]; // offset 0x11EA
    float32 m_flDefuseLength; // offset 0x11EC, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0x11F0, size 0x4, align 255
    bool m_bBombDefused; // offset 0x11F4, size 0x1, align 1
    char _pad_11F5[0x3]; // offset 0x11F5
    CHandle< C_CSPlayerPawn > m_hBombDefuser; // offset 0x11F8, size 0x4, align 4
    char _pad_11FC[0x4]; // offset 0x11FC
    C_AttributeContainer m_AttributeManager; // offset 0x1200, size 0x4D0, align 255
    CHandle< C_Multimeter > m_hDefuserMultimeter; // offset 0x16D0, size 0x4, align 4
    GameTime_t m_flNextRadarFlashTime; // offset 0x16D4, size 0x4, align 255
    bool m_bRadarFlash; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    CHandle< C_CSPlayerPawn > m_pBombDefuser; // offset 0x16DC, size 0x4, align 4
    GameTime_t m_fLastDefuseTime; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0x4]; // offset 0x16E4
    CBasePlayerController* m_pPredictionOwner; // offset 0x16E8, size 0x8, align 8
    VectorWS m_vecC4ExplodeSpectatePos; // offset 0x16F0, size 0xC, align 4
    QAngle m_vecC4ExplodeSpectateAng; // offset 0x16FC, size 0xC, align 4
    float32 m_flC4ExplodeSpectateDuration; // offset 0x1708, size 0x4, align 4
    char _pad_170C[0x24]; // offset 0x170C
};
