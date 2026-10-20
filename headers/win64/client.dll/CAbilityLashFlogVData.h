#pragma once

class CAbilityLashFlogVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1250, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogLifeLeachParticle; // offset 0x1150, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strHitConfirmSound; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FlogDebuffModifier; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
};
