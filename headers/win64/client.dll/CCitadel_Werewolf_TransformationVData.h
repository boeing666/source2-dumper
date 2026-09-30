#pragma once

class CCitadel_Werewolf_TransformationVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ReadyModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_WerewolfModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCreditModifier; // offset 0x13C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformEndParticle; // offset 0x13D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformKillParticle; // offset 0x14B0, size 0xE0, align 8
    bool m_bAutoTransformOnReadyComplete; // offset 0x1590, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1591[0x7]; // offset 0x1591
    CSoundEventName m_strEndingWarningSound; // offset 0x1598, size 0x10, align 8 | MPropertyStartGroup
    CGlobalSymbol m_strAG2PostCastAction; // offset 0x15A8, size 0x8, align 8 | MPropertyStartGroup
};
