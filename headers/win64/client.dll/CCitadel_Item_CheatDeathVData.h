#pragma once

class CCitadel_Item_CheatDeathVData : public CitadelItemVData /*0x0*/  // sizeof 0x1380, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagePulseParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // offset 0x1270, size 0xE0, align 8
    CSoundEventName m_sHealPulseSound; // offset 0x1350, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sHealAndDamagePulseSound; // offset 0x1360, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeathImmuneModifier; // offset 0x1370, size 0x10, align 8 | MPropertyStartGroup
};
