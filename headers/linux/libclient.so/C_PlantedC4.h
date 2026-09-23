#pragma once

class C_PlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x11F0*/  // sizeof 0x27E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1210]; // offset 0x0
    bool m_bBombTicking; // offset 0x1210, size 0x1, align 1
    char _pad_1211[0x3]; // offset 0x1211
    int32 m_nBombSite; // offset 0x1214, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0x1218, size 0x4, align 4
    char _pad_121C[0x4]; // offset 0x121C
    EntitySpottedState_t m_entitySpottedState; // offset 0x1220, size 0x18, align 255
    GameTime_t m_flNextGlow; // offset 0x1238, size 0x4, align 255
    GameTime_t m_flNextBeep; // offset 0x123C, size 0x4, align 255
    GameTime_t m_flC4Blow; // offset 0x1240, size 0x4, align 255
    bool m_bCannotBeDefused; // offset 0x1244, size 0x1, align 1
    bool m_bHasExploded; // offset 0x1245, size 0x1, align 1
    char _pad_1246[0x2]; // offset 0x1246
    float32 m_flTimerLength; // offset 0x1248, size 0x4, align 4
    bool m_bBeingDefused; // offset 0x124C, size 0x1, align 1
    char _pad_124D[0x3]; // offset 0x124D
    float32 m_bTriggerWarning; // offset 0x1250, size 0x4, align 4
    float32 m_bExplodeWarning; // offset 0x1254, size 0x4, align 4
    bool m_bC4Activated; // offset 0x1258, size 0x1, align 1
    bool m_bTenSecWarning; // offset 0x1259, size 0x1, align 1
    char _pad_125A[0x2]; // offset 0x125A
    float32 m_flDefuseLength; // offset 0x125C, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0x1260, size 0x4, align 255
    bool m_bBombDefused; // offset 0x1264, size 0x1, align 1
    char _pad_1265[0x3]; // offset 0x1265
    CHandle< C_CSPlayerPawn > m_hBombDefuser; // offset 0x1268, size 0x4, align 4
    char _pad_126C[0x4]; // offset 0x126C
    C_AttributeContainer m_AttributeManager; // offset 0x1270, size 0x1518, align 255
    CHandle< C_Multimeter > m_hDefuserMultimeter; // offset 0x2788, size 0x4, align 4
    GameTime_t m_flNextRadarFlashTime; // offset 0x278C, size 0x4, align 255
    bool m_bRadarFlash; // offset 0x2790, size 0x1, align 1
    char _pad_2791[0x3]; // offset 0x2791
    CHandle< C_CSPlayerPawn > m_pBombDefuser; // offset 0x2794, size 0x4, align 4
    GameTime_t m_fLastDefuseTime; // offset 0x2798, size 0x4, align 255
    char _pad_279C[0x4]; // offset 0x279C
    CBasePlayerController* m_pPredictionOwner; // offset 0x27A0, size 0x8, align 8
    VectorWS m_vecC4ExplodeSpectatePos; // offset 0x27A8, size 0xC, align 4
    QAngle m_vecC4ExplodeSpectateAng; // offset 0x27B4, size 0xC, align 4
    float32 m_flC4ExplodeSpectateDuration; // offset 0x27C0, size 0x4, align 4
    char _pad_27C4[0x24]; // offset 0x27C4
};
