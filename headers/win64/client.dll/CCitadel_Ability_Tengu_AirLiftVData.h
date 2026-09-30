#pragma once

class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HoldBombModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DroppedBuffModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // offset 0x13E0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x13F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1400, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x1410, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // offset 0x1420, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBombEffect; // offset 0x1500, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x15E0, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x16C0, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strHoldBombLoopSound; // offset 0x16D0, size 0x10, align 8
    CSoundEventName m_strBombLaunchSound; // offset 0x16E0, size 0x10, align 8
    CSoundEventName m_strBarrierSound; // offset 0x16F0, size 0x10, align 8
    float32 m_flAirDrag; // offset 0x1700, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxFallSpeed; // offset 0x1704, size 0x4, align 4
    float32 m_flTargetAirSpeedFast; // offset 0x1708, size 0x4, align 4
    float32 m_flTargetAirSpeedBase; // offset 0x170C, size 0x4, align 4
    float32 m_flSprintMult; // offset 0x1710, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x1714, size 0x4, align 4
    float32 m_flDecceleration; // offset 0x1718, size 0x4, align 4
    float32 m_flAirSideSpeedPercent; // offset 0x171C, size 0x4, align 4
    float32 m_flBoostEndVerticalSpeed; // offset 0x1720, size 0x4, align 4
    float32 m_flBoostSpeedUp; // offset 0x1724, size 0x4, align 4
    float32 m_flCrouchLaunchReduction; // offset 0x1728, size 0x4, align 4
    float32 m_flMinFlyHeight; // offset 0x172C, size 0x4, align 4
    float32 m_flMaxFlyHeight; // offset 0x1730, size 0x4, align 4
    float32 m_flMaxPitchUp; // offset 0x1734, size 0x4, align 4
    float32 m_flMaxPitchDown; // offset 0x1738, size 0x4, align 4
    float32 m_flAllyDelayedBoostTime; // offset 0x173C, size 0x4, align 4
    float32 m_flChannelingAirDrag; // offset 0x1740, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x1744, size 0x4, align 4
    float32 m_flBombReleaseSpeed; // offset 0x1748, size 0x4, align 4
    float32 m_flBombReleasePitch; // offset 0x174C, size 0x4, align 4
    float32 m_flBombDropReleaseOffset; // offset 0x1750, size 0x4, align 4
    float32 m_flHoldBombOffsetX; // offset 0x1754, size 0x4, align 4
    float32 m_flHoldBombOffsetY; // offset 0x1758, size 0x4, align 4
    float32 m_flHoldBombOffsetZ; // offset 0x175C, size 0x4, align 4
    float32 m_flAnglePitchBias; // offset 0x1760, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1764, size 0x4, align 4
    float32 m_flMoveCollideSpeed; // offset 0x1768, size 0x4, align 4
    char _pad_176C[0x4]; // offset 0x176C
};
