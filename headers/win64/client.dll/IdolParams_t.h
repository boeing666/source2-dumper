#pragma once

struct IdolParams_t  // sizeof 0x578, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_IdolModel; // offset 0x0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ParachuteModel; // offset 0xE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_CrateModel; // offset 0x1C0, size 0xE0, align 8
    CUtlString m_strLoopingSequenceName; // offset 0x2A0, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolReturnLocationParticle; // offset 0x2A8, size 0xE0, align 8
    float32 m_flIdolReturnLocationParticleScale; // offset 0x388, size 0x4, align 4
    char _pad_038C[0x4]; // offset 0x38C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolSpawnLocationParticle; // offset 0x390, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolDroppingParticle; // offset 0x470, size 0xE0, align 8
    CSoundEventName m_IdolSpawnSound; // offset 0x550, size 0x10, align 8
    CSoundEventName m_IdolSpawnCompleteSound; // offset 0x560, size 0x10, align 8
    float32 m_flIdolDropHeight; // offset 0x570, size 0x4, align 4
    float32 m_flIdolDropDuration; // offset 0x574, size 0x4, align 4
};
