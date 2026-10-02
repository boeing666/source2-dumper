#pragma once

class CCitadel_Modifier_MysticalPianoVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StunModifier; // offset 0x7E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DazeModifier; // offset 0x7F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x808, size 0xE0, align 8 | MPropertyStartGroup
};
