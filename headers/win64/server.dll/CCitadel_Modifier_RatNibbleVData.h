#pragma once

class CCitadel_Modifier_RatNibbleVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LingerModifier; // offset 0x798, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ArmorTotalModifier; // offset 0x7A8, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_DpsSound; // offset 0x7B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDashOffSound; // offset 0x7C8, size 0x10, align 8
    CSoundEventName m_strRatReleaseSound; // offset 0x7D8, size 0x10, align 8
    CSoundEventName m_strExpireOffPlayerSound; // offset 0x7E8, size 0x10, align 8
    float32 m_flArmorReductionRatioNonHero; // offset 0x7F8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_07FC[0x4]; // offset 0x7FC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatParticle; // offset 0x800, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatScreenParticle; // offset 0x8E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatCountParticle; // offset 0x9C0, size 0xE0, align 8
};
