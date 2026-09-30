#pragma once

class CCitadel_Ability_WreckerTeleport : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0x14A8, size 0x4, align 4
    float32 m_flArrowSpeed; // offset 0x14AC, size 0x4, align 4
    GameTime_t m_flSnapAnglesBackTime; // offset 0x14B0, size 0x4, align 255
    float32 m_flCastTimeDamage; // offset 0x14B4, size 0x4, align 4
    GameTime_t m_flCastTime; // offset 0x14B8, size 0x4, align 255
    bool m_bNeedsExplosion; // offset 0x14BC, size 0x1, align 1
    char _pad_14BD[0x3]; // offset 0x14BD
    VectorWS m_vProjectileRemovedOrigin; // offset 0x14C0, size 0xC, align 4
    QAngle m_angCasterAnglesAtCastTime; // offset 0x14CC, size 0xC, align 4
    float32 m_flTravelDistance; // offset 0x14D8, size 0x4, align 4
    char _pad_14DC[0x2DC]; // offset 0x14DC
};
