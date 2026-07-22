#pragma once

class CAbility_Fencer_Ultimate_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1DC0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flHoldingDuration; // offset 0x1818, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSweepingDuration; // offset 0x181C, size 0x4, align 4
    float32 m_flDamageTimeOffsetFromCamera; // offset 0x1820, size 0x4, align 4
    float32 m_flNonHeroDamageDelay; // offset 0x1824, size 0x4, align 4
    float32 m_flMaxVeerDistanceAllowed; // offset 0x1828, size 0x4, align 4
    float32 m_flMinCameraSweepSpeed; // offset 0x182C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1830, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CasterArrivalModifier; // offset 0x1840, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1850, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetNonHeroModifier; // offset 0x1860, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x1870, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1A30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1B10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltHoldEffect; // offset 0x1BF0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirPreviewEffect; // offset 0x1CD0, size 0xE0, align 8
    CSoundEventName m_strDashHitEnemy; // offset 0x1DB0, size 0x10, align 8 | MPropertyStartGroup
};
