#pragma once

class CCitadel_Ability_Tokamak_CrimsonCannonVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserShot; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterOnlyTargetParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyTargetedParticle; // offset 0x1AB8, size 0xE0, align 8
    CSoundEventName m_strEnemyBeenTargetedSound; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCasterTargetSelectedSound; // offset 0x1BA8, size 0x10, align 8
    CSoundEventName m_strFireSound; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_strImpactSound; // offset 0x1BC8, size 0x10, align 8
    CSoundEventName m_strBlockedSound; // offset 0x1BD8, size 0x10, align 8
};
