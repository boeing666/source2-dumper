#pragma once

class CCitadel_Item_ShadowStepVData : public CitadelItemVData /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x15D8, size 0xE0, align 8
    CSoundEventName m_strPulseTickSound; // offset 0x16B8, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxTargets; // offset 0x16C8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16CC[0x4]; // offset 0x16CC
    CSoundEventName m_strExplodeSound; // offset 0x16D0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x16E0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x17C0, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x18A0, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x18A4, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x18A8, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x18AC, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x18B0, size 0x4, align 4
    char _pad_18B4[0x4]; // offset 0x18B4
};
