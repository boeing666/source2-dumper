#pragma once

class CItemAOERootVData : public CitadelItemVData /*0x0*/  // sizeof 0x1608, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strRootTargetSound; // offset 0x15D8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x15E8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x15F8, size 0x10, align 8
};
