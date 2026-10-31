#pragma once

class CCitadel_Modifier_Magician_AnimalHex_HexAreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HexModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaWarningEffect; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEffect; // offset 0x888, size 0xE0, align 8
    CSoundEventName m_strArmingSound; // offset 0x968, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strArmedSound; // offset 0x978, size 0x10, align 8
    CSoundEventName m_strLoopingSound; // offset 0x988, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x998, size 0x10, align 8
};
