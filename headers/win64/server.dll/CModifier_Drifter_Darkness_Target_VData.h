#pragma once

class CModifier_Drifter_Darkness_Target_VData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VictimParticleEffect; // offset 0x7B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlindedStatusParticle; // offset 0x898, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_NearbyVictimStatusParticle; // offset 0x978, size 0xE0, align 8
};
