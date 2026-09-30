#pragma once

class CCitadel_Item_CheatDeathVData : public CitadelItemVData /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagePulseParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // offset 0x1590, size 0xE0, align 8
    CSoundEventName m_sHealPulseSound; // offset 0x1670, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sHealAndDamagePulseSound; // offset 0x1680, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeathImmuneModifier; // offset 0x1690, size 0x10, align 8 | MPropertyStartGroup
};
