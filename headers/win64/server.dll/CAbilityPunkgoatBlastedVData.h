#pragma once

class CAbilityPunkgoatBlastedVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BlastedModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BlastedPassiveModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ShredModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HealthModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HealthDisplayModifier; // offset 0x13E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeReloadFX; // offset 0x13F0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strMeleeReloadSoundLight; // offset 0x14D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMeleeReloadSoundHeavy; // offset 0x14E0, size 0x10, align 8
};
