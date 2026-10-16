#pragma once

class CCitadel_Ability_Artist_HomingProjectile : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E90, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bDealtStrokeDamageThisTick; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x7]; // offset 0x16D9
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeployedProjectiles; // offset 0x16E0, size 0x18, align 8
    GameTime_t m_tShootingLockoutEndTime; // offset 0x16F8, size 0x4, align 255
    char _pad_16FC[0x794]; // offset 0x16FC
};
