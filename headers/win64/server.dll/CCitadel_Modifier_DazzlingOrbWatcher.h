#pragma once

class CCitadel_Modifier_DazzlingOrbWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x978, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ShotID_t m_nAssociatedShotID; // offset 0x140, size 0x4, align 255
    CHandle< CBaseEntity > m_hAssociatedProjectile; // offset 0x144, size 0x4, align 4
    GameTime_t m_flLastHitTime; // offset 0x148, size 0x4, align 255
    CHandle< CBaseEntity > m_hLastHitTarget; // offset 0x14C, size 0x4, align 4
    VectorWS m_vLastHitLocation; // offset 0x150, size 0xC, align 4
    int32 m_nBouncesRemaining; // offset 0x15C, size 0x4, align 4
    GameTime_t m_flLingerEndTime; // offset 0x160, size 0x4, align 255
    float32 m_flDamageAtCast; // offset 0x164, size 0x4, align 4
    float32 m_flSlowDurationAtCast; // offset 0x168, size 0x4, align 4
    float32 m_flBounceRadiusAtCast; // offset 0x16C, size 0x4, align 4
    ParticleIndex_t m_nGraceParticleIndex; // offset 0x170, size 0x4, align 255
    char _pad_0174[0x804]; // offset 0x174
};
