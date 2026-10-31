#pragma once

class CCitadel_Werewolf_TransformationVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ReadyModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_WerewolfModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCreditModifier; // offset 0x10A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformEndParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformKillParticle; // offset 0x1190, size 0xE0, align 8
    bool m_bAutoTransformOnReadyComplete; // offset 0x1270, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1271[0x7]; // offset 0x1271
    CSoundEventName m_strEndingWarningSound; // offset 0x1278, size 0x10, align 8 | MPropertyStartGroup
    CGlobalSymbol m_strAG2PostCastAction; // offset 0x1288, size 0x8, align 8 | MPropertyStartGroup
};
