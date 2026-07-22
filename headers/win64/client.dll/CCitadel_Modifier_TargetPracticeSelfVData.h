#pragma once

class CCitadel_Modifier_TargetPracticeSelfVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strWeaponShootSound; // offset 0x830, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBulletWhizSound; // offset 0x840, size 0x10, align 8
};
