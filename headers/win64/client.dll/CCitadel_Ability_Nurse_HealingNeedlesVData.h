#pragma once

class CCitadel_Ability_Nurse_HealingNeedlesVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1400, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ProcModifier; // offset 0x10B0, size 0x10, align 8
    CSubclassName< 4 > m_NewWeaponAbility; // offset 0x10C0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMinTimeBeforeSwappingBack; // offset 0x10D0, size 0x4, align 4
    char _pad_10D4[0x4]; // offset 0x10D4
    CGlobalSymbol m_strAG2PutAwayCastingAction; // offset 0x10D8, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingNeedleEntImpactParticle; // offset 0x10E0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingNeedleImpactParticle; // offset 0x11C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingNeedleProcParticle; // offset 0x12A0, size 0xE0, align 8
    CSoundEventName m_strHitConfirmPlayer; // offset 0x1380, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmPlayerHeadshot; // offset 0x1390, size 0x10, align 8
    CSoundEventName m_strHitConfirmNPC; // offset 0x13A0, size 0x10, align 8
    CSoundEventName m_strHitConfirmMaxHealth; // offset 0x13B0, size 0x10, align 8
    CSoundEventName m_strTopOffSound; // offset 0x13C0, size 0x10, align 8
    CSoundEventName m_strProcSound; // offset 0x13D0, size 0x10, align 8
    CSoundEventName m_strSwapToHealingSound; // offset 0x13E0, size 0x10, align 8
    CSoundEventName m_strSwapToPrimarySound; // offset 0x13F0, size 0x10, align 8
};
