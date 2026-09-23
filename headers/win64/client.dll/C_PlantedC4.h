#pragma once

class C_PlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x1268*/  // sizeof 0x1958, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1288]; // offset 0x0
    bool m_bBombTicking; // offset 0x1288, size 0x1, align 1
    char _pad_1289[0x3]; // offset 0x1289
    int32 m_nBombSite; // offset 0x128C, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0x1290, size 0x4, align 4
    char _pad_1294[0x4]; // offset 0x1294
    EntitySpottedState_t m_entitySpottedState; // offset 0x1298, size 0x18, align 255
    GameTime_t m_flNextGlow; // offset 0x12B0, size 0x4, align 255
    GameTime_t m_flNextBeep; // offset 0x12B4, size 0x4, align 255
    GameTime_t m_flC4Blow; // offset 0x12B8, size 0x4, align 255
    bool m_bCannotBeDefused; // offset 0x12BC, size 0x1, align 1
    bool m_bHasExploded; // offset 0x12BD, size 0x1, align 1
    char _pad_12BE[0x2]; // offset 0x12BE
    float32 m_flTimerLength; // offset 0x12C0, size 0x4, align 4
    bool m_bBeingDefused; // offset 0x12C4, size 0x1, align 1
    char _pad_12C5[0x3]; // offset 0x12C5
    float32 m_bTriggerWarning; // offset 0x12C8, size 0x4, align 4
    float32 m_bExplodeWarning; // offset 0x12CC, size 0x4, align 4
    bool m_bC4Activated; // offset 0x12D0, size 0x1, align 1
    bool m_bTenSecWarning; // offset 0x12D1, size 0x1, align 1
    char _pad_12D2[0x2]; // offset 0x12D2
    float32 m_flDefuseLength; // offset 0x12D4, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0x12D8, size 0x4, align 255
    bool m_bBombDefused; // offset 0x12DC, size 0x1, align 1
    char _pad_12DD[0x3]; // offset 0x12DD
    CHandle< C_CSPlayerPawn > m_hBombDefuser; // offset 0x12E0, size 0x4, align 4
    char _pad_12E4[0x4]; // offset 0x12E4
    C_AttributeContainer m_AttributeManager; // offset 0x12E8, size 0x610, align 255
    CHandle< C_Multimeter > m_hDefuserMultimeter; // offset 0x18F8, size 0x4, align 4
    GameTime_t m_flNextRadarFlashTime; // offset 0x18FC, size 0x4, align 255
    bool m_bRadarFlash; // offset 0x1900, size 0x1, align 1
    char _pad_1901[0x3]; // offset 0x1901
    CHandle< C_CSPlayerPawn > m_pBombDefuser; // offset 0x1904, size 0x4, align 4
    GameTime_t m_fLastDefuseTime; // offset 0x1908, size 0x4, align 255
    char _pad_190C[0x4]; // offset 0x190C
    CBasePlayerController* m_pPredictionOwner; // offset 0x1910, size 0x8, align 8
    VectorWS m_vecC4ExplodeSpectatePos; // offset 0x1918, size 0xC, align 4
    QAngle m_vecC4ExplodeSpectateAng; // offset 0x1924, size 0xC, align 4
    float32 m_flC4ExplodeSpectateDuration; // offset 0x1930, size 0x4, align 4
    char _pad_1934[0x24]; // offset 0x1934
};
