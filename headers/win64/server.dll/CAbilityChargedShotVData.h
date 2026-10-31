#pragma once

class CAbilityChargedShotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1328, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x1240, size 0xE0, align 8
    float32 m_flWallRicochetMaxNormalZ; // offset 0x1320, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flWallRicochetSpeedScale; // offset 0x1324, size 0x4, align 4 | MPropertyDescription
};
