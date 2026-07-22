#pragma once

struct CCitadelHeroModelGameData_t  // sizeof 0x128, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults}
{
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hAmbientParticle; // offset 0x0, size 0xE0, align 8 | MPropertyStartGroup
    CUtlVector< AmbientParticleSettings_t > m_vecAmbientParticleSettings; // offset 0xE0, size 0x18, align 8
    float32 m_flTurnThreshold; // offset 0xF8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTurnDuration; // offset 0xFC, size 0x4, align 4
    float32 m_flStepHeight; // offset 0x100, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flCollisionRadius; // offset 0x104, size 0x4, align 4 | MPropertyDescription
    float32 m_flCollisionHeight; // offset 0x108, size 0x4, align 4
    Vector m_vCollisionHullMins; // offset 0x10C, size 0xC, align 4 | MPropertyDescription
    Vector m_vCollisionHullMaxs; // offset 0x118, size 0xC, align 4
    char _pad_0124[0x4]; // offset 0x124
};
