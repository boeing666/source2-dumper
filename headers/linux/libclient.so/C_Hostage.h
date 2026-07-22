#pragma once

class C_Hostage : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    EntitySpottedState_t m_entitySpottedState; // offset 0x1190, size 0x18, align 255
    CHandle< C_BaseEntity > m_leader; // offset 0x11A8, size 0x4, align 4
    char _pad_11AC[0x4]; // offset 0x11AC
    CountdownTimer m_reuseTimer; // offset 0x11B0, size 0x18, align 8
    Vector m_vel; // offset 0x11C8, size 0xC, align 4
    bool m_isRescued; // offset 0x11D4, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0x11D5, size 0x1, align 1
    char _pad_11D6[0x2]; // offset 0x11D6
    int32 m_nHostageState; // offset 0x11D8, size 0x4, align 4
    bool m_bHandsHaveBeenCut; // offset 0x11DC, size 0x1, align 1
    char _pad_11DD[0x3]; // offset 0x11DD
    CHandle< C_CSPlayerPawn > m_hHostageGrabber; // offset 0x11E0, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x11E4, size 0x4, align 255
    VectorWS m_vecGrabbedPos; // offset 0x11E8, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x11F4, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x11F8, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x11FC, size 0x4, align 255
    GameTime_t m_flDeadOrRescuedTime; // offset 0x1200, size 0x4, align 255
    char _pad_1204[0x4]; // offset 0x1204
    CountdownTimer m_blinkTimer; // offset 0x1208, size 0x18, align 8
    VectorWS m_lookAt; // offset 0x1220, size 0xC, align 4
    char _pad_122C[0x4]; // offset 0x122C
    CountdownTimer m_lookAroundTimer; // offset 0x1230, size 0x18, align 8
    bool m_isInit; // offset 0x1248, size 0x1, align 1
    AttachmentHandle_t m_eyeAttachment; // offset 0x1249, size 0x1, align 255
    AttachmentHandle_t m_chestAttachment; // offset 0x124A, size 0x1, align 255
    char _pad_124B[0x5]; // offset 0x124B
    CBasePlayerController* m_pPredictionOwner; // offset 0x1250, size 0x8, align 8
    GameTime_t m_fNewestAlphaThinkTime; // offset 0x1258, size 0x4, align 255
    char _pad_125C[0x4]; // offset 0x125C
};
