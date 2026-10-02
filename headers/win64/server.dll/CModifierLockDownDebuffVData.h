#pragma once

class CModifierLockDownDebuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // offset 0xA30, size 0xE0, align 8
    CSoundEventName m_strFollowLoop; // offset 0xB10, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEscapedSound; // offset 0xB20, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0xB30, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0xB40, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilencedModifier; // offset 0xB50, size 0x10, align 8
};
