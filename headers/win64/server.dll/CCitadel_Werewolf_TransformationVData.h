#pragma once

class CCitadel_Werewolf_TransformationVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ReadyModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_WerewolfModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCreditModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformEndParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformKillParticle; // offset 0x14F8, size 0xE0, align 8
    bool m_bAutoTransformOnReadyComplete; // offset 0x15D8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_15D9[0x7]; // offset 0x15D9
    CSoundEventName m_strEndingWarningSound; // offset 0x15E0, size 0x10, align 8 | MPropertyStartGroup
    CGlobalSymbol m_strAG2PostCastAction; // offset 0x15F0, size 0x8, align 8 | MPropertyStartGroup
};
