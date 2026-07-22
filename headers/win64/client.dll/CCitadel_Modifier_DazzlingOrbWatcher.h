#pragma once

class CCitadel_Modifier_DazzlingOrbWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x778, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    ShotID_t m_nAssociatedShotID; // offset 0xC0, size 0x4, align 255
    CHandle< C_BaseEntity > m_hAssociatedProjectile; // offset 0xC4, size 0x4, align 4
    GameTime_t m_flLastHitTime; // offset 0xC8, size 0x4, align 255
    CHandle< C_BaseEntity > m_hLastHitTarget; // offset 0xCC, size 0x4, align 4
    Vector m_vLastHitLocation; // offset 0xD0, size 0xC, align 4
    int32 m_nBouncesRemaining; // offset 0xDC, size 0x4, align 4
    GameTime_t m_flLingerEndTime; // offset 0xE0, size 0x4, align 255
    float32 m_flDamageAtCast; // offset 0xE4, size 0x4, align 4
    float32 m_flSlowDurationAtCast; // offset 0xE8, size 0x4, align 4
    float32 m_flBounceRadiusAtCast; // offset 0xEC, size 0x4, align 4
    ParticleIndex_t m_nGraceParticleIndex; // offset 0xF0, size 0x4, align 255
    char _pad_00F4[0x684]; // offset 0xF4
};
