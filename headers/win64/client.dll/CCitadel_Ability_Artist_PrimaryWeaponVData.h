#pragma once

class CCitadel_Ability_Artist_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1638, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1358]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleRight; // offset 0x1358, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleRightMove; // offset 0x1438, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleLeft; // offset 0x1518, size 0xE0, align 8
    float32 m_flMoveSlashThreshold; // offset 0x15F8, size 0x4, align 4
    char _pad_15FC[0x4]; // offset 0x15FC
    CUtlVector< ArtistWeaponBulletInfo_t > m_vecArtistWeaponBulletInfo; // offset 0x1600, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< ArtistWeaponBulletInfo_t > m_vecArtistEmpoweredWeaponBulletInfo; // offset 0x1618, size 0x18, align 8
    int32 m_iBaseBulletCount; // offset 0x1630, size 0x4, align 4
    int32 m_iEmpoweredBulletCount; // offset 0x1634, size 0x4, align 4
};
