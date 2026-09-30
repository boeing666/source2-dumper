#pragma once

class CAbilityCrowdControlVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1480, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1490, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FireRateBuffModifier; // offset 0x14A0, size 0x10, align 8
};
