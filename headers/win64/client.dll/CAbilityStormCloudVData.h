#pragma once

class CAbilityStormCloudVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1948, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // offset 0x18F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LightningStrikeAOEModifier; // offset 0x1908, size 0x10, align 8
    CSoundEventName m_strLightningStrikeCast; // offset 0x1918, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOscillateFrequency; // offset 0x1928, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOscillateSpeed; // offset 0x192C, size 0x4, align 4
    float32 m_flOscillateSpeedStart; // offset 0x1930, size 0x4, align 4
    float32 m_flOscillateStartOffset; // offset 0x1934, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1938, size 0x4, align 4
    float32 m_flFlightAirDrag; // offset 0x193C, size 0x4, align 4
    float32 m_flVerticalMoveSpeedPercent; // offset 0x1940, size 0x4, align 4
    float32 m_flAirAcceleration; // offset 0x1944, size 0x4, align 4
};
