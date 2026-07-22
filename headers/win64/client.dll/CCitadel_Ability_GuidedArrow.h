#pragma once

class CCitadel_Ability_GuidedArrow : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x14A0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11E0]; // offset 0x0
    CHandle< C_BaseEntity > m_hProjectile; // offset 0x11E0, size 0x4, align 4 | MNetworkEnable
    float32 m_flArrowSpeed; // offset 0x11E4, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flSnapAnglesBackTime; // offset 0x11E8, size 0x4, align 255 | MNetworkEnable
    int32 m_nBonusTechPower; // offset 0x11EC, size 0x4, align 4 | MNetworkEnable
    bool m_bNeedsExplosion; // offset 0x11F0, size 0x1, align 1 | MNetworkEnable
    char _pad_11F1[0x3]; // offset 0x11F1
    GameTime_t m_flCastTime; // offset 0x11F4, size 0x4, align 255
    Vector m_vProjectileRemovedOrigin; // offset 0x11F8, size 0xC, align 4
    QAngle m_angCasterAnglesAtCastTime; // offset 0x1204, size 0xC, align 4
    float32 m_flTravelDistance; // offset 0x1210, size 0x4, align 4
    bool m_bInKillFlow; // offset 0x1214, size 0x1, align 1
    char _pad_1215[0x3]; // offset 0x1215
    float32 m_flProjectileTurnVel; // offset 0x1218, size 0x4, align 4
    char _pad_121C[0x284]; // offset 0x121C
};
