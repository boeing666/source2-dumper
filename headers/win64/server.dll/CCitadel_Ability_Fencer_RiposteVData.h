#pragma once

class CCitadel_Ability_Fencer_RiposteVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1590, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteDashParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RiposteParriedParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletReflectAttackerHitFx; // offset 0x1320, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletReflectImpactParticle; // offset 0x1400, size 0xE0, align 8
    CSoundEventName m_strDashStart; // offset 0x14E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStunImpactSound; // offset 0x14F0, size 0x10, align 8
    CSoundEventName m_strAvoidDamage; // offset 0x1500, size 0x10, align 8
    CSoundEventName m_strStartParry; // offset 0x1510, size 0x10, align 8
    CSoundEventName m_strTargetingLoopSound; // offset 0x1520, size 0x10, align 8
    CSoundEventName m_strTargetingExpireSound; // offset 0x1530, size 0x10, align 8
    CSoundEventName m_strBulletReflectSound; // offset 0x1540, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetLifestealModifier; // offset 0x1550, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PommelDebuffModifier; // offset 0x1560, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1570, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x1574, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x1578, size 0x4, align 4
    float32 m_flParryMoveSpeed; // offset 0x157C, size 0x4, align 4
    float32 m_flDashAnimDelay; // offset 0x1580, size 0x4, align 4
    float32 m_flPommelKnockUpSpeed; // offset 0x1584, size 0x4, align 4
    float32 m_flPommelKnockBackSpeed; // offset 0x1588, size 0x4, align 4
    char _pad_158C[0x4]; // offset 0x158C
};
