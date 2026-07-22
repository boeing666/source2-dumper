#pragma once

class CCitadel_Modifier_Bookworm_AOEMagic_AreaModifierVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA30, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0x760, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x770, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x780, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // offset 0x860, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoECastEffect; // offset 0x940, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0xA20, size 0x10, align 8 | MPropertyStartGroup
};
