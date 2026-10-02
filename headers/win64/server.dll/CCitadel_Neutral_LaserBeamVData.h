#pragma once

class CCitadel_Neutral_LaserBeamVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1400, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    float32 m_flBeamDPS; // offset 0x10E8, size 0x4, align 4
    float32 m_flStartDistancem; // offset 0x10EC, size 0x4, align 4
    float32 m_flBeamMoveSpeedm; // offset 0x10F0, size 0x4, align 4
    float32 m_flAuraDropTickRate; // offset 0x10F4, size 0x4, align 4
    float32 m_flAuraDuration; // offset 0x10F8, size 0x4, align 4
    float32 m_flBeamWidth; // offset 0x10FC, size 0x4, align 4
    float32 m_flBeamLength; // offset 0x1100, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x1104, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifierAura > m_GroundAuraModifier; // offset 0x1108, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1118, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // offset 0x11F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // offset 0x12D8, size 0xE0, align 8
    float32 m_flBeamPreviewRadius; // offset 0x13B8, size 0x4, align 4
    char _pad_13BC[0x4]; // offset 0x13BC
    CSoundEventName m_BeamStartSound; // offset 0x13C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x13D0, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x13E0, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x13F0, size 0x10, align 8
};
