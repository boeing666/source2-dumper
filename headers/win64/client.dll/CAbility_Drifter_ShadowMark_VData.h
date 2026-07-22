#pragma once

class CAbility_Drifter_ShadowMark_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AC0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x18F8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetTeleportModifier; // offset 0x19E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x19F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostTeleportModifier; // offset 0x1A08, size 0x10, align 8
    CSoundEventName m_strHitHeroSound; // offset 0x1A18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitNPCSound; // offset 0x1A28, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x1A38, size 0x88, align 8 | MPropertyStartGroup
};
