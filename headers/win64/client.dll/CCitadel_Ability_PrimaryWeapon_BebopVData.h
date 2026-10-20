#pragma once

class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1358]; // offset 0x0
    CSoundEventName m_strWindupSound; // offset 0x1358, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBeamStartSound; // offset 0x1368, size 0x10, align 8
    CSoundEventName m_strBeamLoopSound1; // offset 0x1378, size 0x10, align 8
    CSoundEventName m_strBeamLoopSound2; // offset 0x1388, size 0x10, align 8
    CSoundEventName m_strBeamStopSound; // offset 0x1398, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // offset 0x13A8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flWindupRepeatCycle; // offset 0x1488, size 0x4, align 4 | MPropertyStartGroup
    char _pad_148C[0x4]; // offset 0x148C
};
