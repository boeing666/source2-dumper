#pragma once

class CCitadel_Ability_Familiar_AttachVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AttachedModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MovingToAttachModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CameraDummyModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SpeedModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeathBarrierModifier; // offset 0x13E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOutLockoutModifier; // offset 0x13F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchTossModifier; // offset 0x1400, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchedSelfModifier; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyLockoutModifier; // offset 0x1420, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOffBuffModifier; // offset 0x1430, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AttachHealModifier; // offset 0x1440, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sCamDummyModelName; // offset 0x1450, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FakeFamiliarParticle; // offset 0x1530, size 0xE0, align 8
    float32 m_flDetachForce; // offset 0x1610, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDetachForceUp; // offset 0x1614, size 0x4, align 4
    float32 m_flTriggeredDetachForce; // offset 0x1618, size 0x4, align 4
    float32 m_flTriggeredDetachForceUp; // offset 0x161C, size 0x4, align 4
    CPiecewiseCurve m_MovingToAttachProjectileSpeedCurve; // offset 0x1620, size 0x40, align 8
    CPiecewiseCurve m_LaunchAngleRemap; // offset 0x1660, size 0x40, align 8
};
