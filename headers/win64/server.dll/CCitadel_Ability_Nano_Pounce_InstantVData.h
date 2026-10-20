#pragma once

class CCitadel_Ability_Nano_Pounce_InstantVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1530, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // offset 0x1340, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // offset 0x1420, size 0xE0, align 8
    CSoundEventName m_AttackSound; // offset 0x1500, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1510, size 0x10, align 8
    float32 m_flAttackTimePhase01; // offset 0x1520, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAttackTimePhase02; // offset 0x1524, size 0x4, align 4
    float32 m_flAllyMinTargetRange; // offset 0x1528, size 0x4, align 4
    float32 m_flTargetVerticalOffset; // offset 0x152C, size 0x4, align 4
};
