#pragma once

class CCitadel_Modifier_Artist_TetherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ImmobilizeModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TetherParticle; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImmobilizeBuildupParticle; // offset 0x888, size 0xE0, align 8
    CSoundEventName m_strExplodeHitConfirmSound; // offset 0x968, size 0x10, align 8 | MPropertyStartGroup
};
