#pragma once

class CPrecipitationVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x2F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // offset 0x28, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationPuddleEffect; // offset 0x108, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationPostEffect; // offset 0x1E8, size 0xE0, align 8
    float32 m_flInnerDistance; // offset 0x2C8, size 0x4, align 4
    ParticleAttachment_t m_nAttachType; // offset 0x2CC, size 0x4, align 4
    bool m_bBatchSameVolumeType; // offset 0x2D0, size 0x1, align 1
    char _pad_02D1[0x3]; // offset 0x2D1
    int32 m_nRTEnvCP; // offset 0x2D4, size 0x4, align 4
    int32 m_nRTEnvCPComponent; // offset 0x2D8, size 0x4, align 4
    char _pad_02DC[0x4]; // offset 0x2DC
    CUtlString m_szModifier; // offset 0x2E0, size 0x8, align 8
    int32 m_nUseSnapshotFromSurfaceGraph; // offset 0x2E8, size 0x4, align 4 | MPropertyDescription
    PrecipitationFilter_t m_snapshotFilter; // offset 0x2EC, size 0x4, align 4
};
