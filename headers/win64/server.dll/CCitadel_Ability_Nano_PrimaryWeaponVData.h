#pragma once

class CCitadel_Ability_Nano_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1B50, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EscapeModifier; // offset 0x19C8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashEffectParticle; // offset 0x19D8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strExpireSound; // offset 0x1AB8, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // offset 0x1AC8, size 0x88, align 8 | MPropertyStartGroup
};
