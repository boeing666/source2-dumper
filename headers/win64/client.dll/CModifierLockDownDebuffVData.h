#pragma once

class CModifierLockDownDebuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // offset 0xA38, size 0xE0, align 8
    CSoundEventName m_strFollowLoop; // offset 0xB18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEscapedSound; // offset 0xB28, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0xB38, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0xB48, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilencedModifier; // offset 0xB58, size 0x10, align 8
};
