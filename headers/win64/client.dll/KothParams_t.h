#pragma once

struct KothParams_t  // sizeof 0x2F0, align 0x8 (client) {MGetKV3ClassDefaults}
{
    float32 m_flKothRadius; // offset 0x0, size 0x4, align 4
    float32 m_flKothWarningDropHeight; // offset 0x4, size 0x4, align 4
    float32 m_flTrailingBonusFullDeficitPercent; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothEarlyWarningParticle; // offset 0x10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothSpawnLocationParticle; // offset 0xF0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothOnSpawnParticle; // offset 0x1D0, size 0xE0, align 8
    CSoundEventName m_strKothSpawnLoopStartSound; // offset 0x2B0, size 0x10, align 8
    CSoundEventName m_strKothSpawnLoopSound; // offset 0x2C0, size 0x10, align 8
    CSoundEventName m_strKothPreSpawnLoopSound; // offset 0x2D0, size 0x10, align 8
    CSoundEventName m_strKothSpawnCompleteSound; // offset 0x2E0, size 0x10, align 8
};
