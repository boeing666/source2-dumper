#pragma once

class CAbilityStormCloudVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LightningStrikeAOEModifier; // offset 0x1170, size 0x10, align 8
    CSoundEventName m_strLightningStrikeCast; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOscillateFrequency; // offset 0x1190, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOscillateSpeed; // offset 0x1194, size 0x4, align 4
    float32 m_flOscillateSpeedStart; // offset 0x1198, size 0x4, align 4
    float32 m_flOscillateStartOffset; // offset 0x119C, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x11A0, size 0x4, align 4
    float32 m_flFlightAirDrag; // offset 0x11A4, size 0x4, align 4
    float32 m_flVerticalMoveSpeedPercent; // offset 0x11A8, size 0x4, align 4
    float32 m_flAirAcceleration; // offset 0x11AC, size 0x4, align 4
};
