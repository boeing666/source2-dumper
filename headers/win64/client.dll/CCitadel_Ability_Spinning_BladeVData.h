#pragma once

class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // offset 0x1170, size 0xE0, align 8
    CSoundEventName m_strThrowSound; // offset 0x1250, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strReturnSound; // offset 0x1260, size 0x10, align 8
    CSoundEventName m_strCatchSound; // offset 0x1270, size 0x10, align 8
    CSoundEventName m_strFailSound; // offset 0x1280, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1290, size 0x10, align 8
};
