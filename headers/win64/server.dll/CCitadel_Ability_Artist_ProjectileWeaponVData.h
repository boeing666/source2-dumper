#pragma once

class CCitadel_Ability_Artist_ProjectileWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1390, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    CSoundEventName m_strHitSound; // offset 0x1360, size 0x10, align 8 | MPropertyStartGroup
    CUtlVector< float32 > m_vecRolls; // offset 0x1370, size 0x18, align 8 | MPropertyStartGroup
    float32 m_flProjectileDrag; // offset 0x1388, size 0x4, align 4
    float32 m_flProjectileVelocityLossOnHit; // offset 0x138C, size 0x4, align 4
};
