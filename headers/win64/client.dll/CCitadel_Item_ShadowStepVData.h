#pragma once

class CCitadel_Item_ShadowStepVData : public CitadelItemVData /*0x0*/  // sizeof 0x1C78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1998, size 0xE0, align 8
    CSoundEventName m_strPulseTickSound; // offset 0x1A78, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxTargets; // offset 0x1A88, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CSoundEventName m_strExplodeSound; // offset 0x1A90, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x1AA0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1B80, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x1C60, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x1C64, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x1C68, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x1C6C, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x1C70, size 0x4, align 4
    char _pad_1C74[0x4]; // offset 0x1C74
};
