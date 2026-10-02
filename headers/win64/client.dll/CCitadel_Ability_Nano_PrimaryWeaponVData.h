#pragma once

class CCitadel_Ability_Nano_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1870, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EscapeModifier; // offset 0x16D0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashEffectParticle; // offset 0x16E0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strExpireSound; // offset 0x17C0, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // offset 0x17D0, size 0xA0, align 8 | MPropertyStartGroup
};
