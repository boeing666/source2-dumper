#pragma once

class CCitadel_Ability_StaticCharge_V2_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1920, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaticChargeModifier; // offset 0x18F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaticChargeWorldModifier; // offset 0x1908, size 0x10, align 8
    float32 m_flWorldTraceRadius; // offset 0x1918, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flUnitTraceRadius; // offset 0x191C, size 0x4, align 4
};
