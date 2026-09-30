#pragma once

class CCitadel_Ability_GuidedArrow : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0x14A8, size 0x4, align 4
    CHandle< CBaseEntity > m_hCameraTarget; // offset 0x14AC, size 0x4, align 4
    float32 m_flArrowSpeed; // offset 0x14B0, size 0x4, align 4
    GameTime_t m_flSnapAnglesBackTime; // offset 0x14B4, size 0x4, align 255
    bool m_bNeedsExplosion; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x3]; // offset 0x14B9
    CHandle< CCitadel_GuidedArrow_OwlModel > m_hOwl; // offset 0x14BC, size 0x4, align 4
    char _pad_14C0[0xC]; // offset 0x14C0
    GameTime_t m_flCastTime; // offset 0x14CC, size 0x4, align 255
    VectorWS m_vProjectileRemovedOrigin; // offset 0x14D0, size 0xC, align 4
    QAngle m_angCasterAnglesAtCastTime; // offset 0x14DC, size 0xC, align 4
    float32 m_flTravelDistance; // offset 0x14E8, size 0x4, align 4
    bool m_bInKillFlow; // offset 0x14EC, size 0x1, align 1
    char _pad_14ED[0x3]; // offset 0x14ED
    float32 m_flProjectileTurnVel; // offset 0x14F0, size 0x4, align 4
    char _pad_14F4[0x2C4]; // offset 0x14F4
};
