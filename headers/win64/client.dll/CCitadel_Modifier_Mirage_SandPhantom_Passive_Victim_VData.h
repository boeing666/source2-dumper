#pragma once

class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xE20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // offset 0x7A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusPlayerParticle; // offset 0x7B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusVictimParticle; // offset 0x890, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusNPCParticle; // offset 0x970, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackDamageParticle; // offset 0xA50, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0xB30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackReadyParticle; // offset 0xC10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackAppliedParticle; // offset 0xCF0, size 0xE0, align 8
    CSoundEventName m_ConsumeMaxStacksSound; // offset 0xDD0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ConsumeMaxStacksHeroSound; // offset 0xDE0, size 0x10, align 8
    CSoundEventName m_ApplyStackSound; // offset 0xDF0, size 0x10, align 8
    CSoundEventName m_ApplyStackNPCSound; // offset 0xE00, size 0x10, align 8
    CSoundEventName m_StunSound; // offset 0xE10, size 0x10, align 8
};
