#pragma once

class CCitadel_Ability_Fencer_RiposteVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteDashParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteParriedParticle; // offset 0x1240, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStunImpactSound; // offset 0x1330, size 0x10, align 8
    CSoundEventName m_strAvoidDamage; // offset 0x1340, size 0x10, align 8
    CSoundEventName m_strStartParry; // offset 0x1350, size 0x10, align 8
    CSoundEventName m_strTargetingLoopSound; // offset 0x1360, size 0x10, align 8
    CSoundEventName m_strTargetingExpireSound; // offset 0x1370, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1380, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetLifestealModifier; // offset 0x1390, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // offset 0x13A0, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x13B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x13B4, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x13B8, size 0x4, align 4
    float32 m_flParryMoveSpeed; // offset 0x13BC, size 0x4, align 4
    float32 m_flDashAnimDelay; // offset 0x13C0, size 0x4, align 4
    char _pad_13C4[0x4]; // offset 0x13C4
};
