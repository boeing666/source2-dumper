#pragma once

class CModifierVacuumAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FinishParticle; // offset 0x7F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AlliedParticle; // offset 0x8D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyParticle; // offset 0x9B0, size 0xE0, align 8
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0xA90, size 0x10, align 8 | MPropertyGroupName
};
