#pragma once

class CCitadel_Ability_VampireBat_BatBlinkVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1728, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlinkStartParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlinkEndParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlinkTravelParticle; // offset 0x1560, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffModifier; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1650, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x1660, size 0x88, align 8 | MPropertyStartGroup
    CSoundEventName m_BlinkStartSound; // offset 0x16E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BlinkEndSound; // offset 0x16F8, size 0x10, align 8
    CSoundEventName m_BlinkEndFinalSound; // offset 0x1708, size 0x10, align 8
    CSoundEventName m_strWhizbySound; // offset 0x1718, size 0x10, align 8
};
