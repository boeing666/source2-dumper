#pragma once

class CCitadel_Modifier_Artist_SilenceAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ImmuneModifier; // offset 0x7F0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGroundParticle; // offset 0x800, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyGroundParticle; // offset 0x8E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_VisionBlockerModel; // offset 0x9C0, size 0xE0, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0xAA0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flImmuneDuration; // offset 0xAB0, size 0x4, align 4 | MPropertyStartGroup
    bool m_bCreatesVisionBlocker; // offset 0xAB4, size 0x1, align 1
    bool m_bVisionBlockerIsInvisible; // offset 0xAB5, size 0x1, align 1
    bool m_bDealsDamage; // offset 0xAB6, size 0x1, align 1
    char _pad_0AB7[0x1]; // offset 0xAB7
};
