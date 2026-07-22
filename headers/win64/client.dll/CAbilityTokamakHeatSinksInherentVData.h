#pragma once

class CAbilityTokamakHeatSinksInherentVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotTracerParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotWeaponFxParticle; // offset 0x18F8, size 0xE0, align 8
    CSoundEventName m_strHotWeaponShootSound; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strOverheatRed; // offset 0x19E8, size 0x10, align 8
    CSoundEventName m_strOverheatFull; // offset 0x19F8, size 0x10, align 8
};
