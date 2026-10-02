#pragma once

class CCitadel_Ability_Familiar_AttachVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AttachedModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MovingToAttachModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CameraDummyModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SpeedModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeathBarrierModifier; // offset 0x1428, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOutLockoutModifier; // offset 0x1438, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchTossModifier; // offset 0x1448, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchedSelfModifier; // offset 0x1458, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyLockoutModifier; // offset 0x1468, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOffBuffModifier; // offset 0x1478, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AttachHealModifier; // offset 0x1488, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sCamDummyModelName; // offset 0x1498, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FakeFamiliarParticle; // offset 0x1578, size 0xE0, align 8
    float32 m_flDetachForce; // offset 0x1658, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDetachForceUp; // offset 0x165C, size 0x4, align 4
    float32 m_flTriggeredDetachForce; // offset 0x1660, size 0x4, align 4
    float32 m_flTriggeredDetachForceUp; // offset 0x1664, size 0x4, align 4
    CPiecewiseCurve m_MovingToAttachProjectileSpeedCurve; // offset 0x1668, size 0x40, align 8
    CPiecewiseCurve m_LaunchAngleRemap; // offset 0x16A8, size 0x40, align 8
};
