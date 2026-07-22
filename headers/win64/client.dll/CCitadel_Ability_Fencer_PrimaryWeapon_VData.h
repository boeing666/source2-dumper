#pragma once

class CCitadel_Ability_Fencer_PrimaryWeapon_VData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleRight; // offset 0x19C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleRightMove; // offset 0x1AA0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeTracerParticleLeft; // offset 0x1B80, size 0xE0, align 8
    float32 m_flMoveSlashThreshold; // offset 0x1C60, size 0x4, align 4
    char _pad_1C64[0x4]; // offset 0x1C64
    CUtlVector< SlashInfo_t > m_vecSlashInfos; // offset 0x1C68, size 0x18, align 8 | MPropertyStartGroup
};
