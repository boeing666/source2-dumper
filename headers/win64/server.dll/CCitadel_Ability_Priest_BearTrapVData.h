#pragma once

class CCitadel_Ability_Priest_BearTrapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x14C8, size 0xE0, align 8
    CSoundEventName m_strExpiredSound; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDestroyedSound; // offset 0x15B8, size 0x10, align 8
    CSoundEventName m_strArmSound; // offset 0x15C8, size 0x10, align 8
    CSoundEventName m_strProjBounceSound; // offset 0x15D8, size 0x10, align 8
    CSoundEventName m_strProjThrowLoopSound; // offset 0x15E8, size 0x10, align 8
    CSoundEventName m_strProjArmedLoopSound; // offset 0x15F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x1608, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1618, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UntargetableModifier; // offset 0x1628, size 0x10, align 8
    float32 m_flVerticalSpawnOffset; // offset 0x1638, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHorizontalSpawnOffset; // offset 0x163C, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x1640, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1644, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1648, size 0x4, align 4
    float32 m_flDeceleration; // offset 0x164C, size 0x4, align 4
    float32 m_flMinSpeedToArm; // offset 0x1650, size 0x4, align 4
    float32 m_flReflectSpeedReductionRatio; // offset 0x1654, size 0x4, align 4
    float32 m_flGroundYawSpeedRatio; // offset 0x1658, size 0x4, align 4
    float32 m_flAirYawSpeedRatio; // offset 0x165C, size 0x4, align 4
    float32 m_flAirPitchSpeedRatio; // offset 0x1660, size 0x4, align 4
    float32 m_flAirRollSpeedRatio; // offset 0x1664, size 0x4, align 4
};
