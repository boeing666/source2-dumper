#pragma once

class CCitadel_ArmorUpgrade_DebuffReducerVData : public CitadelItemVData /*0x0*/  // sizeof 0x16C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffReducedParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x15D8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MoveSpeedModifier; // offset 0x16B8, size 0x10, align 8 | MPropertyGroupName
};
