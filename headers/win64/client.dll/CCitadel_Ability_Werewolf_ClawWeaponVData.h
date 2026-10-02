#pragma once

class CCitadel_Ability_Werewolf_ClawWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeParticle; // offset 0x16D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeHitParticle; // offset 0x17B0, size 0xE0, align 8
    CUtlVector< ClawSwipeInfo_t > m_vecClawSwipeInfos; // offset 0x1890, size 0x18, align 8 | MPropertyStartGroup
    CSoundEventName m_strSwipeHitSound; // offset 0x18A8, size 0x10, align 8 | MPropertyStartGroup
};
