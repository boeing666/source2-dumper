#pragma once

class CCitadel_Ability_AirheartPrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1AB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StuckModifier; // offset 0x19C0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionFX; // offset 0x19D0, size 0xE0, align 8 | MPropertyStartGroup
};
