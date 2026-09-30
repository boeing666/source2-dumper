#pragma once

class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData /*0x0*/  // sizeof 0x1878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1488]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnKnockedOffHolderParticle; // offset 0x1488, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnKnockedOffUrnParticle; // offset 0x1568, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnOverheldDamageParticle; // offset 0x1648, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnExpireParticle; // offset 0x1728, size 0xE0, align 8
    CSoundEventName m_strUrnMeleeDropSound; // offset 0x1808, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strUrnOverheldDamageSound; // offset 0x1818, size 0x10, align 8
    CSoundEventName m_strUrnDroppedOffSound; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HoldingIdolModifier; // offset 0x1848, size 0x10, align 8
    float32 m_flRevealTime; // offset 0x1858, size 0x4, align 4 | MPropertyStartGroup
    int32 m_iComebackBounty; // offset 0x185C, size 0x4, align 4
    float32 m_flDamageTickRate; // offset 0x1860, size 0x4, align 4
    float32 m_flMaxHealthDamage; // offset 0x1864, size 0x4, align 4
    float32 m_flTimeToDamage; // offset 0x1868, size 0x4, align 4
    float32 m_flTimeToRunBackInstantly; // offset 0x186C, size 0x4, align 4
    float32 m_flHeldTimeRadius; // offset 0x1870, size 0x4, align 4
    float32 m_flJuggleTimeAdd; // offset 0x1874, size 0x4, align 4
};
