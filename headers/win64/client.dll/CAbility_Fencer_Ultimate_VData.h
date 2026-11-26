#pragma once

class CAbility_Fencer_Ultimate_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1638, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flHoldingDuration; // offset 0x1080, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSweepingDuration; // offset 0x1084, size 0x4, align 4
    float32 m_flDamageTimeOffsetFromCamera; // offset 0x1088, size 0x4, align 4
    float32 m_flNonHeroDamageDelay; // offset 0x108C, size 0x4, align 4
    float32 m_flMaxVeerDistanceAllowed; // offset 0x1090, size 0x4, align 4
    float32 m_flMinCameraSweepSpeed; // offset 0x1094, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1098, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CasterArrivalModifier; // offset 0x10A8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x10B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetNonHeroModifier; // offset 0x10C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LowHealthGlowModifier; // offset 0x10D8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x10E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x11C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x12A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x1388, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltHoldEffect; // offset 0x1468, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DirPreviewEffect; // offset 0x1548, size 0xE0, align 8
    CSoundEventName m_strDashHitEnemy; // offset 0x1628, size 0x10, align 8 | MPropertyStartGroup
};
