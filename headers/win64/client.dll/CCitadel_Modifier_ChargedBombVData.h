#pragma once

class CCitadel_Modifier_ChargedBombVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strBeepSound; // offset 0x878, size 0x10, align 8 | MPropertyStartGroup
};
