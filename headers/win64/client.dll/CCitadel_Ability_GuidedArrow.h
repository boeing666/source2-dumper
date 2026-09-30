#pragma once

class CCitadel_Ability_GuidedArrow : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CHandle< C_BaseEntity > m_hProjectile; // offset 0x16E0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCameraTarget; // offset 0x16E4, size 0x4, align 4
    float32 m_flArrowSpeed; // offset 0x16E8, size 0x4, align 4
    GameTime_t m_flSnapAnglesBackTime; // offset 0x16EC, size 0x4, align 255
    GameTime_t m_flCastTime; // offset 0x16F0, size 0x4, align 255
    VectorWS m_vProjectileRemovedOrigin; // offset 0x16F4, size 0xC, align 4
    QAngle m_angCasterAnglesAtCastTime; // offset 0x1700, size 0xC, align 4
    float32 m_flTravelDistance; // offset 0x170C, size 0x4, align 4
    bool m_bInKillFlow; // offset 0x1710, size 0x1, align 1
    char _pad_1711[0x3]; // offset 0x1711
    float32 m_flProjectileTurnVel; // offset 0x1714, size 0x4, align 4
    char _pad_1718[0x2C0]; // offset 0x1718
};
