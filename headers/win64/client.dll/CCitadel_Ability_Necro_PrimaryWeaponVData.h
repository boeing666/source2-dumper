#pragma once

class CCitadel_Ability_Necro_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1788, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1658]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x1658, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DummyTetherModifier; // offset 0x1668, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetheredModifier; // offset 0x1678, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SearchingModifier; // offset 0x1688, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParticle; // offset 0x1698, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flDefaultSpreadScale; // offset 0x1778, size 0x4, align 4
    float32 m_flSearchingSpreadScale; // offset 0x177C, size 0x4, align 4
    float32 m_flTetheredSpreadScale; // offset 0x1780, size 0x4, align 4
    float32 m_flApproachSpeed; // offset 0x1784, size 0x4, align 4
};
