#pragma once

class CAbilityImmobilizeTrapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // offset 0x1640, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x1720, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1730, size 0x10, align 8
    CSoundEventName m_strExpiredSound; // offset 0x1740, size 0x10, align 8
    CSoundEventName m_strImmobilizeTargetSound; // offset 0x1750, size 0x10, align 8
    CSoundEventName m_strArmingSound; // offset 0x1760, size 0x10, align 8
    CSoundEventName m_strArmedSound; // offset 0x1770, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GlitchModifier; // offset 0x1780, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1790, size 0x10, align 8
};
