#pragma once

class CCitadel_Modifier_InvisVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisLoopParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisDetectRadiusParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // offset 0x958, size 0xE0, align 8
    float32 m_flDesatFactor; // offset 0xA38, size 0x4, align 4
    char _pad_0A3C[0x4]; // offset 0xA3C
    CSoundEventName m_strInvisRevealedSound; // offset 0xA40, size 0x10, align 8 | MPropertyStartGroup
    bool m_bFadeInsteadOfRemoveOnBulletFire; // offset 0xA50, size 0x1, align 1 | MPropertyStartGroup
    bool m_bFadeInsteadOfRemoveOnAbilityUse; // offset 0xA51, size 0x1, align 1
    bool m_bBreakOnItemUse; // offset 0xA52, size 0x1, align 1
    bool m_bFadeToVisibleAtEndOfDuration; // offset 0xA53, size 0x1, align 1 | MPropertyDescription
    float32 m_flMinCloak; // offset 0xA54, size 0x4, align 4
    float32 m_flMaxCloak; // offset 0xA58, size 0x4, align 4
    char _pad_0A5C[0x4]; // offset 0xA5C
};
