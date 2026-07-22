#pragma once

class CCitadel_Ability_Necro_ZombieWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AD8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallWarningEffect; // offset 0x18F8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x19E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x19F8, size 0x10, align 8
    float32 m_flMiddleStitchDistance; // offset 0x1A08, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTraceRadius; // offset 0x1A0C, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1A10, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1A14, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1A18, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1A1C, size 0x4, align 4
    float32 m_flCurlNoiseFrequency; // offset 0x1A20, size 0x4, align 4
    char _pad_1A24[0x4]; // offset 0x1A24
    CPiecewiseCurve m_CurlNoiseStrengthCurve; // offset 0x1A28, size 0x40, align 8
    CSoundEventName m_strWallHitSound; // offset 0x1A68, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallPopSound; // offset 0x1A78, size 0x10, align 8
    CSoundEventName m_strWallBeamStartSound; // offset 0x1A88, size 0x10, align 8
    CSoundEventName m_strWallBeamStopSound; // offset 0x1A98, size 0x10, align 8
    CSoundEventName m_strWallBeamPointStartLoopSound; // offset 0x1AA8, size 0x10, align 8
    CSoundEventName m_strWallBeamPointEndLoopSound; // offset 0x1AB8, size 0x10, align 8
    CSoundEventName m_strWallBeamPointClosestLoopSound; // offset 0x1AC8, size 0x10, align 8
};
