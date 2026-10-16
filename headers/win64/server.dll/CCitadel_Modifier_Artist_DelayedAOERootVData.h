#pragma once

class CCitadel_Modifier_Artist_DelayedAOERootVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x998, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x7B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x7C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // offset 0x8A0, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0x980, size 0x10, align 8 | MPropertyStartGroup
    bool m_bShouldDeployGroundAura; // offset 0x990, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0991[0x7]; // offset 0x991
};
