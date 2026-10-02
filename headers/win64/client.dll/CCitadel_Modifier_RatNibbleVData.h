#pragma once

class CCitadel_Modifier_RatNibbleVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LingerModifier; // offset 0x790, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ArmorTotalModifier; // offset 0x7A0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_DpsSound; // offset 0x7B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDashOffSound; // offset 0x7C0, size 0x10, align 8
    CSoundEventName m_strRatReleaseSound; // offset 0x7D0, size 0x10, align 8
    CSoundEventName m_strExpireOffPlayerSound; // offset 0x7E0, size 0x10, align 8
    float32 m_flArmorReductionRatioNonHero; // offset 0x7F0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_07F4[0x4]; // offset 0x7F4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatParticle; // offset 0x7F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatScreenParticle; // offset 0x8D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatCountParticle; // offset 0x9B8, size 0xE0, align 8
};
