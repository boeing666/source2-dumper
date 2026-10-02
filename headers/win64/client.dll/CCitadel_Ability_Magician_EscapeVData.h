#pragma once

class CCitadel_Ability_Magician_EscapeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EscapedModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TetherParticle; // offset 0x14D8, size 0xE0, align 8
    CSoundEventName m_strEscaped; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x15C8, size 0xA0, align 8 | MPropertyStartGroup
};
