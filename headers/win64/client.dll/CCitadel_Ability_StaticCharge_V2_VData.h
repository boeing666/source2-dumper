#pragma once

class CCitadel_Ability_StaticCharge_V2_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaticChargeModifier; // offset 0x1480, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaticChargeWorldModifier; // offset 0x1490, size 0x10, align 8
    float32 m_flWorldTraceRadius; // offset 0x14A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flUnitTraceRadius; // offset 0x14A4, size 0x4, align 4
};
