#pragma once

class CAbilityStormCloudVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1518, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LightningStrikeAOEModifier; // offset 0x14D8, size 0x10, align 8
    CSoundEventName m_strLightningStrikeCast; // offset 0x14E8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOscillateFrequency; // offset 0x14F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOscillateSpeed; // offset 0x14FC, size 0x4, align 4
    float32 m_flOscillateSpeedStart; // offset 0x1500, size 0x4, align 4
    float32 m_flOscillateStartOffset; // offset 0x1504, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1508, size 0x4, align 4
    float32 m_flFlightAirDrag; // offset 0x150C, size 0x4, align 4
    float32 m_flVerticalMoveSpeedPercent; // offset 0x1510, size 0x4, align 4
    float32 m_flAirAcceleration; // offset 0x1514, size 0x4, align 4
};
