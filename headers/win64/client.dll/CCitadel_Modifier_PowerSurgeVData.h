#pragma once

class CCitadel_Modifier_PowerSurgeVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponFxParticle; // offset 0x840, size 0xE0, align 8
    CSoundEventName m_strWeaponShootSound; // offset 0x920, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBulletWhizSound; // offset 0x930, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x940, size 0x10, align 8 | MPropertyStartGroup
};
