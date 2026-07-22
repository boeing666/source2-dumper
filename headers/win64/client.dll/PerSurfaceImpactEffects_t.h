#pragma once

struct PerSurfaceImpactEffects_t  // sizeof 0xF8, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CGlobalSymbol m_strDecal; // offset 0x0, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticle; // offset 0x8, size 0xE0, align 8
    CSoundEventName m_strSound; // offset 0xE8, size 0x10, align 8
};
