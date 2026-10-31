#pragma once

class CAbilityLashFlogVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogLifeLeachParticle; // offset 0x1160, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strHitConfirmSound; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FlogDebuffModifier; // offset 0x1250, size 0x10, align 8 | MPropertyStartGroup
};
