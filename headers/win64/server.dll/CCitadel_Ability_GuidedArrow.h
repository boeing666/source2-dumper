#pragma once

class CCitadel_Ability_GuidedArrow : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1248, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0xF78, size 0x4, align 4 | MNetworkEnable
    float32 m_flArrowSpeed; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flSnapAnglesBackTime; // offset 0xF80, size 0x4, align 255 | MNetworkEnable
    int32 m_nBonusTechPower; // offset 0xF84, size 0x4, align 4 | MNetworkEnable
    bool m_bNeedsExplosion; // offset 0xF88, size 0x1, align 1 | MNetworkEnable
    char _pad_0F89[0x3]; // offset 0xF89
    CHandle< CCitadel_GuidedArrow_OwlModel > m_hOwl; // offset 0xF8C, size 0x4, align 4
    char _pad_0F90[0xC]; // offset 0xF90
    GameTime_t m_flCastTime; // offset 0xF9C, size 0x4, align 255
    Vector m_vProjectileRemovedOrigin; // offset 0xFA0, size 0xC, align 4
    QAngle m_angCasterAnglesAtCastTime; // offset 0xFAC, size 0xC, align 4
    float32 m_flTravelDistance; // offset 0xFB8, size 0x4, align 4
    bool m_bInKillFlow; // offset 0xFBC, size 0x1, align 1
    char _pad_0FBD[0x3]; // offset 0xFBD
    float32 m_flProjectileTurnVel; // offset 0xFC0, size 0x4, align 4
    char _pad_0FC4[0x284]; // offset 0xFC4
};
