#pragma once

class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // offset 0x1490, size 0xE0, align 8
    CSoundEventName m_strThrowSound; // offset 0x1570, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strReturnSound; // offset 0x1580, size 0x10, align 8
    CSoundEventName m_strCatchSound; // offset 0x1590, size 0x10, align 8
    CSoundEventName m_strFailSound; // offset 0x15A0, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x15B0, size 0x10, align 8
};
