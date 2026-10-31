#pragma once

class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1340, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1170, size 0xE0, align 8
    CSoundEventName m_strCasterLoopingSound; // offset 0x1250, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileExpireSound; // offset 0x1260, size 0x10, align 8
    CSoundEventName m_strImpactSound; // offset 0x1270, size 0x10, align 8
    CSoundEventName m_strTimerSound; // offset 0x1280, size 0x10, align 8
    CSoundEventName m_strArrivedSound; // offset 0x1290, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x12A0, size 0xA0, align 8 | MPropertyStartGroup
};
