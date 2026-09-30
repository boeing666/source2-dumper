#pragma once

class CCitadel_ArmorUpgrade_DebuffReducerVData : public CitadelItemVData /*0x0*/  // sizeof 0x1680, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffReducedParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x1590, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MoveSpeedModifier; // offset 0x1670, size 0x10, align 8 | MPropertyGroupName
};
