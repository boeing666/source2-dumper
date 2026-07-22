#pragma once

class CCitadel_Modifire_Priest_FlashBangBurnAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BurnModifier; // offset 0x7A8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x7B8, size 0xE0, align 8 | MPropertyStartGroup
};
