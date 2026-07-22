#pragma once

class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // offset 0x1908, size 0xE0, align 8
    CSoundEventName m_strThrowSound; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strReturnSound; // offset 0x19F8, size 0x10, align 8
    CSoundEventName m_strCatchSound; // offset 0x1A08, size 0x10, align 8
    CSoundEventName m_strFailSound; // offset 0x1A18, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1A28, size 0x10, align 8
};
