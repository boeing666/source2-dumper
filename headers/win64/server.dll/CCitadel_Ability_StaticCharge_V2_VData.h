#pragma once

class CCitadel_Ability_StaticCharge_V2_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1188, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaticChargeModifier; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StaticChargeWorldModifier; // offset 0x1170, size 0x10, align 8
    float32 m_flWorldTraceRadius; // offset 0x1180, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flUnitTraceRadius; // offset 0x1184, size 0x4, align 4
};
