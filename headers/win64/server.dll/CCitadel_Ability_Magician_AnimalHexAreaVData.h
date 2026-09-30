#pragma once

class CCitadel_Ability_Magician_AnimalHexAreaVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HexAreaModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetWarningSound; // offset 0x13B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ProjectileHitConfirm; // offset 0x13C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x13D0, size 0xE0, align 8 | MPropertyStartGroup
};
