#pragma once

class CCitadel_Ability_FamiliarAltWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1AC8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PendingBulletParticle; // offset 0x19C8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAddPendingBulletSound; // offset 0x1AA8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFirePendingBulletSound; // offset 0x1AB8, size 0x10, align 8
};
