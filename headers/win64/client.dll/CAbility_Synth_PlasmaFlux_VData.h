#pragma once

class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AC0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1908, size 0xE0, align 8
    CSoundEventName m_strCasterLoopingSound; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileExpireSound; // offset 0x19F8, size 0x10, align 8
    CSoundEventName m_strImpactSound; // offset 0x1A08, size 0x10, align 8
    CSoundEventName m_strTimerSound; // offset 0x1A18, size 0x10, align 8
    CSoundEventName m_strArrivedSound; // offset 0x1A28, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x1A38, size 0x88, align 8 | MPropertyStartGroup
};
