#pragma once

class CCitadel_Ability_Boho_ChannelTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StartAoEParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExitAoEParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1340, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x1420, size 0xE0, align 8
    CSoundEventName m_strExpireSound; // offset 0x1500, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1510, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // offset 0x1520, size 0xA0, align 8 | MPropertyStartGroup
};
