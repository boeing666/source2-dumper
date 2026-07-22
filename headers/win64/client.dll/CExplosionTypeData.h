#pragma once

class CExplosionTypeData  // sizeof 0x100, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataOverlayType MVDataAssociatedFile}
{
public:
    CSoundEventName m_SoundName; // offset 0x0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParticleEffect; // offset 0x10, size 0xE0, align 8
    bool m_bIsIncindiary; // offset 0xF0, size 0x1, align 1 | MPropertyDescription
    bool m_bHasForces; // offset 0xF1, size 0x1, align 1 | MPropertyDescription
    char _pad_00F2[0x6]; // offset 0xF2
    CGlobalSymbol m_DecalType; // offset 0xF8, size 0x8, align 8 | MPropertyDescription
};
