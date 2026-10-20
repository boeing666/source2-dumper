#pragma once

class CCitadel_Ability_Priest_BearTrapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ArmedParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1150, size 0xE0, align 8
    CSoundEventName m_strExpiredSound; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDestroyedSound; // offset 0x1240, size 0x10, align 8
    CSoundEventName m_strArmSound; // offset 0x1250, size 0x10, align 8
    CSoundEventName m_strProjBounceSound; // offset 0x1260, size 0x10, align 8
    CSoundEventName m_strProjThrowLoopSound; // offset 0x1270, size 0x10, align 8
    CSoundEventName m_strProjArmedLoopSound; // offset 0x1280, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x1290, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x12A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UntargetableModifier; // offset 0x12B0, size 0x10, align 8
    float32 m_flVerticalSpawnOffset; // offset 0x12C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHorizontalSpawnOffset; // offset 0x12C4, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x12C8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x12CC, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x12D0, size 0x4, align 4
    float32 m_flDeceleration; // offset 0x12D4, size 0x4, align 4
    float32 m_flMinSpeedToArm; // offset 0x12D8, size 0x4, align 4
    float32 m_flReflectSpeedReductionRatio; // offset 0x12DC, size 0x4, align 4
    float32 m_flGroundYawSpeedRatio; // offset 0x12E0, size 0x4, align 4
    float32 m_flAirYawSpeedRatio; // offset 0x12E4, size 0x4, align 4
    float32 m_flAirPitchSpeedRatio; // offset 0x12E8, size 0x4, align 4
    float32 m_flAirRollSpeedRatio; // offset 0x12EC, size 0x4, align 4
};
