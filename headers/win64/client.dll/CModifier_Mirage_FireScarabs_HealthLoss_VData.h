#pragma once

class CModifier_Mirage_FireScarabs_HealthLoss_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthLossParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
};
