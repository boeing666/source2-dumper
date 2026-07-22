#pragma once

class C_Hostage : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x12D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1208]; // offset 0x0
    EntitySpottedState_t m_entitySpottedState; // offset 0x1208, size 0x18, align 255
    CHandle< C_BaseEntity > m_leader; // offset 0x1220, size 0x4, align 4
    char _pad_1224[0x4]; // offset 0x1224
    CountdownTimer m_reuseTimer; // offset 0x1228, size 0x18, align 8
    Vector m_vel; // offset 0x1240, size 0xC, align 4
    bool m_isRescued; // offset 0x124C, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0x124D, size 0x1, align 1
    char _pad_124E[0x2]; // offset 0x124E
    int32 m_nHostageState; // offset 0x1250, size 0x4, align 4
    bool m_bHandsHaveBeenCut; // offset 0x1254, size 0x1, align 1
    char _pad_1255[0x3]; // offset 0x1255
    CHandle< C_CSPlayerPawn > m_hHostageGrabber; // offset 0x1258, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x125C, size 0x4, align 255
    VectorWS m_vecGrabbedPos; // offset 0x1260, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x126C, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x1270, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x1274, size 0x4, align 255
    GameTime_t m_flDeadOrRescuedTime; // offset 0x1278, size 0x4, align 255
    char _pad_127C[0x4]; // offset 0x127C
    CountdownTimer m_blinkTimer; // offset 0x1280, size 0x18, align 8
    VectorWS m_lookAt; // offset 0x1298, size 0xC, align 4
    char _pad_12A4[0x4]; // offset 0x12A4
    CountdownTimer m_lookAroundTimer; // offset 0x12A8, size 0x18, align 8
    bool m_isInit; // offset 0x12C0, size 0x1, align 1
    AttachmentHandle_t m_eyeAttachment; // offset 0x12C1, size 0x1, align 255
    AttachmentHandle_t m_chestAttachment; // offset 0x12C2, size 0x1, align 255
    char _pad_12C3[0x5]; // offset 0x12C3
    CBasePlayerController* m_pPredictionOwner; // offset 0x12C8, size 0x8, align 8
    GameTime_t m_fNewestAlphaThinkTime; // offset 0x12D0, size 0x4, align 255
    char _pad_12D4[0x4]; // offset 0x12D4
};
