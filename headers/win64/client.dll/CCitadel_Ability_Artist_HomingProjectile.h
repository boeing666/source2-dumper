#pragma once

class CCitadel_Ability_Artist_HomingProjectile : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E98, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bDealtStrokeDamageThisTick; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x7]; // offset 0x16E1
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeployedProjectiles; // offset 0x16E8, size 0x18, align 8
    GameTime_t m_tShootingLockoutEndTime; // offset 0x1700, size 0x4, align 255
    char _pad_1704[0x794]; // offset 0x1704
};
