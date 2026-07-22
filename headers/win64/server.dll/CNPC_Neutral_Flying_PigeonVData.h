#pragma once

class CNPC_Neutral_Flying_PigeonVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x3F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CRangeFloat m_flFrequencyY; // offset 0x28, size 0x8, align 255
    CRangeFloat m_flVerticalScale; // offset 0x30, size 0x8, align 255
    CRangeFloat m_flVerticalOffset; // offset 0x38, size 0x8, align 255
    CRangeFloat m_flFrequencyR; // offset 0x40, size 0x8, align 255
    CRangeFloat m_flOrbitRadius; // offset 0x48, size 0x8, align 255
    float32 m_flCollisionRadius; // offset 0x50, size 0x4, align 4
    float32 m_flParticleRadius; // offset 0x54, size 0x4, align 4
    CRangeFloat m_flLifeTime; // offset 0x58, size 0x8, align 255
    float32 m_flRespawnTime; // offset 0x60, size 0x4, align 4
    float32 m_flModelScale; // offset 0x64, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x68, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0x148, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x228, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // offset 0x308, size 0xE0, align 8
    CSoundEventName m_strDestroySound; // offset 0x3E8, size 0x10, align 8 | MPropertyStartGroup
};
