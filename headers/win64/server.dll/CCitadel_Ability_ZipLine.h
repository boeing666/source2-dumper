#pragma once

class CCitadel_Ability_ZipLine : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2348, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2260]; // offset 0x0
    GameTime_t m_flActivatePressTime; // offset 0x2260, size 0x4, align 255
    bool m_bThinking; // offset 0x2264, size 0x1, align 1
    bool m_bMoveCollidedPushUp; // offset 0x2265, size 0x1, align 1
    bool m_bNoDelayNeeded; // offset 0x2266, size 0x1, align 1
    bool m_bMouseWheelBind; // offset 0x2267, size 0x1, align 1
    EAttachState_t m_eCommittedAttachState; // offset 0x2268, size 0x4, align 4
    char _pad_226C[0x2C]; // offset 0x226C
    GameTime_t m_flTimeStartZipping; // offset 0x2298, size 0x4, align 255
    GameTime_t m_flTimeForKnockdownProtection; // offset 0x229C, size 0x4, align 255
    GameTime_t m_flTimeStopZipping; // offset 0x22A0, size 0x4, align 255
    float32 m_flCasterSpeed; // offset 0x22A4, size 0x4, align 4
    CNetworkVelocityVector m_vecInitialVel; // offset 0x22A8, size 0x28, align 255
    char _pad_22D0[0x8]; // offset 0x22D0
    VectorWS m_vecAttachPoint; // offset 0x22D8, size 0xC, align 4
    CHandle< CBaseEntity > m_pPrevNode; // offset 0x22E4, size 0x4, align 4
    CHandle< CBaseEntity > m_pNextNode; // offset 0x22E8, size 0x4, align 4
    GameTime_t m_flTimeEnterState; // offset 0x22EC, size 0x4, align 255
    GameTime_t m_flLatchTime; // offset 0x22F0, size 0x4, align 255
    GameTime_t m_flDamagedTime; // offset 0x22F4, size 0x4, align 255
    EAttachState_t m_eAttachState; // offset 0x22F8, size 0x4, align 4
    int32 m_iAttachedZipLineLane; // offset 0x22FC, size 0x4, align 4
    bool m_bDroppedFromZipline; // offset 0x2300, size 0x1, align 1
    AttachmentHandle_t m_hAttachZipLine; // offset 0x2301, size 0x1, align 255
    AttachmentHandle_t m_hZiplineLatchEffectHandle; // offset 0x2302, size 0x1, align 255
    char _pad_2303[0x1]; // offset 0x2303
    Vector m_vAttachZipLineOffset; // offset 0x2304, size 0xC, align 4
    float32 m_flZiplineAirDrag; // offset 0x2310, size 0x4, align 4
    Vector m_vPendulumVelocity; // offset 0x2314, size 0xC, align 4
    Vector m_vPendulumPosition; // offset 0x2320, size 0xC, align 4
    Vector m_vVelocityHistory1; // offset 0x232C, size 0xC, align 4
    Vector m_vVelocityHistory2; // offset 0x2338, size 0xC, align 4
    int32 m_iDesiredLane; // offset 0x2344, size 0x4, align 4
};
