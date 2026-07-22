#pragma once

class CModifierGarbageAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FinishParticle; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AlliedParticle; // offset 0x888, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyParticle; // offset 0x968, size 0xE0, align 8
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0xA48, size 0x10, align 8 | MPropertyGroupName
};
