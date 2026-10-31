#pragma once

class CModifier_Fencer_Ultimate_Target_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flDamageTimeOffset; // offset 0x798, size 0x4, align 4
    float32 m_flEndTimeScaleForFlinch; // offset 0x79C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x7A0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strDashHitEnemy; // offset 0x880, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTimerSound; // offset 0x890, size 0x10, align 8
    CSoundEventName m_sSlashSound; // offset 0x8A0, size 0x10, align 8
};
