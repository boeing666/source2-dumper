#pragma once

class CCitadel_Ability_Magician_AnimalHexAreaVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HexAreaModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetWarningSound; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ProjectileHitConfirm; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
};
