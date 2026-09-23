#pragma once

class C_Hostage : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    EntitySpottedState_t m_entitySpottedState; // offset 0x12F0, size 0x18, align 255
    CHandle< C_BaseEntity > m_leader; // offset 0x1308, size 0x4, align 4
    char _pad_130C[0x4]; // offset 0x130C
    CountdownTimer m_reuseTimer; // offset 0x1310, size 0x18, align 8
    Vector m_vel; // offset 0x1328, size 0xC, align 4
    bool m_isRescued; // offset 0x1334, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0x1335, size 0x1, align 1
    char _pad_1336[0x2]; // offset 0x1336
    int32 m_nHostageState; // offset 0x1338, size 0x4, align 4
    bool m_bHandsHaveBeenCut; // offset 0x133C, size 0x1, align 1
    char _pad_133D[0x3]; // offset 0x133D
    CHandle< C_CSPlayerPawn > m_hHostageGrabber; // offset 0x1340, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x1344, size 0x4, align 255
    VectorWS m_vecGrabbedPos; // offset 0x1348, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x1354, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x1358, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x135C, size 0x4, align 255
    GameTime_t m_flDeadOrRescuedTime; // offset 0x1360, size 0x4, align 255
    char _pad_1364[0x4]; // offset 0x1364
    CountdownTimer m_blinkTimer; // offset 0x1368, size 0x18, align 8
    VectorWS m_lookAt; // offset 0x1380, size 0xC, align 4
    char _pad_138C[0x4]; // offset 0x138C
    CountdownTimer m_lookAroundTimer; // offset 0x1390, size 0x18, align 8
    bool m_isInit; // offset 0x13A8, size 0x1, align 1
    AttachmentHandle_t m_eyeAttachment; // offset 0x13A9, size 0x1, align 255
    AttachmentHandle_t m_chestAttachment; // offset 0x13AA, size 0x1, align 255
    char _pad_13AB[0x5]; // offset 0x13AB
    CBasePlayerController* m_pPredictionOwner; // offset 0x13B0, size 0x8, align 8
    GameTime_t m_fNewestAlphaThinkTime; // offset 0x13B8, size 0x4, align 255
    char _pad_13BC[0x4]; // offset 0x13BC
};
