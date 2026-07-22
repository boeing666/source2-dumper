#pragma once

class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusPlayerParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusVictimParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffStatusNPCParticle; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackDamageParticle; // offset 0xA00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackReadyParticle; // offset 0xAE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackAppliedParticle; // offset 0xBC0, size 0xE0, align 8
    CSoundEventName m_ConsumeMaxStacksSound; // offset 0xCA0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ConsumeMaxStacksHeroSound; // offset 0xCB0, size 0x10, align 8
    CSoundEventName m_ApplyStackSound; // offset 0xCC0, size 0x10, align 8
    CSoundEventName m_ApplyStackNPCSound; // offset 0xCD0, size 0x10, align 8
    CSoundEventName m_StunSound; // offset 0xCE0, size 0x10, align 8
};
