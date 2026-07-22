#pragma once

class CModifierLockDownDebuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // offset 0x9F0, size 0xE0, align 8
    CSoundEventName m_strFollowLoop; // offset 0xAD0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strEscapedSound; // offset 0xAE0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0xAF0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0xB00, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilencedModifier; // offset 0xB10, size 0x10, align 8
};
