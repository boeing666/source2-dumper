#pragma once

class CCitadel_Ability_TurretClone_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1738, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTurretParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwapParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_TurretModel; // offset 0x1560, size 0xE0, align 8
    CSoundEventName m_strTurretLoopSound; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTurretLoopStartSound; // offset 0x1650, size 0x10, align 8
    CSoundEventName m_strTurretLoopEndSound; // offset 0x1660, size 0x10, align 8
    CSoundEventName m_strTurretShootSound; // offset 0x1670, size 0x10, align 8
    CSoundEventName m_strSwapSound; // offset 0x1680, size 0x10, align 8
    CSoundEventName m_strSwapCloneSound; // offset 0x1690, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x16A0, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x16B0, size 0x88, align 8 | MPropertyStartGroup
};
