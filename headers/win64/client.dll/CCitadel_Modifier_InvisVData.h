#pragma once

class CCitadel_Modifier_InvisVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisLoopParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisDetectRadiusParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // offset 0x910, size 0xE0, align 8
    float32 m_flDesatFactor; // offset 0x9F0, size 0x4, align 4
    char _pad_09F4[0x4]; // offset 0x9F4
    CSoundEventName m_strInvisRevealedSound; // offset 0x9F8, size 0x10, align 8 | MPropertyStartGroup
    bool m_bFadeInsteadOfRemoveOnBulletFire; // offset 0xA08, size 0x1, align 1 | MPropertyStartGroup
    bool m_bFadeInsteadOfRemoveOnAbilityUse; // offset 0xA09, size 0x1, align 1
    bool m_bBreakOnItemUse; // offset 0xA0A, size 0x1, align 1
    bool m_bFadeToVisibleAtEndOfDuration; // offset 0xA0B, size 0x1, align 1 | MPropertyDescription
    float32 m_flMinCloak; // offset 0xA0C, size 0x4, align 4
    float32 m_flMaxCloak; // offset 0xA10, size 0x4, align 4
    char _pad_0A14[0x4]; // offset 0xA14
};
