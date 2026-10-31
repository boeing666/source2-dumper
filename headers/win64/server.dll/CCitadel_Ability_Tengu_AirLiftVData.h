#pragma once

class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1450, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HoldBombModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DroppedBuffModifier; // offset 0x10B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // offset 0x10C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x10D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x10E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x10F0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // offset 0x1100, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBombEffect; // offset 0x11E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x12C0, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x13A0, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strHoldBombLoopSound; // offset 0x13B0, size 0x10, align 8
    CSoundEventName m_strBombLaunchSound; // offset 0x13C0, size 0x10, align 8
    CSoundEventName m_strBarrierSound; // offset 0x13D0, size 0x10, align 8
    float32 m_flAirDrag; // offset 0x13E0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxFallSpeed; // offset 0x13E4, size 0x4, align 4
    float32 m_flTargetAirSpeedFast; // offset 0x13E8, size 0x4, align 4
    float32 m_flTargetAirSpeedBase; // offset 0x13EC, size 0x4, align 4
    float32 m_flSprintMult; // offset 0x13F0, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x13F4, size 0x4, align 4
    float32 m_flDecceleration; // offset 0x13F8, size 0x4, align 4
    float32 m_flAirSideSpeedPercent; // offset 0x13FC, size 0x4, align 4
    float32 m_flBoostEndVerticalSpeed; // offset 0x1400, size 0x4, align 4
    float32 m_flBoostSpeedUp; // offset 0x1404, size 0x4, align 4
    float32 m_flCrouchLaunchReduction; // offset 0x1408, size 0x4, align 4
    float32 m_flMinFlyHeight; // offset 0x140C, size 0x4, align 4
    float32 m_flMaxFlyHeight; // offset 0x1410, size 0x4, align 4
    float32 m_flMaxPitchUp; // offset 0x1414, size 0x4, align 4
    float32 m_flMaxPitchDown; // offset 0x1418, size 0x4, align 4
    float32 m_flAllyDelayedBoostTime; // offset 0x141C, size 0x4, align 4
    float32 m_flChannelingAirDrag; // offset 0x1420, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x1424, size 0x4, align 4
    float32 m_flBombReleaseSpeed; // offset 0x1428, size 0x4, align 4
    float32 m_flBombReleasePitch; // offset 0x142C, size 0x4, align 4
    float32 m_flBombDropReleaseOffset; // offset 0x1430, size 0x4, align 4
    float32 m_flHoldBombOffsetX; // offset 0x1434, size 0x4, align 4
    float32 m_flHoldBombOffsetY; // offset 0x1438, size 0x4, align 4
    float32 m_flHoldBombOffsetZ; // offset 0x143C, size 0x4, align 4
    float32 m_flAnglePitchBias; // offset 0x1440, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1444, size 0x4, align 4
    float32 m_flMoveCollideSpeed; // offset 0x1448, size 0x4, align 4
    char _pad_144C[0x4]; // offset 0x144C
};
