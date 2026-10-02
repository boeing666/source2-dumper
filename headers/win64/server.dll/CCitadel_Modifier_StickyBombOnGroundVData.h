#pragma once

class CCitadel_Modifier_StickyBombOnGroundVData : public CCitadel_Modifier_StickyBombAttachedVData /*0x0*/  // sizeof 0xC40, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xB58]; // offset 0x0
    float32 m_flGroundOffset; // offset 0xB58, size 0x4, align 4
    char _pad_0B5C[0x4]; // offset 0xB5C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombParticle; // offset 0xB60, size 0xE0, align 8
};
