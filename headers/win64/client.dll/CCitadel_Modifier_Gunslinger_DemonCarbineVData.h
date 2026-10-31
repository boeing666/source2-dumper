#pragma once

class CCitadel_Modifier_Gunslinger_DemonCarbineVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FullyChargedParticle; // offset 0x878, size 0xE0, align 8
    CSoundEventName m_strFullyCharged; // offset 0x958, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strShotSound; // offset 0x968, size 0x10, align 8
};
