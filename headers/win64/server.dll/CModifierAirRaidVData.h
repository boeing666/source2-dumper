#pragma once

class CModifierAirRaidVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x7C8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x7D8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strWeaponShootSound; // offset 0x8B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackerHitSound; // offset 0x8C8, size 0x10, align 8
};
