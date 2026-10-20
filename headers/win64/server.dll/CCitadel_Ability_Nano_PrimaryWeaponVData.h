#pragma once

class CCitadel_Ability_Nano_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EscapeModifier; // offset 0x1360, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashEffectParticle; // offset 0x1370, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strExpireSound; // offset 0x1450, size 0x10, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // offset 0x1460, size 0xA0, align 8 | MPropertyStartGroup
};
