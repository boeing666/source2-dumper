#pragma once

class CCitadel_Ability_ZipLine : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x25A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x24A0]; // offset 0x0
    GameTime_t m_flActivatePressTime; // offset 0x24A0, size 0x4, align 255
    bool m_bThinking; // offset 0x24A4, size 0x1, align 1
    bool m_bMoveCollidedPushUp; // offset 0x24A5, size 0x1, align 1
    bool m_bNoDelayNeeded; // offset 0x24A6, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x24A7, size 0x1, align 1
    EAttachState_t m_eCommittedAttachState; // offset 0x24A8, size 0x4, align 4
    char _pad_24AC[0x38]; // offset 0x24AC
    VectorWS m_vVisualTaperPos; // offset 0x24E4, size 0xC, align 4
    GameTime_t m_flTimeStartZipping; // offset 0x24F0, size 0x4, align 255
    GameTime_t m_flTimeForKnockdownProtection; // offset 0x24F4, size 0x4, align 255
    GameTime_t m_flTimeStopZipping; // offset 0x24F8, size 0x4, align 255
    float32 m_flCasterSpeed; // offset 0x24FC, size 0x4, align 4
    CNetworkVelocityVector m_vecInitialVel; // offset 0x2500, size 0x28, align 255
    char _pad_2528[0x8]; // offset 0x2528
    VectorWS m_vecAttachPoint; // offset 0x2530, size 0xC, align 4
    CHandle< C_BaseEntity > m_pPrevNode; // offset 0x253C, size 0x4, align 4
    CHandle< C_BaseEntity > m_pNextNode; // offset 0x2540, size 0x4, align 4
    GameTime_t m_flTimeEnterState; // offset 0x2544, size 0x4, align 255
    GameTime_t m_flLatchTime; // offset 0x2548, size 0x4, align 255
    GameTime_t m_flDamagedTime; // offset 0x254C, size 0x4, align 255
    EAttachState_t m_eAttachState; // offset 0x2550, size 0x4, align 4
    int32 m_iAttachedZipLineLane; // offset 0x2554, size 0x4, align 4
    bool m_bDroppedFromZipline; // offset 0x2558, size 0x1, align 1
    AttachmentHandle_t m_hAttachZipLine; // offset 0x2559, size 0x1, align 255
    AttachmentHandle_t m_hZiplineLatchEffectHandle; // offset 0x255A, size 0x1, align 255
    char _pad_255B[0x1]; // offset 0x255B
    Vector m_vAttachZipLineOffset; // offset 0x255C, size 0xC, align 4
    float32 m_flZiplineAirDrag; // offset 0x2568, size 0x4, align 4
    Vector m_vPendulumVelocity; // offset 0x256C, size 0xC, align 4
    Vector m_vPendulumPosition; // offset 0x2578, size 0xC, align 4
    Vector m_vVelocityHistory1; // offset 0x2584, size 0xC, align 4
    Vector m_vVelocityHistory2; // offset 0x2590, size 0xC, align 4
    int32 m_iDesiredLane; // offset 0x259C, size 0x4, align 4
};
