#pragma once

class CCitadel_Ability_TurretClone_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTurretParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwapParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_TurretModel; // offset 0x15A8, size 0xE0, align 8
    CSoundEventName m_strTurretLoopSound; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTurretLoopStartSound; // offset 0x1698, size 0x10, align 8
    CSoundEventName m_strTurretLoopEndSound; // offset 0x16A8, size 0x10, align 8
    CSoundEventName m_strTurretShootSound; // offset 0x16B8, size 0x10, align 8
    CSoundEventName m_strSwapSound; // offset 0x16C8, size 0x10, align 8
    CSoundEventName m_strSwapCloneSound; // offset 0x16D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x16E8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x16F8, size 0xA0, align 8 | MPropertyStartGroup
};
