#pragma once

class CCitadel_Neutral_LaserBeamVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1458, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1140]; // offset 0x0
    float32 m_flBeamDPS; // offset 0x1140, size 0x4, align 4
    float32 m_flStartDistancem; // offset 0x1144, size 0x4, align 4
    float32 m_flBeamMoveSpeedm; // offset 0x1148, size 0x4, align 4
    float32 m_flAuraDropTickRate; // offset 0x114C, size 0x4, align 4
    float32 m_flAuraDuration; // offset 0x1150, size 0x4, align 4
    float32 m_flBeamWidth; // offset 0x1154, size 0x4, align 4
    float32 m_flBeamLength; // offset 0x1158, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x115C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifierAura > m_GroundAuraModifier; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1170, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // offset 0x1250, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // offset 0x1330, size 0xE0, align 8
    float32 m_flBeamPreviewRadius; // offset 0x1410, size 0x4, align 4
    char _pad_1414[0x4]; // offset 0x1414
    CSoundEventName m_BeamStartSound; // offset 0x1418, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x1428, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x1438, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x1448, size 0x10, align 8
};
