#pragma once

class CCitadel_Ability_Werewolf_ClawWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeParticle; // offset 0x19C8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwipeHitParticle; // offset 0x1AA8, size 0xE0, align 8
    CUtlVector< ClawSwipeInfo_t > m_vecClawSwipeInfos; // offset 0x1B88, size 0x18, align 8 | MPropertyStartGroup
    CSoundEventName m_strSwipeHitSound; // offset 0x1BA0, size 0x10, align 8 | MPropertyStartGroup
};
