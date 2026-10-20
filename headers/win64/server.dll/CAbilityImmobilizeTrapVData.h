#pragma once

class CAbilityImmobilizeTrapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1470, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // offset 0x1310, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1400, size 0x10, align 8
    CSoundEventName m_strExpiredSound; // offset 0x1410, size 0x10, align 8
    CSoundEventName m_strImmobilizeTargetSound; // offset 0x1420, size 0x10, align 8
    CSoundEventName m_strArmingSound; // offset 0x1430, size 0x10, align 8
    CSoundEventName m_strArmedSound; // offset 0x1440, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GlitchModifier; // offset 0x1450, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1460, size 0x10, align 8
};
