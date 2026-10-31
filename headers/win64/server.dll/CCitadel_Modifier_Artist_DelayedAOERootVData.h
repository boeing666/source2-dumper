#pragma once

class CCitadel_Modifier_Artist_DelayedAOERootVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x7A8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x7B8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x7C8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // offset 0x8A8, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0x988, size 0x10, align 8 | MPropertyStartGroup
    bool m_bShouldDeployGroundAura; // offset 0x998, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0999[0x7]; // offset 0x999
};
