#pragma once

class CCitadel_Ability_Necro_ZombieWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallWarningEffect; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x15B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x15C8, size 0x10, align 8
    float32 m_flMiddleStitchDistance; // offset 0x15D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTraceRadius; // offset 0x15DC, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x15E0, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x15E4, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x15E8, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x15EC, size 0x4, align 4
    float32 m_flCurlNoiseFrequency; // offset 0x15F0, size 0x4, align 4
    char _pad_15F4[0x4]; // offset 0x15F4
    CPiecewiseCurve m_CurlNoiseStrengthCurve; // offset 0x15F8, size 0x40, align 8
    CSoundEventName m_strWallHitSound; // offset 0x1638, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallPopSound; // offset 0x1648, size 0x10, align 8
    CSoundEventName m_strWallBeamStartSound; // offset 0x1658, size 0x10, align 8
    CSoundEventName m_strWallBeamStopSound; // offset 0x1668, size 0x10, align 8
    CSoundEventName m_strWallBeamPointStartLoopSound; // offset 0x1678, size 0x10, align 8
    CSoundEventName m_strWallBeamPointEndLoopSound; // offset 0x1688, size 0x10, align 8
    CSoundEventName m_strWallBeamPointClosestLoopSound; // offset 0x1698, size 0x10, align 8
};
