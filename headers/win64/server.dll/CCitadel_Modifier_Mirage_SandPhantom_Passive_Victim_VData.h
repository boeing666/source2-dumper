#pragma once

class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xDF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RevealModifier; // offset 0x770, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusPlayerParticle; // offset 0x780, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusVictimParticle; // offset 0x860, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusNPCParticle; // offset 0x940, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackDamageParticle; // offset 0xA20, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0xB00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackReadyParticle; // offset 0xBE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackAppliedParticle; // offset 0xCC0, size 0xE0, align 8
    CSoundEventName m_ConsumeMaxStacksSound; // offset 0xDA0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ConsumeMaxStacksHeroSound; // offset 0xDB0, size 0x10, align 8
    CSoundEventName m_ApplyStackSound; // offset 0xDC0, size 0x10, align 8
    CSoundEventName m_ApplyStackNPCSound; // offset 0xDD0, size 0x10, align 8
    CSoundEventName m_StunSound; // offset 0xDE0, size 0x10, align 8
};
