#pragma once

class CModifier_Fencer_Ultimate_Target_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flDamageTimeOffset; // offset 0x750, size 0x4, align 4
    float32 m_flEndTimeScaleForFlinch; // offset 0x754, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x758, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strDashHitEnemy; // offset 0x838, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTimerSound; // offset 0x848, size 0x10, align 8
    CSoundEventName m_sSlashSound; // offset 0x858, size 0x10, align 8
};
