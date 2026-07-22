#pragma once

class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData /*0x0*/  // sizeof 0x1CF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1900]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnKnockedOffHolderParticle; // offset 0x1900, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnKnockedOffUrnParticle; // offset 0x19E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnOverheldDamageParticle; // offset 0x1AC0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnExpireParticle; // offset 0x1BA0, size 0xE0, align 8
    CSoundEventName m_strUrnMeleeDropSound; // offset 0x1C80, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strUrnOverheldDamageSound; // offset 0x1C90, size 0x10, align 8
    CSoundEventName m_strUrnDroppedOffSound; // offset 0x1CA0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // offset 0x1CB0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HoldingIdolModifier; // offset 0x1CC0, size 0x10, align 8
    float32 m_flRevealTime; // offset 0x1CD0, size 0x4, align 4 | MPropertyStartGroup
    int32 m_iComebackBounty; // offset 0x1CD4, size 0x4, align 4
    float32 m_flDamageTickRate; // offset 0x1CD8, size 0x4, align 4
    float32 m_flMaxHealthDamage; // offset 0x1CDC, size 0x4, align 4
    float32 m_flTimeToDamage; // offset 0x1CE0, size 0x4, align 4
    float32 m_flTimeToRunBackInstantly; // offset 0x1CE4, size 0x4, align 4
    float32 m_flHeldTimeRadius; // offset 0x1CE8, size 0x4, align 4
    float32 m_flJuggleTimeAdd; // offset 0x1CEC, size 0x4, align 4
};
