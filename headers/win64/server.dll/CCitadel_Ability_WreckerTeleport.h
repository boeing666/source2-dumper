#pragma once

class CCitadel_Ability_WreckerTeleport : public CCitadelBaseAbility /*0x0*/  // sizeof 0x11C8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0xF78, size 0x4, align 4 | MNetworkEnable
    float32 m_flArrowSpeed; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flSnapAnglesBackTime; // offset 0xF80, size 0x4, align 255 | MNetworkEnable
    float32 m_flCastTimeDamage; // offset 0xF84, size 0x4, align 4
    GameTime_t m_flCastTime; // offset 0xF88, size 0x4, align 255
    bool m_bNeedsExplosion; // offset 0xF8C, size 0x1, align 1
    char _pad_0F8D[0x3]; // offset 0xF8D
    Vector m_vProjectileRemovedOrigin; // offset 0xF90, size 0xC, align 4
    QAngle m_angCasterAnglesAtCastTime; // offset 0xF9C, size 0xC, align 4
    float32 m_flTravelDistance; // offset 0xFA8, size 0x4, align 4
    char _pad_0FAC[0x21C]; // offset 0xFAC
};
