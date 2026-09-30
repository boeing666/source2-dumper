#pragma once

class CCitadel_Item_ShadowStepVData : public CitadelItemVData /*0x0*/  // sizeof 0x1870, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1590, size 0xE0, align 8
    CSoundEventName m_strPulseTickSound; // offset 0x1670, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxTargets; // offset 0x1680, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1684[0x4]; // offset 0x1684
    CSoundEventName m_strExplodeSound; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x1698, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1778, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x1858, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x185C, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x1860, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x1864, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x1868, size 0x4, align 4
    char _pad_186C[0x4]; // offset 0x186C
};
