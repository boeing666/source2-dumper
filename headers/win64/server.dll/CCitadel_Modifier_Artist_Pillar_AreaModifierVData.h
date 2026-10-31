#pragma once

class CCitadel_Modifier_Artist_Pillar_AreaModifierVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_PillarModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // offset 0x888, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoECastEffect; // offset 0x968, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0xA48, size 0x10, align 8 | MPropertyStartGroup
};
