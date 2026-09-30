#pragma once

class CCitadel_Ability_WreckerTeleport : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CHandle< C_BaseEntity > m_hProjectile; // offset 0x16E0, size 0x4, align 4
    float32 m_flArrowSpeed; // offset 0x16E4, size 0x4, align 4
    GameTime_t m_flSnapAnglesBackTime; // offset 0x16E8, size 0x4, align 255
    float32 m_flCastTimeDamage; // offset 0x16EC, size 0x4, align 4
    GameTime_t m_flCastTime; // offset 0x16F0, size 0x4, align 255
    bool m_bNeedsExplosion; // offset 0x16F4, size 0x1, align 1
    char _pad_16F5[0x3]; // offset 0x16F5
    VectorWS m_vProjectileRemovedOrigin; // offset 0x16F8, size 0xC, align 4
    QAngle m_angCasterAnglesAtCastTime; // offset 0x1704, size 0xC, align 4
    float32 m_flTravelDistance; // offset 0x1710, size 0x4, align 4
    char _pad_1714[0x2C4]; // offset 0x1714
};
