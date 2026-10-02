#pragma once

class CCitadel_Ability_Nano_Pounce_InstantVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // offset 0x14F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x15D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // offset 0x16B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrimaryHitParticle; // offset 0x1798, size 0xE0, align 8
    CSoundEventName m_AttackSound; // offset 0x1878, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1888, size 0x10, align 8
    float32 m_flAttackTimePhase01; // offset 0x1898, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAttackTimePhase02; // offset 0x189C, size 0x4, align 4
    float32 m_flAllyMinTargetRange; // offset 0x18A0, size 0x4, align 4
    float32 m_flTargetVerticalOffset; // offset 0x18A4, size 0x4, align 4
};
