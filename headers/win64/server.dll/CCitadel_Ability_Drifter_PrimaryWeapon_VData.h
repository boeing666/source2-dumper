#pragma once

class CCitadel_Ability_Drifter_PrimaryWeapon_VData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleRight; // offset 0x1360, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleLeft; // offset 0x1440, size 0xE0, align 8
    CUtlVector< Vector2D > m_vecOriginOffsetsLeft; // offset 0x1520, size 0x18, align 8 | MPropertyStartGroup
    float32 m_flCenterBulletRadiusOverride; // offset 0x1538, size 0x4, align 4
    char _pad_153C[0x4]; // offset 0x153C
};
