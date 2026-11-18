#pragma once

class CCitadel_Ability_Nurse_Fear_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1340, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GazeModifier; // offset 0x10B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x10C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x10D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x11B0, size 0xE0, align 8
    float32 m_flCastRangeVisualFixup; // offset 0x1290, size 0x4, align 4
    char _pad_1294[0x4]; // offset 0x1294
    CSoundEventName m_strChannelEndSound; // offset 0x1298, size 0x10, align 8 | MPropertyStartGroup
    bool m_bFireFakeBullets; // offset 0x12A8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_12A9[0x3]; // offset 0x12A9
    float32 m_flFakeBulletsCycleTime; // offset 0x12AC, size 0x4, align 4
    float32 m_flFakeBulletSpread; // offset 0x12B0, size 0x4, align 4
    char _pad_12B4[0x4]; // offset 0x12B4
    CPiecewiseCurve m_LaunchHeightCurve; // offset 0x12B8, size 0x40, align 8 | MPropertyDescription
    float32 m_flRecoilDistance; // offset 0x12F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoilDuration; // offset 0x12FC, size 0x4, align 4 | MPropertyDescription
    CPiecewiseCurve m_RecoilDistanceCurve; // offset 0x1300, size 0x40, align 8 | MPropertyDescription
};
