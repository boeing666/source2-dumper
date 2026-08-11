#pragma once

class CCitadel_Modifier_DazzlingOrbWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x788, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    ShotID_t m_nAssociatedShotID; // offset 0xD0, size 0x4, align 255
    CHandle< CBaseEntity > m_hAssociatedProjectile; // offset 0xD4, size 0x4, align 4
    GameTime_t m_flLastHitTime; // offset 0xD8, size 0x4, align 255
    CHandle< CBaseEntity > m_hLastHitTarget; // offset 0xDC, size 0x4, align 4
    Vector m_vLastHitLocation; // offset 0xE0, size 0xC, align 4
    int32 m_nBouncesRemaining; // offset 0xEC, size 0x4, align 4
    GameTime_t m_flLingerEndTime; // offset 0xF0, size 0x4, align 255
    float32 m_flDamageAtCast; // offset 0xF4, size 0x4, align 4
    float32 m_flSlowDurationAtCast; // offset 0xF8, size 0x4, align 4
    float32 m_flBounceRadiusAtCast; // offset 0xFC, size 0x4, align 4
    ParticleIndex_t m_nGraceParticleIndex; // offset 0x100, size 0x4, align 255
    char _pad_0104[0x684]; // offset 0x104
};
