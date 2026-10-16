#pragma once

class CCitadel_Ability_Artist_ProjectileWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1700, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CSoundEventName m_strHitSound; // offset 0x16D0, size 0x10, align 8 | MPropertyStartGroup
    CUtlVector< float32 > m_vecRolls; // offset 0x16E0, size 0x18, align 8 | MPropertyStartGroup
    float32 m_flProjectileDrag; // offset 0x16F8, size 0x4, align 4
    float32 m_flProjectileVelocityLossOnHit; // offset 0x16FC, size 0x4, align 4
};
