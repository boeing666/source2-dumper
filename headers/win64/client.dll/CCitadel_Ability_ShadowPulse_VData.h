#pragma once

class CCitadel_Ability_ShadowPulse_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // offset 0x1908, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectParticle; // offset 0x19E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1AC8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x1BA8, size 0xE0, align 8
    CSoundEventName m_strExpireSound; // offset 0x1C88, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // offset 0x1C98, size 0x88, align 8 | MPropertyStartGroup
};
