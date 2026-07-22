#pragma once

class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HoldBombModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DroppedBuffModifier; // offset 0x1848, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // offset 0x1858, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1868, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1878, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x1888, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // offset 0x1898, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBombEffect; // offset 0x1978, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1A58, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1B38, size 0x10, align 8 | MPropertyGroupName
    float32 m_flAirDrag; // offset 0x1B48, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxFallSpeed; // offset 0x1B4C, size 0x4, align 4
    float32 m_flTargetAirSpeedFast; // offset 0x1B50, size 0x4, align 4
    float32 m_flTargetAirSpeedBase; // offset 0x1B54, size 0x4, align 4
    float32 m_flSprintMult; // offset 0x1B58, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x1B5C, size 0x4, align 4
    float32 m_flDecceleration; // offset 0x1B60, size 0x4, align 4
    float32 m_flAirSideSpeedPercent; // offset 0x1B64, size 0x4, align 4
    float32 m_flBoostEndVerticalSpeed; // offset 0x1B68, size 0x4, align 4
    float32 m_flBoostSpeedUp; // offset 0x1B6C, size 0x4, align 4
    float32 m_flCrouchLaunchReduction; // offset 0x1B70, size 0x4, align 4
    float32 m_flMinFlyHeight; // offset 0x1B74, size 0x4, align 4
    float32 m_flMaxFlyHeight; // offset 0x1B78, size 0x4, align 4
    float32 m_flMaxPitchUp; // offset 0x1B7C, size 0x4, align 4
    float32 m_flMaxPitchDown; // offset 0x1B80, size 0x4, align 4
    float32 m_flAllyDelayedBoostTime; // offset 0x1B84, size 0x4, align 4
    float32 m_flChannelingAirDrag; // offset 0x1B88, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x1B8C, size 0x4, align 4
    float32 m_flBombReleaseSpeed; // offset 0x1B90, size 0x4, align 4
    float32 m_flBombReleasePitch; // offset 0x1B94, size 0x4, align 4
    float32 m_flBombDropReleaseOffset; // offset 0x1B98, size 0x4, align 4
    float32 m_flHoldBombOffsetX; // offset 0x1B9C, size 0x4, align 4
    float32 m_flHoldBombOffsetY; // offset 0x1BA0, size 0x4, align 4
    float32 m_flHoldBombOffsetZ; // offset 0x1BA4, size 0x4, align 4
    float32 m_flAnglePitchBias; // offset 0x1BA8, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1BAC, size 0x4, align 4
    float32 m_flMoveCollideSpeed; // offset 0x1BB0, size 0x4, align 4
    char _pad_1BB4[0x4]; // offset 0x1BB4
};
