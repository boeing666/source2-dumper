#pragma once

class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x14D8, size 0xE0, align 8
    CSoundEventName m_strCasterLoopingSound; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileExpireSound; // offset 0x15C8, size 0x10, align 8
    CSoundEventName m_strImpactSound; // offset 0x15D8, size 0x10, align 8
    CSoundEventName m_strTimerSound; // offset 0x15E8, size 0x10, align 8
    CSoundEventName m_strArrivedSound; // offset 0x15F8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x1608, size 0xA0, align 8 | MPropertyStartGroup
};
