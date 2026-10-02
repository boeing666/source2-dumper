#pragma once

class CAbilityWreckingBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // offset 0x14C8, size 0xE0, align 8
    CUtlString m_SummonParticleAttachment; // offset 0x15A8, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x15B0, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AutoThrowModifier; // offset 0x1690, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HoldingBallLoop; // offset 0x16A0, size 0x10, align 8 | MPropertyStartGroup
};
