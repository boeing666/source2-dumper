#pragma once

class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HoldBombModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DroppedBuffModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // offset 0x1428, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1438, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1448, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x1458, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // offset 0x1468, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBombEffect; // offset 0x1548, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1628, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1708, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strHoldBombLoopSound; // offset 0x1718, size 0x10, align 8
    CSoundEventName m_strBombLaunchSound; // offset 0x1728, size 0x10, align 8
    CSoundEventName m_strBarrierSound; // offset 0x1738, size 0x10, align 8
    float32 m_flAirDrag; // offset 0x1748, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxFallSpeed; // offset 0x174C, size 0x4, align 4
    float32 m_flTargetAirSpeedFast; // offset 0x1750, size 0x4, align 4
    float32 m_flTargetAirSpeedBase; // offset 0x1754, size 0x4, align 4
    float32 m_flSprintMult; // offset 0x1758, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x175C, size 0x4, align 4
    float32 m_flDecceleration; // offset 0x1760, size 0x4, align 4
    float32 m_flAirSideSpeedPercent; // offset 0x1764, size 0x4, align 4
    float32 m_flBoostEndVerticalSpeed; // offset 0x1768, size 0x4, align 4
    float32 m_flBoostSpeedUp; // offset 0x176C, size 0x4, align 4
    float32 m_flCrouchLaunchReduction; // offset 0x1770, size 0x4, align 4
    float32 m_flMinFlyHeight; // offset 0x1774, size 0x4, align 4
    float32 m_flMaxFlyHeight; // offset 0x1778, size 0x4, align 4
    float32 m_flMaxPitchUp; // offset 0x177C, size 0x4, align 4
    float32 m_flMaxPitchDown; // offset 0x1780, size 0x4, align 4
    float32 m_flAllyDelayedBoostTime; // offset 0x1784, size 0x4, align 4
    float32 m_flChannelingAirDrag; // offset 0x1788, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x178C, size 0x4, align 4
    float32 m_flBombReleaseSpeed; // offset 0x1790, size 0x4, align 4
    float32 m_flBombReleasePitch; // offset 0x1794, size 0x4, align 4
    float32 m_flBombDropReleaseOffset; // offset 0x1798, size 0x4, align 4
    float32 m_flHoldBombOffsetX; // offset 0x179C, size 0x4, align 4
    float32 m_flHoldBombOffsetY; // offset 0x17A0, size 0x4, align 4
    float32 m_flHoldBombOffsetZ; // offset 0x17A4, size 0x4, align 4
    float32 m_flAnglePitchBias; // offset 0x17A8, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x17AC, size 0x4, align 4
    float32 m_flMoveCollideSpeed; // offset 0x17B0, size 0x4, align 4
    char _pad_17B4[0x4]; // offset 0x17B4
};
