#pragma once

class CAbility_Drifter_ShadowMark_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetTeleportModifier; // offset 0x15B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x15C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostTeleportModifier; // offset 0x15D8, size 0x10, align 8
    CSoundEventName m_strHitHeroSound; // offset 0x15E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitNPCSound; // offset 0x15F8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x1608, size 0xA0, align 8 | MPropertyStartGroup
};
