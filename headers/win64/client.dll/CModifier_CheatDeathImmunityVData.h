#pragma once

class CModifier_CheatDeathImmunityVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffPlayerParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_StatusEffect; // offset 0x958, size 0xE0, align 8
    CSoundEventName m_strTimerSound; // offset 0xA38, size 0x10, align 8 | MPropertyStartGroup
};
