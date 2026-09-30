#pragma once

class CCitadel_Modifier_InvisVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisLoopParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisDetectRadiusParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // offset 0x920, size 0xE0, align 8
    float32 m_flDesatFactor; // offset 0xA00, size 0x4, align 4
    char _pad_0A04[0x4]; // offset 0xA04
    CSoundEventName m_strInvisRevealedSound; // offset 0xA08, size 0x10, align 8 | MPropertyStartGroup
    bool m_bFadeInsteadOfRemoveOnBulletFire; // offset 0xA18, size 0x1, align 1 | MPropertyStartGroup
    bool m_bFadeInsteadOfRemoveOnAbilityUse; // offset 0xA19, size 0x1, align 1
    bool m_bBreakOnItemUse; // offset 0xA1A, size 0x1, align 1
    bool m_bFadeToVisibleAtEndOfDuration; // offset 0xA1B, size 0x1, align 1 | MPropertyDescription
    float32 m_flMinCloak; // offset 0xA1C, size 0x4, align 4
    float32 m_flMaxCloak; // offset 0xA20, size 0x4, align 4
    char _pad_0A24[0x4]; // offset 0xA24
};
