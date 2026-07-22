#pragma once

class CCitadel_Ability_TurretClone_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTurretParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwapParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_TurretModel; // offset 0x19D8, size 0xE0, align 8
    CSoundEventName m_strTurretLoopSound; // offset 0x1AB8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTurretLoopStartSound; // offset 0x1AC8, size 0x10, align 8
    CSoundEventName m_strTurretLoopEndSound; // offset 0x1AD8, size 0x10, align 8
    CSoundEventName m_strTurretShootSound; // offset 0x1AE8, size 0x10, align 8
    CSoundEventName m_strSwapSound; // offset 0x1AF8, size 0x10, align 8
    CSoundEventName m_strSwapCloneSound; // offset 0x1B08, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1B18, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x1B28, size 0x88, align 8 | MPropertyStartGroup
};
