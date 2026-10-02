#pragma once

class CAbilityImmobilizeTrapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // offset 0x1688, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x1768, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1778, size 0x10, align 8
    CSoundEventName m_strExpiredSound; // offset 0x1788, size 0x10, align 8
    CSoundEventName m_strImmobilizeTargetSound; // offset 0x1798, size 0x10, align 8
    CSoundEventName m_strArmingSound; // offset 0x17A8, size 0x10, align 8
    CSoundEventName m_strArmedSound; // offset 0x17B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GlitchModifier; // offset 0x17C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x17D8, size 0x10, align 8
};
