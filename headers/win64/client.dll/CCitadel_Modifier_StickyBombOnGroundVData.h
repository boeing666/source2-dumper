#pragma once

class CCitadel_Modifier_StickyBombOnGroundVData : public CCitadel_Modifier_StickyBombAttachedVData /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xB60]; // offset 0x0
    float32 m_flGroundOffset; // offset 0xB60, size 0x4, align 4
    char _pad_0B64[0x4]; // offset 0xB64
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombParticle; // offset 0xB68, size 0xE0, align 8
};
