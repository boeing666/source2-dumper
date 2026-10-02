#pragma once

class CCitadel_Modifire_Priest_FlashBangBurnAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BurnModifier; // offset 0x7E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x7F8, size 0xE0, align 8 | MPropertyStartGroup
};
