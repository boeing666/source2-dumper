#pragma once

class CItemAOERootVData : public CitadelItemVData /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // offset 0x1180, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strRootTargetSound; // offset 0x1260, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1270, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // offset 0x1280, size 0x10, align 8
};
