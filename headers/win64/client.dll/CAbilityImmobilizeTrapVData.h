#pragma once

class CAbilityImmobilizeTrapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // offset 0x1AB8, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1BA8, size 0x10, align 8
    CSoundEventName m_strExpiredSound; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_strImmobilizeTargetSound; // offset 0x1BC8, size 0x10, align 8
    CSoundEventName m_strArmingSound; // offset 0x1BD8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GlitchModifier; // offset 0x1BE8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1BF8, size 0x10, align 8
};
