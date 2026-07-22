#pragma once

class CCitadel_Item_TrophyCollectorVData : public CitadelItemVData /*0x0*/  // sizeof 0x19B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EarnedParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GoldModifier; // offset 0x1998, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEarnedSound; // offset 0x19A8, size 0x10, align 8 | MPropertyStartGroup
};
