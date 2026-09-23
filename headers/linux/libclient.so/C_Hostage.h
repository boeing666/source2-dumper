#pragma once

class C_Hostage : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x1348, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    EntitySpottedState_t m_entitySpottedState; // offset 0x1278, size 0x18, align 255
    CHandle< C_BaseEntity > m_leader; // offset 0x1290, size 0x4, align 4
    char _pad_1294[0x4]; // offset 0x1294
    CountdownTimer m_reuseTimer; // offset 0x1298, size 0x18, align 8
    Vector m_vel; // offset 0x12B0, size 0xC, align 4
    bool m_isRescued; // offset 0x12BC, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0x12BD, size 0x1, align 1
    char _pad_12BE[0x2]; // offset 0x12BE
    int32 m_nHostageState; // offset 0x12C0, size 0x4, align 4
    bool m_bHandsHaveBeenCut; // offset 0x12C4, size 0x1, align 1
    char _pad_12C5[0x3]; // offset 0x12C5
    CHandle< C_CSPlayerPawn > m_hHostageGrabber; // offset 0x12C8, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x12CC, size 0x4, align 255
    VectorWS m_vecGrabbedPos; // offset 0x12D0, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x12DC, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x12E0, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x12E4, size 0x4, align 255
    GameTime_t m_flDeadOrRescuedTime; // offset 0x12E8, size 0x4, align 255
    char _pad_12EC[0x4]; // offset 0x12EC
    CountdownTimer m_blinkTimer; // offset 0x12F0, size 0x18, align 8
    VectorWS m_lookAt; // offset 0x1308, size 0xC, align 4
    char _pad_1314[0x4]; // offset 0x1314
    CountdownTimer m_lookAroundTimer; // offset 0x1318, size 0x18, align 8
    bool m_isInit; // offset 0x1330, size 0x1, align 1
    AttachmentHandle_t m_eyeAttachment; // offset 0x1331, size 0x1, align 255
    AttachmentHandle_t m_chestAttachment; // offset 0x1332, size 0x1, align 255
    char _pad_1333[0x5]; // offset 0x1333
    CBasePlayerController* m_pPredictionOwner; // offset 0x1338, size 0x8, align 8
    GameTime_t m_fNewestAlphaThinkTime; // offset 0x1340, size 0x4, align 255
    char _pad_1344[0x4]; // offset 0x1344
};
