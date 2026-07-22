#pragma once

class CCitadel_Modifier_Magician_AnimalHex_HexAreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HexModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // offset 0x840, size 0xE0, align 8
    CSoundEventName m_strArmingSound; // offset 0x920, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strArmedSound; // offset 0x930, size 0x10, align 8
    CSoundEventName m_strLoopingSound; // offset 0x940, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x950, size 0x10, align 8
};
