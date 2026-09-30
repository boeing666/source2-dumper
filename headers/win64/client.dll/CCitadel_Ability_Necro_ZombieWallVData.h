#pragma once

class CCitadel_Ability_Necro_ZombieWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1660, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallWarningEffect; // offset 0x1480, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1570, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x1580, size 0x10, align 8
    float32 m_flMiddleStitchDistance; // offset 0x1590, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTraceRadius; // offset 0x1594, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1598, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x159C, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x15A0, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x15A4, size 0x4, align 4
    float32 m_flCurlNoiseFrequency; // offset 0x15A8, size 0x4, align 4
    char _pad_15AC[0x4]; // offset 0x15AC
    CPiecewiseCurve m_CurlNoiseStrengthCurve; // offset 0x15B0, size 0x40, align 8
    CSoundEventName m_strWallHitSound; // offset 0x15F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallPopSound; // offset 0x1600, size 0x10, align 8
    CSoundEventName m_strWallBeamStartSound; // offset 0x1610, size 0x10, align 8
    CSoundEventName m_strWallBeamStopSound; // offset 0x1620, size 0x10, align 8
    CSoundEventName m_strWallBeamPointStartLoopSound; // offset 0x1630, size 0x10, align 8
    CSoundEventName m_strWallBeamPointEndLoopSound; // offset 0x1640, size 0x10, align 8
    CSoundEventName m_strWallBeamPointClosestLoopSound; // offset 0x1650, size 0x10, align 8
};
