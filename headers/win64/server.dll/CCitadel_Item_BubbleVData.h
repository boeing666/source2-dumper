#pragma once

class CCitadel_Item_BubbleVData : public CitadelItemVData /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_CastTargetSound; // offset 0x1270, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_BubbleModifier; // offset 0x1280, size 0x10, align 8 | MPropertyGroupName
};
