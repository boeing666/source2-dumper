#pragma once

class CAbility_Fencer_Ultimate_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1948, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flHoldingDuration; // offset 0x13A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSweepingDuration; // offset 0x13A4, size 0x4, align 4
    float32 m_flDamageTimeOffsetFromCamera; // offset 0x13A8, size 0x4, align 4
    float32 m_flNonHeroDamageDelay; // offset 0x13AC, size 0x4, align 4
    float32 m_flMaxVeerDistanceAllowed; // offset 0x13B0, size 0x4, align 4
    float32 m_flMinCameraSweepSpeed; // offset 0x13B4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x13B8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CasterArrivalModifier; // offset 0x13C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x13D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetNonHeroModifier; // offset 0x13E8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x14D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x15B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1698, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltHoldEffect; // offset 0x1778, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirPreviewEffect; // offset 0x1858, size 0xE0, align 8
    CSoundEventName m_strDashHitEnemy; // offset 0x1938, size 0x10, align 8 | MPropertyStartGroup
};
