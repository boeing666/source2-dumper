#pragma once

class CNPC_MidBossVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xE28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    int32 m_iStartingHealth; // offset 0xC50, size 0x4, align 4
    int32 m_iHealthGainPerMinute; // offset 0xC54, size 0x4, align 4
    float32 m_flAggroDuration; // offset 0xC58, size 0x4, align 4
    char _pad_0C5C[0x4]; // offset 0xC5C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // offset 0xC60, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // offset 0xD40, size 0xE0, align 8
    float32 m_flDyingDuration; // offset 0xE20, size 0x4, align 4
    char _pad_0E24[0x4]; // offset 0xE24
};
