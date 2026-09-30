#pragma once

class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1648, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1490, size 0xE0, align 8
    CSoundEventName m_strCasterLoopingSound; // offset 0x1570, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileExpireSound; // offset 0x1580, size 0x10, align 8
    CSoundEventName m_strImpactSound; // offset 0x1590, size 0x10, align 8
    CSoundEventName m_strTimerSound; // offset 0x15A0, size 0x10, align 8
    CSoundEventName m_strArrivedSound; // offset 0x15B0, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x15C0, size 0x88, align 8 | MPropertyStartGroup
};
