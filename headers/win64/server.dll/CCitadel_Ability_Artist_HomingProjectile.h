#pragma once

class CCitadel_Ability_Artist_HomingProjectile : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1C58, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bDealtStrokeDamageThisTick; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x7]; // offset 0x14A1
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecDeployedProjectiles; // offset 0x14A8, size 0x18, align 8
    GameTime_t m_tShootingLockoutEndTime; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0x794]; // offset 0x14C4
};
