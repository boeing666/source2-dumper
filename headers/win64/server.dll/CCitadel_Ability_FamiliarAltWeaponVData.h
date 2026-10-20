#pragma once

class CCitadel_Ability_FamiliarAltWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1460, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PendingBulletParticle; // offset 0x1360, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAddPendingBulletSound; // offset 0x1440, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFirePendingBulletSound; // offset 0x1450, size 0x10, align 8
};
