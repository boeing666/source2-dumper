#pragma once

class C_PlantedC4 : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x1108*/  // sizeof 0x25C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1128]; // offset 0x0
    bool m_bBombTicking; // offset 0x1128, size 0x1, align 1
    char _pad_1129[0x3]; // offset 0x1129
    int32 m_nBombSite; // offset 0x112C, size 0x4, align 4
    int32 m_nSourceSoundscapeHash; // offset 0x1130, size 0x4, align 4
    char _pad_1134[0x4]; // offset 0x1134
    EntitySpottedState_t m_entitySpottedState; // offset 0x1138, size 0x18, align 255
    GameTime_t m_flNextGlow; // offset 0x1150, size 0x4, align 255
    GameTime_t m_flNextBeep; // offset 0x1154, size 0x4, align 255
    GameTime_t m_flC4Blow; // offset 0x1158, size 0x4, align 255
    bool m_bCannotBeDefused; // offset 0x115C, size 0x1, align 1
    bool m_bHasExploded; // offset 0x115D, size 0x1, align 1
    char _pad_115E[0x2]; // offset 0x115E
    float32 m_flTimerLength; // offset 0x1160, size 0x4, align 4
    bool m_bBeingDefused; // offset 0x1164, size 0x1, align 1
    char _pad_1165[0x3]; // offset 0x1165
    float32 m_bTriggerWarning; // offset 0x1168, size 0x4, align 4
    float32 m_bExplodeWarning; // offset 0x116C, size 0x4, align 4
    bool m_bC4Activated; // offset 0x1170, size 0x1, align 1
    bool m_bTenSecWarning; // offset 0x1171, size 0x1, align 1
    char _pad_1172[0x2]; // offset 0x1172
    float32 m_flDefuseLength; // offset 0x1174, size 0x4, align 4
    GameTime_t m_flDefuseCountDown; // offset 0x1178, size 0x4, align 255
    bool m_bBombDefused; // offset 0x117C, size 0x1, align 1
    char _pad_117D[0x3]; // offset 0x117D
    CHandle< C_CSPlayerPawn > m_hBombDefuser; // offset 0x1180, size 0x4, align 4
    char _pad_1184[0x4]; // offset 0x1184
    C_AttributeContainer m_AttributeManager; // offset 0x1188, size 0x13D8, align 255
    CHandle< C_Multimeter > m_hDefuserMultimeter; // offset 0x2560, size 0x4, align 4
    GameTime_t m_flNextRadarFlashTime; // offset 0x2564, size 0x4, align 255
    bool m_bRadarFlash; // offset 0x2568, size 0x1, align 1
    char _pad_2569[0x3]; // offset 0x2569
    CHandle< C_CSPlayerPawn > m_pBombDefuser; // offset 0x256C, size 0x4, align 4
    GameTime_t m_fLastDefuseTime; // offset 0x2570, size 0x4, align 255
    char _pad_2574[0x4]; // offset 0x2574
    CBasePlayerController* m_pPredictionOwner; // offset 0x2578, size 0x8, align 8
    VectorWS m_vecC4ExplodeSpectatePos; // offset 0x2580, size 0xC, align 4
    QAngle m_vecC4ExplodeSpectateAng; // offset 0x258C, size 0xC, align 4
    float32 m_flC4ExplodeSpectateDuration; // offset 0x2598, size 0x4, align 4
    char _pad_259C[0x24]; // offset 0x259C
};
