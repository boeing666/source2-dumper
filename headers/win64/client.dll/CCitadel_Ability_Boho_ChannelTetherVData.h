#pragma once

class CCitadel_Ability_Boho_ChannelTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D50, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StartAoEParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExitAoEParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectParticle; // offset 0x1A08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1AE8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x1BC8, size 0xE0, align 8
    CSoundEventName m_strExpireSound; // offset 0x1CA8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1CB8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // offset 0x1CC8, size 0x88, align 8 | MPropertyStartGroup
};
