#pragma once

class CCitadel_Ability_Bookworm_KnightBarrierVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1570, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShoveParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrierCastParticle; // offset 0x1480, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x1560, size 0x10, align 8 | MPropertyGroupName
};
