#pragma once

class CNPC_MidBossVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xE08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    int32 m_iStartingHealth; // offset 0xC30, size 0x4, align 4
    int32 m_iHealthGainPerMinute; // offset 0xC34, size 0x4, align 4
    float32 m_flAggroDuration; // offset 0xC38, size 0x4, align 4
    char _pad_0C3C[0x4]; // offset 0xC3C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // offset 0xC40, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // offset 0xD20, size 0xE0, align 8
    float32 m_flDyingDuration; // offset 0xE00, size 0x4, align 4
    char _pad_0E04[0x4]; // offset 0xE04
};
