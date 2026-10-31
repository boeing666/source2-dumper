#pragma once

class CCitadel_Ability_Familiar_AttachVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1380, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AttachedModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MovingToAttachModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CameraDummyModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SpeedModifier; // offset 0x10B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeathBarrierModifier; // offset 0x10C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOutLockoutModifier; // offset 0x10D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchTossModifier; // offset 0x10E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchedSelfModifier; // offset 0x10F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyLockoutModifier; // offset 0x1100, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOffBuffModifier; // offset 0x1110, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AttachHealModifier; // offset 0x1120, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sCamDummyModelName; // offset 0x1130, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FakeFamiliarParticle; // offset 0x1210, size 0xE0, align 8
    float32 m_flDetachForce; // offset 0x12F0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDetachForceUp; // offset 0x12F4, size 0x4, align 4
    float32 m_flTriggeredDetachForce; // offset 0x12F8, size 0x4, align 4
    float32 m_flTriggeredDetachForceUp; // offset 0x12FC, size 0x4, align 4
    CPiecewiseCurve m_MovingToAttachProjectileSpeedCurve; // offset 0x1300, size 0x40, align 8
    CPiecewiseCurve m_LaunchAngleRemap; // offset 0x1340, size 0x40, align 8
};
