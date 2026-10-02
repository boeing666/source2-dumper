#pragma once

class CModifier_Mirage_Tornado_EvasionVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffSelf; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffEnemy; // offset 0xA30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReflectedBulletTracerParticle; // offset 0xB10, size 0xE0, align 8
    CSoundEventName m_strAttackerHitSound; // offset 0xBF0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strVictimHitSound; // offset 0xC00, size 0x10, align 8
};
