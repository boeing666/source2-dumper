#pragma once

class CCitadel_Ability_Necro_ZombieWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1340, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallWarningEffect; // offset 0x1160, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1250, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x1260, size 0x10, align 8
    float32 m_flMiddleStitchDistance; // offset 0x1270, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTraceRadius; // offset 0x1274, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1278, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x127C, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1280, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1284, size 0x4, align 4
    float32 m_flCurlNoiseFrequency; // offset 0x1288, size 0x4, align 4
    char _pad_128C[0x4]; // offset 0x128C
    CPiecewiseCurve m_CurlNoiseStrengthCurve; // offset 0x1290, size 0x40, align 8
    CSoundEventName m_strWallHitSound; // offset 0x12D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallPopSound; // offset 0x12E0, size 0x10, align 8
    CSoundEventName m_strWallBeamStartSound; // offset 0x12F0, size 0x10, align 8
    CSoundEventName m_strWallBeamStopSound; // offset 0x1300, size 0x10, align 8
    CSoundEventName m_strWallBeamPointStartLoopSound; // offset 0x1310, size 0x10, align 8
    CSoundEventName m_strWallBeamPointEndLoopSound; // offset 0x1320, size 0x10, align 8
    CSoundEventName m_strWallBeamPointClosestLoopSound; // offset 0x1330, size 0x10, align 8
};
