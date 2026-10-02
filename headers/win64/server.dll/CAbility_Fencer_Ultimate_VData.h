#pragma once

class CAbility_Fencer_Ultimate_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1990, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flHoldingDuration; // offset 0x13E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSweepingDuration; // offset 0x13EC, size 0x4, align 4
    float32 m_flDamageTimeOffsetFromCamera; // offset 0x13F0, size 0x4, align 4
    float32 m_flNonHeroDamageDelay; // offset 0x13F4, size 0x4, align 4
    float32 m_flMaxVeerDistanceAllowed; // offset 0x13F8, size 0x4, align 4
    float32 m_flMinCameraSweepSpeed; // offset 0x13FC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CasterArrivalModifier; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1420, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetNonHeroModifier; // offset 0x1430, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x1440, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1520, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1600, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x16E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltHoldEffect; // offset 0x17C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirPreviewEffect; // offset 0x18A0, size 0xE0, align 8
    CSoundEventName m_strDashHitEnemy; // offset 0x1980, size 0x10, align 8 | MPropertyStartGroup
};
