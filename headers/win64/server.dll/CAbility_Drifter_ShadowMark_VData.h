#pragma once

class CAbility_Drifter_ShadowMark_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1330, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1150, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetTeleportModifier; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1250, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostTeleportModifier; // offset 0x1260, size 0x10, align 8
    CSoundEventName m_strHitHeroSound; // offset 0x1270, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitNPCSound; // offset 0x1280, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x1290, size 0xA0, align 8 | MPropertyStartGroup
};
