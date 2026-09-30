#pragma once

class CCitadel_Ability_Protection_RacketVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastOtherParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_ArmorModifier; // offset 0x1480, size 0x10, align 8 | MPropertyGroupName
};
