#pragma once

class CCitadel_Ability_Artist_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x19B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleRight; // offset 0x16D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleRightMove; // offset 0x17B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleLeft; // offset 0x1898, size 0xE0, align 8
    float32 m_flMoveSlashThreshold; // offset 0x1978, size 0x4, align 4
    char _pad_197C[0x4]; // offset 0x197C
    CUtlVector< ArtistWeaponBulletInfo_t > m_vecArtistWeaponBulletInfo; // offset 0x1980, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< ArtistWeaponBulletInfo_t > m_vecArtistEmpoweredWeaponBulletInfo; // offset 0x1998, size 0x18, align 8
    int32 m_iBaseBulletCount; // offset 0x19B0, size 0x4, align 4
    int32 m_iEmpoweredBulletCount; // offset 0x19B4, size 0x4, align 4
};
