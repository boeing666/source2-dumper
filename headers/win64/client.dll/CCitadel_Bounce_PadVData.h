#pragma once

class CCitadel_Bounce_PadVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x3F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flBouncePadCollisionHeight; // offset 0x28, size 0x4, align 4
    float32 m_flBouncePadCollisionRadius; // offset 0x2C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x30, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // offset 0x110, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // offset 0x2D0, size 0xE0, align 8
    CSoundEventName m_strCasterBounceSound; // offset 0x3B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strOtherHeroBounceSound; // offset 0x3C0, size 0x10, align 8
    CSoundEventName m_strBarrelBounceSound; // offset 0x3D0, size 0x10, align 8
    CSoundEventName m_strExpiredSound; // offset 0x3E0, size 0x10, align 8
};
