#pragma once

class CCitadel_Item_DPS_Aura_VData : public CitadelItemVData /*0x0*/  // sizeof 0x19A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOECastParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x1998, size 0x10, align 8 | MPropertyStartGroup
};
