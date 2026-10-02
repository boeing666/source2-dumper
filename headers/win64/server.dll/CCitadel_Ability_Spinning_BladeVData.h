#pragma once

class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1608, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // offset 0x14D8, size 0xE0, align 8
    CSoundEventName m_strThrowSound; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strReturnSound; // offset 0x15C8, size 0x10, align 8
    CSoundEventName m_strCatchSound; // offset 0x15D8, size 0x10, align 8
    CSoundEventName m_strFailSound; // offset 0x15E8, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x15F8, size 0x10, align 8
};
