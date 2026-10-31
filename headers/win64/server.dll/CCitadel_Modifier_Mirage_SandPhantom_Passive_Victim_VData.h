#pragma once

class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xE28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // offset 0x7A8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusPlayerParticle; // offset 0x7B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusVictimParticle; // offset 0x898, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusNPCParticle; // offset 0x978, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackDamageParticle; // offset 0xA58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0xB38, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackReadyParticle; // offset 0xC18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackAppliedParticle; // offset 0xCF8, size 0xE0, align 8
    CSoundEventName m_ConsumeMaxStacksSound; // offset 0xDD8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ConsumeMaxStacksHeroSound; // offset 0xDE8, size 0x10, align 8
    CSoundEventName m_ApplyStackSound; // offset 0xDF8, size 0x10, align 8
    CSoundEventName m_ApplyStackNPCSound; // offset 0xE08, size 0x10, align 8
    CSoundEventName m_StunSound; // offset 0xE18, size 0x10, align 8
};
