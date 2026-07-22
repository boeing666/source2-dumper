#pragma once

class CCitadel_Ability_Gravity_Lasso_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1928, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_GravityLassoSelf; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GravityLassoTarget; // offset 0x1828, size 0x10, align 8
    CSoundEventName m_TargetWarningSound; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreCastParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
};
