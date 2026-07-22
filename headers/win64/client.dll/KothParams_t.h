#pragma once

struct KothParams_t  // sizeof 0x2E8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    float32 m_flKothRadius; // offset 0x0, size 0x4, align 4
    float32 m_flKothWarningDropHeight; // offset 0x4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothEarlyWarningParticle; // offset 0x8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothSpawnLocationParticle; // offset 0xE8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KothOnSpawnParticle; // offset 0x1C8, size 0xE0, align 8
    CSoundEventName m_strKothSpawnLoopStartSound; // offset 0x2A8, size 0x10, align 8
    CSoundEventName m_strKothSpawnLoopSound; // offset 0x2B8, size 0x10, align 8
    CSoundEventName m_strKothPreSpawnLoopSound; // offset 0x2C8, size 0x10, align 8
    CSoundEventName m_strKothSpawnCompleteSound; // offset 0x2D8, size 0x10, align 8
};
