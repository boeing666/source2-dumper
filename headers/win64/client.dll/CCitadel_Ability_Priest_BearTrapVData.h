#pragma once

class CCitadel_Ability_Priest_BearTrapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A88, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x18F8, size 0xE0, align 8
    CSoundEventName m_strExpiredSound; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDestroyedSound; // offset 0x19E8, size 0x10, align 8
    CSoundEventName m_strArmSound; // offset 0x19F8, size 0x10, align 8
    CSoundEventName m_strProjBounceSound; // offset 0x1A08, size 0x10, align 8
    CSoundEventName m_strProjThrowLoopSound; // offset 0x1A18, size 0x10, align 8
    CSoundEventName m_strProjArmedLoopSound; // offset 0x1A28, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x1A38, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1A48, size 0x10, align 8
    float32 m_flVerticalSpawnOffset; // offset 0x1A58, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHorizontalSpawnOffset; // offset 0x1A5C, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x1A60, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1A64, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1A68, size 0x4, align 4
    float32 m_flDeceleration; // offset 0x1A6C, size 0x4, align 4
    float32 m_flMinSpeedToArm; // offset 0x1A70, size 0x4, align 4
    float32 m_flReflectSpeedReductionRatio; // offset 0x1A74, size 0x4, align 4
    float32 m_flGroundYawSpeedRatio; // offset 0x1A78, size 0x4, align 4
    float32 m_flAirYawSpeedRatio; // offset 0x1A7C, size 0x4, align 4
    float32 m_flAirPitchSpeedRatio; // offset 0x1A80, size 0x4, align 4
    float32 m_flAirRollSpeedRatio; // offset 0x1A84, size 0x4, align 4
};
