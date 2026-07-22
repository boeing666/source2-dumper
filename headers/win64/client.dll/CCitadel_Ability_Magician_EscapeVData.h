#pragma once

class CCitadel_Ability_Magician_EscapeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EscapedModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TetherParticle; // offset 0x1908, size 0xE0, align 8
    CSoundEventName m_strEscaped; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // offset 0x19F8, size 0x88, align 8 | MPropertyStartGroup
};
