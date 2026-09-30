#pragma once

class CItemAOERootVData : public CitadelItemVData /*0x0*/  // sizeof 0x15C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strRootTargetSound; // offset 0x1590, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x15A0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x15B0, size 0x10, align 8
};
