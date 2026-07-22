#pragma once

class CCitadel_Ability_Familiar_AttachVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AttachedModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MovingToAttachModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CameraDummyModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SpeedModifier; // offset 0x1848, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeathBarrierModifier; // offset 0x1858, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOutLockoutModifier; // offset 0x1868, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchTossModifier; // offset 0x1878, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LaunchedSelfModifier; // offset 0x1888, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AllyLockoutModifier; // offset 0x1898, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HopOffBuffModifier; // offset 0x18A8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AttachHealModifier; // offset 0x18B8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sCamDummyModelName; // offset 0x18C8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FakeFamiliarParticle; // offset 0x19A8, size 0xE0, align 8
    float32 m_flDetachForce; // offset 0x1A88, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDetachForceUp; // offset 0x1A8C, size 0x4, align 4
    float32 m_flTriggeredDetachForce; // offset 0x1A90, size 0x4, align 4
    float32 m_flTriggeredDetachForceUp; // offset 0x1A94, size 0x4, align 4
    CPiecewiseCurve m_MovingToAttachProjectileSpeedCurve; // offset 0x1A98, size 0x40, align 8
    CPiecewiseCurve m_LaunchAngleRemap; // offset 0x1AD8, size 0x40, align 8
};
