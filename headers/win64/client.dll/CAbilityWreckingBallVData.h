#pragma once

class CAbilityWreckingBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // offset 0x1480, size 0xE0, align 8
    CUtlString m_SummonParticleAttachment; // offset 0x1560, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1568, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AutoThrowModifier; // offset 0x1648, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HoldingBallLoop; // offset 0x1658, size 0x10, align 8 | MPropertyStartGroup
};
