#pragma once

class CModifierAirRaidVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7D0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x7D0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x7E0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strWeaponShootSound; // offset 0x8C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackerHitSound; // offset 0x8D0, size 0x10, align 8
};
