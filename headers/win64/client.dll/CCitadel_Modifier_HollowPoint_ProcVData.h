#pragma once

class CCitadel_Modifier_HollowPoint_ProcVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x880]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x880, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_ParticleModifier; // offset 0x960, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x970, size 0x10, align 8
};
