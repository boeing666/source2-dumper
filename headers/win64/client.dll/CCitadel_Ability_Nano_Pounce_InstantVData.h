#pragma once

class CCitadel_Ability_Nano_Pounce_InstantVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1CD8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1A08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // offset 0x1AE8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // offset 0x1BC8, size 0xE0, align 8
    CSoundEventName m_AttackSound; // offset 0x1CA8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1CB8, size 0x10, align 8
    float32 m_flAttackTimePhase01; // offset 0x1CC8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAttackTimePhase02; // offset 0x1CCC, size 0x4, align 4
    float32 m_flAllyMinTargetRange; // offset 0x1CD0, size 0x4, align 4
    float32 m_flTargetVerticalOffset; // offset 0x1CD4, size 0x4, align 4
};
