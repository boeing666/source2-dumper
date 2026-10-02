#pragma once

class CCitadel_Ability_Necro_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1800, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x16D0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DummyTetherModifier; // offset 0x16E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetheredModifier; // offset 0x16F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SearchingModifier; // offset 0x1700, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParticle; // offset 0x1710, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flDefaultSpreadScale; // offset 0x17F0, size 0x4, align 4
    float32 m_flSearchingSpreadScale; // offset 0x17F4, size 0x4, align 4
    float32 m_flTetheredSpreadScale; // offset 0x17F8, size 0x4, align 4
    float32 m_flApproachSpeed; // offset 0x17FC, size 0x4, align 4
};
