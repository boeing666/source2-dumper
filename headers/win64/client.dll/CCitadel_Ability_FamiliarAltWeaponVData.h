#pragma once

class CCitadel_Ability_FamiliarAltWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x17D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PendingBulletParticle; // offset 0x16D0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAddPendingBulletSound; // offset 0x17B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFirePendingBulletSound; // offset 0x17C0, size 0x10, align 8
};
